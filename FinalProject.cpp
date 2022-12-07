
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
#include<math.h>
int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night
float xm = 900,it=0.0,br=0.0,bird = 1;
int count = 0;
///tree

void tree(){
    glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(100, 350, 0);
    glVertex3i(130, 350, 0);


    glVertex3i(130, 540, 0);
    glVertex3i(100, 540, 0);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
  for(int i=0;i<1000;++i){
    glVertex3f(73+50*cos(2*3.14159*i/1000.0),540+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
  for(int i=0;i<1000;++i){
    glVertex3f(157+50*cos(2*3.14159*i/1000.0),540+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
  for(int i=0;i<1000;++i){
    glVertex3f(77+50*cos(2*3.14159*i/1000.0),610+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
  for(int i=0;i<1000;++i){
    glVertex3f(153+50*cos(2*3.14159*i/1000.0),610+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
  for(int i=0;i<1000;++i){
    glVertex3f(115+50*cos(2*3.14159*i/1000.0),670+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();

///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 450+100, 0);
    glVertex3i(50+1000, 450+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 450+100, 0);
    glVertex3i(110+1000, 450+100, 0);


    glVertex3i(60+1000, 550+100, 0);



glEnd();
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

  

glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1135+35*cos(2*3.14159*i/1000.0),700+35*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1185+35*cos(2*3.14159*i/1000.0),700+35*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1185+35*cos(2*3.14159*i/1000.0),745+35*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1135+35*cos(2*3.14159*i/1000.0),745+35*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1160+35*cos(2*3.14159*i/1000.0),790+35*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(10+1100, 500+200, 0);
//     glVertex3i(110+1100, 500+200, 0);


//     glVertex3i(60+1100, 600+200, 0);



// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15+1100, 550+200, 0);
//     glVertex3i(105+1100, 550+200, 0);


//     glVertex3i(60+1100, 650+200, 0);



// glEnd();
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

    
///tree1
// glColor3f(0.6156863,0,0);

// glBegin(GL_POLYGON);

//     glVertex3i(50, 350, 0);
//     glVertex3i(70, 350, 0);


//     glVertex3i(70, 500, 0);
//     glVertex3i(50, 500, 0);

// glEnd();

//   glColor3f(0.0, 0.5, 0.0);

// glBegin(GL_POLYGON);

//     glVertex3i(10, 500, 0);
//     glVertex3i(110, 500, 0);


//     glVertex3i(60, 600, 0);

// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15, 550, 0);
//     glVertex3i(105, 550, 0);


//     glVertex3i(60, 650, 0);



// glEnd();

// ///tree2
// glColor3f(0.6156863,0,0);

// glBegin(GL_POLYGON);


//     glVertex3i(50+100, 350, 0);
//     glVertex3i(70+100, 350, 0);


//     glVertex3i(70+100, 500, 0);
//     glVertex3i(50+100, 500, 0);


// glEnd();

//   glColor3f(0.0, 0.5, 0.0);

// glBegin(GL_POLYGON);


//     glVertex3i(10+100, 500, 0);
//     glVertex3i(110+100, 500, 0);


//     glVertex3i(60+100, 600, 0);



// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15+100, 550, 0);
//     glVertex3i(105+100, 550, 0);


//     glVertex3i(60+100, 650, 0);



// glEnd();
// ///tree3
// glColor3f(0.6156863,0,0);

// glBegin(GL_POLYGON);


//     glVertex3i(50+1000, 350+100, 0);
//     glVertex3i(70+1000, 350+100, 0);


//     glVertex3i(70+1000, 500+100, 0);
//     glVertex3i(50+1000, 500+100, 0);


// glEnd();

//   glColor3f(0.0, 0.5, 0.0);

// glBegin(GL_POLYGON);


//     glVertex3i(10+1000, 500+100, 0);
//     glVertex3i(110+1000, 500+100, 0);


//     glVertex3i(60+1000, 600+100, 0);



// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15+1000, 550+100, 0);
//     glVertex3i(105+1000, 550+100, 0);


//     glVertex3i(60+1000, 650+100, 0);



// glEnd();
// ///tree4
// glColor3f(0.6156863,0,0);

// glBegin(GL_POLYGON);


//     glVertex3i(50+1100, 350+200, 0);
//     glVertex3i(70+1100, 350+200, 0);


//     glVertex3i(70+1100, 500+200, 0);
//     glVertex3i(50+1100, 500+200, 0);


// glEnd();

//   glColor3f(0.0, 0.5, 0.0);

// glBegin(GL_POLYGON);


//     glVertex3i(10+1100, 500+200, 0);
//     glVertex3i(110+1100, 500+200, 0);


//     glVertex3i(60+1100, 600+200, 0);



// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15+1100, 550+200, 0);
//     glVertex3i(105+1100, 550+200, 0);


//     glVertex3i(60+1100, 650+200, 0);



// glEnd();
// ///tree5
// glColor3f(0.6156863,0,0);

// glBegin(GL_POLYGON);


//     glVertex3i(50+900, 350+200, 0);
//     glVertex3i(70+900, 350+200, 0);


//     glVertex3i(70+900, 500+200, 0);
//     glVertex3i(50+900, 500+200, 0);


// glEnd();

//   glColor3f(0.0, 0.5, 0.0);

// glBegin(GL_POLYGON);


//     glVertex3i(10+900, 500+200, 0);
//     glVertex3i(110+900, 500+200, 0);


//     glVertex3i(60+900, 600+200, 0);



// glEnd();
// glBegin(GL_POLYGON);


//     glVertex3i(15+900, 550+200, 0);
//     glVertex3i(105+900, 550+200, 0);


//     glVertex3i(60+900, 650+200, 0);

// glEnd();



///river
void fly(){
    if(bird == 1){
	/*glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		
		glVertex2f(300+i-xm,250+b);
		glVertex2f(330+i-xm,250+b);
		glVertex2f(330+i-xm,280+b);
		
		
	glEnd();*/
	
	glColor3f(0.73,0.16,0.96 );
	glBegin(GL_POLYGON);
		
		glVertex2f(140+it-xm,265+200+br);
		glVertex2f(170+it-xm,265+200+br);
		glVertex2f(170+it-xm,250+200+br);
		
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(170+it-xm,275+200+br);
		glVertex2f(180+it-xm,275+200+br);
		glVertex2f(170+it-xm,265+200+br);
		
		
	glEnd();
	
	//
	
	glBegin(GL_POLYGON);
		
		glVertex2f(40+it-xm,285+200+br);
		glVertex2f(70+it-xm,285+200+br);
		glVertex2f(70+it-xm,270+200+br);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(70+it-xm,295+200+br);
		glVertex2f(80+it-xm,295+200+br);
		glVertex2f(70+it-xm,285+200+br);
		
		
	glEnd();
	
	
	//
	
	glBegin(GL_POLYGON);
		
		glVertex2f(-10+it-xm,285+200+br);
		glVertex2f(20+it-xm,285+200+br);
		glVertex2f(20+it-xm,270+200+br);
		
	glEnd();
	
	glBegin(GL_POLYGON);
		
		glVertex2f(20+it-xm,295+200+br);
		glVertex2f(30+it-xm,295+200+br);
		glVertex2f(20+it-xm,285+200+br);
		
		
	glEnd();	
	
	
}
}
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
void cloud(){
    int l;
    int m=0.01;
    for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(160+m,925,l);

	}


	for(l=0;l<=35;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(200+m,925,l);
		draw_circle(225+m,925,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(265+m,925,l);
	}

//cloud2

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(370+m,1015,l);
}




	for(l=0;l<=35;l++)
	{

		glColor3f(1.0,1.0,1.0);
		draw_circle(410+m,1015,l);
		draw_circle(435+m,1015,l);
		draw_circle(470+m,1015,l);
	}

for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(500+m,1015,l);
}

}

///house

void house(float r_color,float g_color,float b_color)
{
//house1
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


glEnd();

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



glEnd();


glColor3f(r_color,g_color,b_color);
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


glEnd();
///house2
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);


glEnd();

glColor3f(1.444, .5, 0);
glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



glEnd();

//house3
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220+600, 350, 0);
    glVertex3i(380+600, 350, 0);
    glVertex3i(380+600, 450, 0);
    glVertex3i(220+600, 450, 0);


glEnd();

glColor3f(1.444, .5, 0);
glBegin(GL_POLYGON);

    glVertex3i(200+600, 450, 0);
    glVertex3i(400+600, 450, 0);
    glVertex3i(300+600, 650, 0);



glEnd();

glColor3f(r_color,g_color,b_color);
glBegin(GL_POLYGON);

    glVertex3i(280+600, 350, 0);
    glVertex3i(320+600, 350, 0);
    glVertex3i(320+600, 450, 0);
    glVertex3i(280+600, 450, 0);


glEnd();

}
int rad,x,y,a,b,h;
bool SE,E;

void sun()
{   
    
    glBegin(GL_POLYGON);
    glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1000+50*cos(2*3.14159*i/1000.0),1000+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();



}

//sunset
void sunset(){
    glBegin(GL_POLYGON);
    // glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1000+50*cos(2*3.14159*i/1000.0),800+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
}


///boat
void boat1(){
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(980-200,150-50,0);
    glVertex3i(1120+50-200,150-50,0);
    glVertex3i(1100+50-200,100-50,0);
    glVertex3i(1000-200,100-50,0);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(980+40-200,150-50,0);
    glVertex3i(1120-200,150-50,0);
    glVertex3i(1120-200,220-50,0);
    glVertex3i(1020-200,220-50,0);
    glEnd();
}

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
void sunset_effect(){
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


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
    glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
 for(int i=0;i<1000;++i)
  {
  glVertex3f(1000+50*cos(2*3.14159*i/1000.0),1000+50*sin(2*3.14159*i/1000.0),0);
  }
 glEnd();

}



///clouds
void draw_object()
{
    if(day==1)
    {   
       sun();
        glPushMatrix();
        glTranslatef(posx,0,0);
        cloud();
        glPopMatrix();
        land();
        hill();
        tree();
        river();
        house(0.1,0,0);
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-posx,0,0);
        boat1();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(posx,posx,0);
        fly();
        glPopMatrix();
    }
    else if(day==2){
        sunset_effect();
        sunset();
        glPushMatrix();
        glTranslatef(posx,0,0);
        cloud();
        glPopMatrix();
        land();
        hill();
        tree();
        river();
        house(1.0,1.0,1.0);
        
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-posx,0,0);
        boat1();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(posx,posx,0);
        fly();
        glPopMatrix();
    }
    else
    {
        
        
        night_effect();
        moon();
        land();
        star();
        hill();
        tree();
        river();
        house(1.0,1.0,0.0);
        //sun();
        
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-posx,0,0);
        boat1();
        glPopMatrix();
         glPushMatrix();
        glTranslatef(posx,posx,0);
        fly();
        glPopMatrix();
    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
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
    case 'E':
        day=2;
        display();
        break;
    
    case 'e':
        day=2;
        display();
        break;
    case 'b':
        bird=1;
		it=800;
		br=0.0;
		count=0;
		break;
    case 'B':
		bird=1;
		it=800;
		br=0.0;
		count=0;
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

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}



