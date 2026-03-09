#include <GL/glut.h>

void glLineLoop() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-0.2f, 0.2f, 0.0f);
        glVertex3f(0.2f, 0.2f, 0.0f);
        glVertex3f(0.2f, -0.2f, 0.0f);
        glVertex3f(-0.2f, -0.2f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("GL_LINE_LOOP");
    glutDisplayFunc(glLineLoop);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
