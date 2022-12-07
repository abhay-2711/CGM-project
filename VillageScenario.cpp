
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night

float e=0.90,f=0.91,g=0.98;
float p=0.75,q=0.47,r=0.14; 
char ch;
#define maxWD 1000
#define maxHT 600

//callback

///tree

void tree()
{
///tree1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);


    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



glEnd();

///tree2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);


    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);


    glVertex3i(60+100, 600, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);


    glVertex3i(60+100, 650, 0);



glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



glEnd();
///tree4
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



glEnd();
///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

glEnd();


}
///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}


///house

void house()
{

///house1
// glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

// glBegin(GL_POLYGON);

//     glVertex3i(220, 350, 0);
//     glVertex3i(380, 350, 0);
//     glVertex3i(380, 450, 0);
//     glVertex3i(220, 450, 0);


// glEnd();

// glColor3f(0, 0, 1);
// glBegin(GL_POLYGON);

//     glVertex3i(200, 450, 0);
//     glVertex3i(400, 450, 0);
//     glVertex3i(300, 650, 0);



// glEnd();


// glColor3f(1,1,0);
// glBegin(GL_POLYGON);

//     glVertex3i(280, 350, 0);
//     glVertex3i(320, 350, 0);
//     glVertex3i(320, 450, 0);
//     glVertex3i(280, 450, 0);


// glEnd();
// ///house2
// glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

// glBegin(GL_POLYGON);

//     glVertex3i(220+200, 350+50, 0);
//     glVertex3i(380+200, 350+50, 0);
//     glVertex3i(380+200, 450+50, 0);
//     glVertex3i(220+200, 450+50, 0);


// glEnd();

// glColor3f(1.444, .5, 0);
// glBegin(GL_POLYGON);

//     glVertex3i(200+200, 450+50, 0);
//     glVertex3i(400+200, 450+50, 0);
//     glVertex3i(300+200, 650+50, 0);



// glEnd();


// glColor3f(1,1,0);
// glBegin(GL_POLYGON);

//     glVertex3i(280+200, 350+50, 0);
//     glVertex3i(320+200, 350+50, 0);
//     glVertex3i(320+200, 450+50, 0);
//     glVertex3i(280+200, 450+50, 0);


// glEnd();

}




int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
       glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,150,0);
    glVertex3i(150+50,150,0);
    glVertex3i(120+50,100,0);
    glVertex3i(30,100,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);

    glVertex3i(50+200,150+50,0);
    glVertex3i(150+200,150+50,0);
    glVertex3i(150+200,220+50,0);
    glVertex3i(50+200,220+50,0);
    glEnd();



}
//night
void night_effect()
{
     glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}
//star
void star()
{
    //star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//moon
void moon()
{


glColor3f(1,1,1);


a=600;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;

glVertex3i(x+a,y+b,0);


glBegin(GL_POLYGON);

glVertex3i(x+a,y+b,0);

if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}

// void draw_pixel(GLint cx, GLint cy)
// {

// 	glBegin(GL_POINTS);
// 		glVertex2i(cx,cy);
// 	glEnd();
// }

// void plotpixels(GLint h,GLint k, GLint x,GLint y)
// {
// 	draw_pixel(x+h,y+k);
// 	draw_pixel(-x+h,y+k);
// 	draw_pixel(x+h,-y+k);
// 	draw_pixel(-x+h,-y+k);
// 	draw_pixel(y+h,x+k);
// 	draw_pixel(-y+h,x+k);
// 	draw_pixel(y+h,-x+k);
// 	draw_pixel(-y+h,-x+k);
// }


///clouds
void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();

         sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
    else
    {

        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();
        //sun();
        moon();
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }

    //chim
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
        
		glVertex2f(540-200,330+250);
		glVertex2f(540-200,430+250);
		glVertex2f(960-200,430+250);
		glVertex2f(960-200,330+250);
		
	glEnd();
	
	//home
	
	glColor3f(p,q,r);
	glBegin(GL_POLYGON);
		
		glVertex2f(550-200,100+250);
		glVertex2f(550-200,330+250);
		glVertex2f(950-200,330+250);
		glVertex2f(950-200,100+250);
		glVertex2f(850-200,100+250);
		glVertex2f(850-200,250+250);
		glVertex2f(650-200,250+250);
		glVertex2f(650-200,100+250);
		
	glEnd();
	
	//window border
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(595-200,205+250);
		glVertex2f(595-200,285+250);
		glVertex2f(675-200,285+250);
		glVertex2f(675-200,205+250);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(825-200,205+250);
		glVertex2f(825-200,285+250);
		glVertex2f(905-200,285+250);
		glVertex2f(905-200,205+250);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(845-200,205+250);
		glVertex2f(845-200,285+250);
		glVertex2f(850-200,285+250);
		glVertex2f(850-200,205+250);
		
	glEnd();
	
	
	
	//door
	glColor3f(e,f,g);
	glBegin(GL_POLYGON);
		
		glVertex2f(800-200,100+250);
		glVertex2f(800-200,220+250);
		glVertex2f(700-200,220+250);
		glVertex2f(700-200,100+250);
		
	glEnd();
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(760-200,120+250);
		glVertex2f(760-200,200+250);
		glVertex2f(700-200,220+250);
		glVertex2f(700-200,100+250);
		
	glEnd();
	
	//window
	glColor3f(e,f,g);
	glBegin(GL_POLYGON);
		
		glVertex2f(600-200,210+250);
		glVertex2f(600-200,280+250);
		glVertex2f(670-200,280+250);
		glVertex2f(670-200,210+250);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(830-200,210+250);
		glVertex2f(830-200,280+250);
		glVertex2f(900-200,280+250);
		glVertex2f(900-200,210+250);
		
	glEnd();
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(620-200,210+250);
		glVertex2f(620-200,280+250);
		glVertex2f(625-200,280+250);
		glVertex2f(625-200,210+250);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(650-200,210+250);
		glVertex2f(650-200,280+250);
		glVertex2f(655-200,280+250);
		glVertex2f(655-200,210+250);
		
	glEnd();
	
	
	
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(850-200,205+250);
		glVertex2f(850-200,285+250);
		glVertex2f(855-200,285+250);
		glVertex2f(855-200,205+250);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(880-200,205+250);
		glVertex2f(880-200,285+250);
		glVertex2f(885-200,285+250);
		glVertex2f(885-200,205+250);
		
	glEnd();	

glFlush();

}


void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
draw_object();
glFlush();
}

void mouse (int button, int state, int x, int y)
{
    switch (button)
    {
        //  Left Button Clicked
        case GLUT_LEFT_BUTTON:

            switch (state)
            {
                //  Pressed
                case GLUT_DOWN:
                    printf ("Mouse Left Button Pressed (Down)...\n");
                    break;
                //  Released
                case GLUT_UP:
                    printf ("Mouse Left Button Released (Up)...\n");
                    break;
            }

            break;

        //  Middle Button clicked
        case GLUT_MIDDLE_BUTTON:

            switch (state)
            {
                //  Pressed
                case GLUT_DOWN:
                    printf ("Mouse Middle Button Pressed (Down)...\n");
                    break;
                //  Released
                case GLUT_UP:
                    printf ("Mouse Middle Button Released (Up)...\n");
                    break;
            }

            break;

        //  Right Button Clicked
        case GLUT_RIGHT_BUTTON:

            switch (state)
            {
                //  Pressed
                case GLUT_DOWN:
                    printf ("Mouse Right Button Pressed (Down)...\n");
                    break;
                //  Released
                case GLUT_UP:
                    printf ("Mouse Right Button Released (Up)...\n");
                    break;
            }

            break;
    }
}

void motion (int x, int y)
{
    //  Print the mouse drag position
    printf ("Mouse Drag Position: %d, %d.\n", x, y);
}

void pmotion (int x, int y)
{
    //  Print mouse move position
    printf ("Mouse Move Position: %d, %d.\n", x, y);
}

void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
    case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
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

    
	}

}



void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}

void init(void)
{
glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);
// glColor3f(0.0,0.0,1.0);
glPointSize(2.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);
}

int main(int argc, char** argv)
{
	printf("Project\n");
    printf("--------------------------------------------------------------------------------");
    printf("                     Village Scenario                              ");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("Press 'd' or 'D' to make it day. \n\n");
	printf("Press 'n' or 'N' to make it night. \n\n");
	printf("Press 'b' or 'B' to fly Birds. \n\n");
	printf("Press 'l' or 'L' to turn On the lights. \n\n");
	printf("Press 'f' or 'F' to turn Off the lights. \n\n");
    printf("Press 's' or 'S' for sunrise and sunset. \n\n");

	printf("Press any key and Hit ENTER.\n");
	scanf("%s",&ch);

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");
glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);
	glutMouseFunc(mouse);
	glutMotionFunc(motion);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}


