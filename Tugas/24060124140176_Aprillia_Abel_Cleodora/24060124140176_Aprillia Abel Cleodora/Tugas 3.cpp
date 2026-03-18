#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(0.2, -0.2, -0.2, -0.6); // Bawah tengah
    glRectf(0.65, -0.2, 0.25, -0.6); // bawah kanan
    glRectf(-0.25, -0.2, -0.65, -0.6); // bawah kiri
    glRectf(0.425, 0.2, 0.025, -0.2);
    glRectf(-0.025, 0.2, -0.425, -0.2);
    glFlush();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Tugas 3");
    glutInitWindowSize(400, 400);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
