{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 CourierNewPSMT;\f1\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs37\fsmilli18667 \cf2 \expnd0\expndtw0\kerning0
DD#include<GL/glut.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 #include<stdlib.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 #include<stdio.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 float x1,x2,y1,y2;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void display(void)\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 float dy,dx,step,x,y,k,Xin,Yin;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 dx=x2-x1;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 dy=y2-y1;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 if(abs(dx)> abs(dy))\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 step = abs(dx);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 else
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 step = abs(dy);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 Xin = dx/step;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 Yin = dy/step;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 x= x1;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 y=y1;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glBegin(GL_POINTS);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glVertex2i(x,y);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glEnd();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 for (k=1 ;k<=step;k++)\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 x= x + Xin;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 y= y + Yin;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glBegin(GL_POINTS);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 glVertex2i(x,y);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glEnd();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glFlush();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void init(void)\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glClearColor(0.7,0.7,0.7,0.7);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glMatrixMode(GL_PROJECTION);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glLoadIdentity();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 gluOrtho2D(-100,100,-100,100);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 int main(int argc, char** argv) \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 printf("Enter the value of x1 : ");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 scanf("%f",&x1);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 printf("Enter the value of y1 : ");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 scanf("%f",&y1);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 printf("Enter the value of x2 : ");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 scanf("%f",&x2);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 printf("Enter the value of y2 : ");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 scanf("%f",&y2);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInit(&argc, argv);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitWindowSize (500, 500);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutInitWindowPosition (100,100);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutCreateWindow ("DDA Line Algo");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 init();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutDisplayFunc(display);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 glutMainLoop();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 return 0;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \
}