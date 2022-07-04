{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 CourierNewPSMT;\f1\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs37\fsmilli18667 \cf2 \expnd0\expndtw0\kerning0
#include<GL/glut.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 #include<stdlib.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void myInit(void)
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glClearColor(2.0,2.0,2.0,4.0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glColor3f(0.0f,0.0f,0.0f);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glLineWidth(4.0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glMatrixMode(GL_PROJECTION);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glLoadIdentity();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 gluOrtho2D(0.0,640.0,0.0,480.0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void drawLineInt(GLint x1,GLint y1,GLint x2,GLint y2)
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glBegin(GL_LINES);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(x1,y1);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(x2,y2);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glEnd();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void display(void)
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glClear(GL_COLOR_BUFFER_BIT);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glBegin(GL_LINES);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(100,200);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(400,200);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(200,100);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glVertex2i(200,400);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glEnd();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glFlush();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 int main(int argc, char** argv)
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInit(&argc,argv);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitWindowSize(500,500);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitWindowPosition(100,150);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutCreateWindow("My First Attempt");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutDisplayFunc(display);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 myInit();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 drawLineInt(100,200,40,60);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutMainLoop();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 return 0;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}\'a0\'a0\'a0\'a0 
\f1\fs29\fsmilli14667 \
}