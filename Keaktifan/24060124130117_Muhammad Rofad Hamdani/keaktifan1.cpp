#include <GL/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.45f, 0.75f, 0.40f);
    glRectf(-0.25, 0.30, 0.25, -0.30);

    glColor3f(0.10f, 0.25f, 0.10f);
    glRectf(0.05, 0.16, 0.15, 0.05);
    glRectf(-0.15, 0.16, -0.05, 0.05);
    glRectf(-0.05, 0.05, 0.05, -0.10);
    glRectf(0.05, -0.05, 0.10, -0.20);
    glRectf(-0.10, -0.05, -0.05, -0.20);

    glColor3f(0.35f, 0.65f, 0.30f);
    glRectf(-0.18, -0.30, 0.18, -0.60);

	glColor3f(0.10f, 0.25f, 0.10f);
    glRectf(-0.18, -0.60, -0.02, -0.85);
    glRectf(0.02, -0.60, 0.18, -0.85);
    
    glColor3f(0.25f, 0.50f, 0.25f);
    glRectf(-0.18, -0.60, -0.07, -0.85);
    glRectf(0.07, -0.60, 0.18, -0.85);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Creeper");
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.55f, 0.75f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}