#include<stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#define SPEED 30.0

float i=0.0,m=0.0,n=0.0,o=0.0,c=0.0,b=0.0;  
float p=0.75,q=0.47,r=0.14; 
float e=0.90,f=0.91,g=0.98;
int count=0;

int light=1,day=1,plane=0,comet=0,xm=900,bird=0;      
char ch;

void declare(char *string)
{
     while(*string)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
}

void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}


void draw_object()
{
int l;
if(day==1)
{
	if(plane==1)
	{}
}
else
{
	if(plane==1)
	{}

}	

	//chim
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(540,330);
		glVertex2f(540,430);
		glVertex2f(960,430);
		glVertex2f(960,330);
		
	glEnd();
	
	//home
	
	glColor3f(p,q,r);
	glBegin(GL_POLYGON);
		
		glVertex2f(550,100);
		glVertex2f(550,330);
		glVertex2f(950,330);
		glVertex2f(950,100);
		glVertex2f(850,100);
		glVertex2f(850,250);
		glVertex2f(650,250);
		glVertex2f(650,100);
		
	glEnd();
	
	//window border
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(595,205);
		glVertex2f(595,285);
		glVertex2f(675,285);
		glVertex2f(675,205);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(825,205);
		glVertex2f(825,285);
		glVertex2f(905,285);
		glVertex2f(905,205);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(845,205);
		glVertex2f(845,285);
		glVertex2f(850,285);
		glVertex2f(850,205);
		
	glEnd();
	
	
	
	//door
	glColor3f(e,f,g);
	glBegin(GL_POLYGON);
		
		glVertex2f(800,100);
		glVertex2f(800,220);
		glVertex2f(700,220);
		glVertex2f(700,100);
		
	glEnd();
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(760,120);
		glVertex2f(760,200);
		glVertex2f(700,220);
		glVertex2f(700,100);
		
	glEnd();
	
	
	
	//window
	glColor3f(e,f,g);
	glBegin(GL_POLYGON);
		
		glVertex2f(600,210);
		glVertex2f(600,280);
		glVertex2f(670,280);
		glVertex2f(670,210);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(830,210);
		glVertex2f(830,280);
		glVertex2f(900,280);
		glVertex2f(900,210);
		
	glEnd();
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(620,210);
		glVertex2f(620,280);
		glVertex2f(625,280);
		glVertex2f(625,210);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(650,210);
		glVertex2f(650,280);
		glVertex2f(655,280);
		glVertex2f(655,210);
		
	glEnd();
	
	
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(850,205);
		glVertex2f(850,285);
		glVertex2f(855,285);
		glVertex2f(855,205);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(880,205);
		glVertex2f(880,285);
		glVertex2f(885,285);
		glVertex2f(885,205);
		
	glEnd();
		
	
	if(bird==1)
	{}
	

glFlush();
}


void idle()
{
	
if(light==0 && (i>=0 && i<=1150)) 
 {

	 i+=SPEED/10;
     m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }
 
 if(light==0 && (i>=2600 && i<=3000)) 
 {

	 i+=SPEED/10;
	 m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }

if(light==0)
 {
	 i=i;
	 m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }
if(count<=3)
{

glClearColor(1.0,1.0,1.0,1.0);

     i+=SPEED/10;
     b+=SPEED/10;
     m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;
}
if(i>1900)
	 i=800.0;
if(m>1100)
	 m=0.0;
if( o>75)
 {
	plane=0;
 }
if(c>500)
 {
	comet=0;
 }
if(b>500)
{
	b=0.0;
	i=800.0;
	count=count+1;
	
}

glutPostRedisplay();

}

void mouse(int btn,int state,int x,int y)
{
// 	if(btn==GLUT_LEFT_BUTTON && state==GLUT_UP)
// exit(0);
}


void keyboardFunc( unsigned char key, int x, int y )
{
switch( key )
    {

case 'd':
	case 'D':
		day=1;
		p=0.75;
		q=0.47;
		r=0.14; 
		break;

	case 'n':
case 'N':
		day=0;
		p=0.52;
		q=0.37;
		r=0.26;
		break;
		
	case 'b':
case 'B':
		bird=1;
		i=800;
		b=0.0;
		count=0;
		break;
		
		
		case 'l':
	case 'L':
		e=0.90;
		f=0.91;
		g=0.98;
		break;
		
		case 'f':
	case 'F':
		e=0.0;
		f=0.0;
		g=0.0;
		break;

    };

}


void main_menu(int index)
{
	switch(index)
	{
	case 1:
	if(index==1)
	 {
	plane=1;
		 o=n=0.0;
	 }
	break;

	case 2:
	if(index==2)
	 {
		comet=1;
		 c=0.0;
	 }
	break;
	}
}



void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,1.0);
glPointSize(2.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1100.0,0.0,700.0);
}



void display()
{
glClear(GL_COLOR_BUFFER_BIT);
draw_object();
glFlush();
}


int main(int argc,char** argv)
{
int c_menu;
	printf("Project by CSEMiniProjects.com\n");
    printf("--------------------------------------------------------------------------------");
    printf("                    Simple Village                              ");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("Press 'd' or 'D' to make it day. \n\n");
	printf("Press 'n' or 'N' to make it night. \n\n");
	printf("Press 'b' or 'B' to fly Birds. \n\n");
	printf("Press 'l' or 'L' to turn On the lights. \n\n");
	printf("Press 'f' or 'F' to turn Off the lights. \n\n");
	printf("Press RIGHT MOUSE BUTTON to display menu. \n\n");
	printf("Press LEFT MOUSE BUTTON to quit the program. \n\n\n");
	printf("Press any key and Hit ENTER.\n");
	scanf("%s",&ch);

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1100.0,700.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Simple Village");
	glutDisplayFunc(display);
    glutIdleFunc(idle);
	glutKeyboardFunc(keyboardFunc);
	glutMouseFunc(mouse);
	myinit();
	c_menu=glutCreateMenu(main_menu);
	glutAddMenuEntry("Aeroplane",1);
	glutAddMenuEntry("Comet",2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}

