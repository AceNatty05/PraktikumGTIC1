#include <GL/glut.h>
#include <math.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,1.0,1.0);

    float radius = 0.5;

    glBegin(GL_LINE_LOOP);

    for(int i=0;i<360;i++)
    {
        float angle = i * 3.1416 / 180;

        float x = radius * cos(angle);
        float y = radius * sin(angle);

        glVertex2f(x,y);
    }

    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0,0,0,1);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lingkaran");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
