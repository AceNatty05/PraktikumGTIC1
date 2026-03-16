#include <gl/glut.h>
#include <math.h>

#define PI 3.1415926535

void roda()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    for(int i=0;i<50;i++)
    {
        float angle = 2*PI*i/50;
        glVertex2f(cos(angle)*0.04, sin(angle)*0.04);
    }
    glEnd();


    glColor3f(0.8,0.8,0.8);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<50;i++)
    {
        float angle = 2*PI*i/50;
        glVertex2f(cos(angle)*0.04, sin(angle)*0.04);
    }
    glEnd();
}

void mobil(float r,float g,float b)
{
    glColor3f(r,g,b);


    glBegin(GL_QUADS);
        glVertex2f(-0.15,0.0);
        glVertex2f(0.15,0.0);
        glVertex2f(0.15,0.1);
        glVertex2f(-0.15,0.1);
    glEnd();


    glBegin(GL_TRIANGLES);
        glVertex2f(-0.08,0.1);
        glVertex2f(0.08,0.1);
        glVertex2f(0.0,0.18);
    glEnd();


    glPushMatrix();
        glTranslatef(-0.1,-0.03,0);
        roda();
    glPopMatrix();


    glPushMatrix();
        glTranslatef(0.1,-0.03,0);
        roda();
    glPopMatrix();
}

void RenderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.3,0.3,0.3);
    glBegin(GL_QUADS);
        glVertex2f(-1,-0.4);
        glVertex2f(1,-0.4);
        glVertex2f(1,-0.8);
        glVertex2f(-1,-0.8);
    glEnd();


    glColor3f(0.6,0.6,0.9);
    glBegin(GL_QUADS);
        glVertex2f(-0.9,0.5);
        glVertex2f(-0.6,0.5);
        glVertex2f(-0.6,-0.4);
        glVertex2f(-0.9,-0.4);
    glEnd();


    glPushMatrix();
        glTranslatef(0.8,-0.2,0);

        glColor3f(0.5,0.3,0.0);
        glBegin(GL_QUADS);
            glVertex2f(-0.03,-0.3);
            glVertex2f(0.03,-0.3);
            glVertex2f(0.03,0.0);
            glVertex2f(-0.03,0.0);
        glEnd();

        glColor3f(0.0,0.8,0.0);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.15,0.0);
            glVertex2f(0.15,0.0);
            glVertex2f(0.0,0.25);
        glEnd();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.5,-0.4,0);
        mobil(1,0,0);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0,-0.4,0);
        mobil(0,0,1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.5,-0.4,0);
        mobil(0,1,0);
    glPopMatrix();

    glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("Mobil dan Lingkungan");

    glutDisplayFunc(RenderScene);

    glClearColor(0.6,0.8,1.0,1.0);

    glutMainLoop();
}