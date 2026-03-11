#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0,1,1);
        glVertex2f(-0.6,0.3);
        glVertex2f(-0.7,0.1);
        glVertex2f(-0.6,-0.1);
        glVertex2f(-0.5,0.1);
        glVertex2f(-0.4,0.2);
    glEnd();

    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutCreateWindow("TRIANGLE FAN");

    glutDisplayFunc(display);
    glClearColor(1,1,1,1);

    glutMainLoop();
}
