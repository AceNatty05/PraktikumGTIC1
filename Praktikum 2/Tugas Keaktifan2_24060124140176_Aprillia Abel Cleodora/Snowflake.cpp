#include <GL/glut.h>

void branch()
{
    glBegin(GL_LINES);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.5f);

    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.1f, 0.4f);

    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.1f, 0.4f);

    glVertex2f(0.0f, 0.2f);
    glVertex2f(-0.08f, 0.3f);

    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.08f, 0.3f);

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    glColor3f(0.5f, 0.9f, 1.0f); 

    for(int i = 0; i < 6; i++)
    {
        glPushMatrix();
        glRotatef(i * 60.0f, 0.0f, 0.0f, 1.0f); 
        branch();
        glPopMatrix();
    }

    glFlush();
}

void init()
{
    glClearColor(0.0,0.0,0.0,1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("Snowflake");

    init();

    glutDisplayFunc(display);

    glutMainLoop();
}
