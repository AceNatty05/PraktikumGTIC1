#include <GL/glut.h>

void garis(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    
    glLineWidth(2.0f);

    glBegin(GL_LINES);
        glColor3f(0,1,1);
        glVertex2f(-0.5,0.8);
        glVertex2f(-0.3,0.7);

        glVertex2f(-0.3,0.8);
        glVertex2f(-0.5,0.7);
    glEnd();

    glFlush();
}

int main(int argc,char* argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Garis");

    glutDisplayFunc(garis);
    glClearColor(0.0f,0.0f,1.0f,1.0f);

    glutMainLoop();
}
