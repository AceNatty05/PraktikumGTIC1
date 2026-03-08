#include <GL/glut.h>

void HurufN(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.00f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.53f, 0.83f, 1.00f);
    glVertex2f(-0.30f, -0.20f);
    glVertex2f(-0.15f, 0.20f);
    glVertex2f(0.15f, -0.20f);
    glVertex2f(0.30f, 0.20f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Huruf N");
    glutDisplayFunc(HurufN);
    glClearColor(0.99f, 0.92f, 0.92f, 1.00f);
    glutMainLoop();
    return 0;
}

