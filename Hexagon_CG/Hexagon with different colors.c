#include <GL/glut.h>
void initGL(){
glClearColor(0.0f,0.0f,0.0f,0.0f);
}
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(-0.1f,-0.1f);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(0.0f,-0.17f);
glColor3f(0.0f,1.0f,0.0f);
glVertex2f(0.1f,-0.1f);
glColor3f(0.0f,1.0f,0.0f);
glVertex2f( 0.1f,  0.1f);
glColor3f(0.0f,0.0f,1.0f);
glVertex2f( 0.0f,  0.17f);
glColor3f(0.0f,0.0f,1.0f);
glVertex2f(-0.1f,  0.1f);

glEnd();
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("Hexagon with different colors");
glutInitWindowSize(500,500);
glutDisplayFunc(display);
glutInitWindowPosition (100, 100);
initGL();
glutMainLoop();
return 0;
}
