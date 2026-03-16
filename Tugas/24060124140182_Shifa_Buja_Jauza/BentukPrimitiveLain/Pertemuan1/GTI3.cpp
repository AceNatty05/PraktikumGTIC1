#include <gl/glut.h>

void Bunga(void)
{	
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);

    glColor3f(0.0f,1.0f,0.0f);
    glVertex3f(-0.02,-0.45,0); glVertex3f(0.02,-0.45,0);
    glVertex3f(0.02,-0.05,0);  glVertex3f(-0.02,-0.05,0);

    glVertex3f(-0.15,-0.25,0); glVertex3f(-0.02,-0.25,0);
    glVertex3f(-0.02,-0.15,0); glVertex3f(-0.15,-0.15,0);

    glVertex3f(0.02,-0.25,0); glVertex3f(0.15,-0.25,0);
    glVertex3f(0.15,-0.15,0); glVertex3f(0.02,-0.15,0);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex3f(-0.05,0.0,0); glVertex3f(0.05,0.0,0);
    glVertex3f(0.05,0.1,0);  glVertex3f(-0.05,0.1,0);

    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(-0.05,0.1,0); glVertex3f(0.05,0.1,0);
    glVertex3f(0.05,0.2,0);  glVertex3f(-0.05,0.2,0);

    glVertex3f(-0.15,0.0,0); glVertex3f(-0.05,0.0,0);
    glVertex3f(-0.05,0.1,0); glVertex3f(-0.15,0.1,0);

    glVertex3f(0.05,0.0,0); glVertex3f(0.15,0.0,0);
    glVertex3f(0.15,0.1,0); glVertex3f(0.05,0.1,0);

    glVertex3f(-0.05,-0.1,0); glVertex3f(0.05,-0.1,0);
    glVertex3f(0.05,0.0,0);   glVertex3f(-0.05,0.0,0);

    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("Bunga Pixel");
    glutDisplayFunc(Bunga);

    glClearColor(1.0,1.0,1.0,1.0);

    glutMainLoop();
}