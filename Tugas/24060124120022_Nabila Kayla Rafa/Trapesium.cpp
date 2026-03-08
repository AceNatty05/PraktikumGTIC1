#include <GL/glut.h> 

void Trapesium(void) {
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.03f, 0.51f, 0.58f);
    glVertex2f(-0.20f, 0.30f);
    glVertex2f( 0.20f, 0.30f);
    glVertex2f( 0.40f, -0.30f);
    glVertex2f(-0.40f, -0.30f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Trapesium");
    glutDisplayFunc(Trapesium);
    glClearColor(0.92f, 0.95f, 0.96f, 1.00f);
    glutMainLoop();
    return 0;
}
