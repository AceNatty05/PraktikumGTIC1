#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    glBegin(GL_QUADS);
        glColor3f(0,0.5,1);
        glVertex2f(0.3,0.3);
        glVertex2f(0.5,0.3);
        glVertex2f(0.5,0.1);
        glVertex2f(0.3,0.1);
    glEnd();

    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutCreateWindow("QUADS");

    glutDisplayFunc(display);
    glClearColor(1,1,1,1);

    glutMainLoop();
}
