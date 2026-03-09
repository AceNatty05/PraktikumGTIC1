#include <GL/glut.h>

void glQuads() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.2f, 0.2f, 0.0f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.2f, 0.2f, 0.0f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex3f(0.2f, -0.2f, 0.0f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(-0.2f, -0.2f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_QUADS");
    glutDisplayFunc(glQuads);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
}
