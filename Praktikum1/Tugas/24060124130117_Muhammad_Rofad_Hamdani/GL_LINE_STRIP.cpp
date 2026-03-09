#include <GL/glut.h>

void glLineStrip() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_STRIP);
        glVertex3f(-0.4f, 0.8f, 0.0f);
        glVertex3f(-0.3f, 0.6f, 0.0f);
        glVertex3f(-0.2f, 0.8f, 0.0f);
        glVertex3f(-0.1f, 0.6f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_LINE_STRIP");
    glutDisplayFunc(glLineStrip);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
