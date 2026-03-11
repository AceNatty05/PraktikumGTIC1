#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.7,0.2,0.5);
        glVertex2f(-0.4,-0.2);
        glVertex2f(-0.4,-0.4);

        glVertex2f(-0.2,-0.2);
        glVertex2f(-0.2,-0.4);

        glVertex2f(0.0,-0.2);
        glVertex2f(0.0,-0.4);

        glVertex2f(0.2,-0.2);
        glVertex2f(0.2,-0.4);
    glEnd();

    glFlush();
}


int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutCreateWindow("QUAD STRIP");

    glutDisplayFunc(display);
    glClearColor(1,1,1,1);

    glutMainLoop();
}
