#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    glBegin(GL_LINE_STRIP);
        glColor3f(0,1,0);
        glVertex2f(-0.1,0.8);
        glVertex2f(0.0,0.7);
        glVertex2f(0.1,0.8);
        glVertex2f(0.2,0.7);
    glEnd();

    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutCreateWindow("LINE STRIP");

    glutDisplayFunc(display);
    glClearColor(1,1,1,1);

    glutMainLoop();
}
