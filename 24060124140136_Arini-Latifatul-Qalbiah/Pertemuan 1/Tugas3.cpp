#include <GL/glut.h>

// fungsi menggambar satu kubus
void drawCube(float x, float y, float z)
{
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidCube(1);
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -10.0);

    // Baris bawah (3 kubus)
    glColor3f(1,0,0);
    drawCube(-1.2, -1.5, 0);

    glColor3f(1,0,1);
    drawCube(0.0, -1.5, 0);

    glColor3f(0,0,1);
    drawCube(1.2, -1.5, 0);

    // Baris tengah (2 kubus)
    glColor3f(1,0,1);
    drawCube(-0.6, -0.5, 0);

    glColor3f(0,0,1);
    drawCube(0.6, -0.5, 0);
    
    // Baris atas (1 kubus)
	glColor3f(0,0,1);
    drawCube(0.0, 0.5, 0);

    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0,0,w,h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,(float)w/h,1,100);

    glMatrixMode(GL_MODELVIEW);
}

void init()
{
    glClearColor(2,1,0,2);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,600);
    glutCreateWindow("Lilak");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
}
