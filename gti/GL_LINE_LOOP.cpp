#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    glBegin(GL_LINE_LOOP);
        glColor3f(1,0.5,0);
        glVertex2f(0.4,0.8);
        glVertex2f(0.6,0.8);
        glVertex2f(0.6,0.6);
        glVertex2f(0.4,0.6);
    glEnd();

    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutCreateWindow("LINE LOOP");

    glutDisplayFunc(display);
    glClearColor(1,1,1,1);

    glutMainLoop();
}
