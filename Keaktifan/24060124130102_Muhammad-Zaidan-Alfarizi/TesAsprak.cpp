#include <GL/glut.h>

void Limakubus(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
        glVertex2f(-0.9f, -0.9f);
        glVertex2f(-0.6f, -0.9f);
        glVertex2f(-0.6f, -0.6f);
        glVertex2f(-0.9f, -0.6f);
    glEnd();

    glColor3f(1.0f, 0.5f, 0.2f);
    glBegin(GL_QUADS);
        glVertex2f(-0.6f, -0.6f);
        glVertex2f(-0.3f, -0.6f);
        glVertex2f(-0.3f, -0.3f);
        glVertex2f(-0.6f, -0.3f);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.2f);
    glBegin(GL_QUADS);
        glVertex2f(-0.3f, -0.3f);
        glVertex2f(0.0f, -0.3f);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.3f, 0.0f);
    glEnd();

    glColor3f(0.2f, 1.0f, 0.2f);
    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, 0.3f);
        glVertex2f(0.0f, 0.3f);
    glEnd();

    glColor3f(0.2f, 0.6f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(0.3f, 0.3f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.6f, 0.6f);
        glVertex2f(0.3f, 0.6f);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("5 Kubus");

    glClearColor(0.0f, 0.0f, 0.3f, 1.0f);

    glutDisplayFunc(Limakubus);
    glutMainLoop();
    return 0;
}
