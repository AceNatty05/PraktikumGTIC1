#include <GL/glut.h>

void BowTie(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.00f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.97f, 0.45f, 0.66f);
    glVertex2f(-0.30f, 0.20f);
    glVertex2f(-0.30f, -0.20f);
    glVertex2f(0.30f, 0.20f);
    glVertex2f(0.30f, -0.20f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Bow Tie");
    glutDisplayFunc(BowTie);
    glClearColor(0.99f, 0.92f, 0.92f, 1.00f);
    glutMainLoop();
    return 0;
}
