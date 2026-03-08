#include <GL/glut.h>

void Tangga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.43f, 0.31f, 0.20f);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-0.45f, -0.30f);
        glVertex2f(-0.45f, -0.50f);
        glVertex2f(-0.15f, -0.30f);
        glVertex2f(-0.15f, -0.50f);
        glVertex2f(-0.15f, 0.00f);
        glVertex2f(-0.15f, -0.20f);
        glVertex2f(0.15f, 0.00f);
        glVertex2f(0.15f, -0.20f);
        glVertex2f(0.15f, 0.30f);
        glVertex2f(0.15f, 0.10f);
        glVertex2f(0.45f, 0.30f);
        glVertex2f(0.45f, 0.10f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Tangga");
    glutDisplayFunc(Tangga);
    glClearColor(0.92f, 0.90f, 0.81f, 1.0f); 
    glutMainLoop();
    return 0;
}
