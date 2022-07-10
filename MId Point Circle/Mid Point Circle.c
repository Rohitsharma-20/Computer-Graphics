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

\f0\fs37\fsmilli18667 #include<math.h>
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void Circle()\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 GLfloat xi, yi, theta = 0;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 GLfloat x_c = 0, y_c = 0, r = 0.5;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 int COUNT;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glClear(GL_COLOR_BUFFER_BIT);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 for (COUNT = 1 ; COUNT <= 10000 ; COUNT++) \{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 theta = theta + 0.001;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 xi = x_c + r*cos(theta);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 yi = y_c + r*sin(theta);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 glBegin(GL_POINTS);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 glVertex2f(xi, yi);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0\'a0\'a0\'a0\'a0 glEnd();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glFlush();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 void Initial()\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glClearColor(1.0, 0.5, 0.5, 0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glColor3f(1,1,1);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glPointSize(5.0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glMatrixMode(GL_PROJECTION);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glLoadIdentity();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 int main(int argc, char **argv)\{
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutInit( & argc, argv );
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutInitWindowSize(400, 400);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutInitWindowPosition(0, 0);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutCreateWindow("Draw Circle");
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 Initial();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutDisplayFunc(Circle);
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 glutMainLoop();
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \'a0\'a0\'a0 return 0;
\f1\fs29\fsmilli14667 \

\f0\fs37\fsmilli18667 \}
\f1\fs29\fsmilli14667 \
}