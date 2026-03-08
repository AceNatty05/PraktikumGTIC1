#include <GL/glut.h>

void Segienam(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.00f, 0.35f, 0.35f);
    glVertex2f(0.00f, 0.00f);
    glColor3f(1.00f, 0.66f, 0.35f);
    glVertex2f(0.00f, 0.40f);
    glVertex2f(0.35f, 0.20f);
    glVertex2f(0.35f, -0.20f);
    glVertex2f(0.00f, -0.40f);
    glVertex2f(-0.35f, -0.20f);
    glVertex2f(-0.35f, 0.20f);
    glVertex2f(0.00f, 0.40f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Segienam");
    glutDisplayFunc(Segienam);
    glClearColor(1.00f, 0.97f, 0.80f, 1.0f);
    glutMainLoop();
    return 0;
}
