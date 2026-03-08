#include <GL/glut.h> 

void Pita(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 0.80f, 0.80f);
    glVertex2f(-0.50f, 0.20f);
    glVertex2f(-0.50f, -0.20f);
    glColor3f(0.99f, 0.47f, 0.47f);
    glVertex2f(0.00f, 0.00f);
    glColor3f(1.0f, 0.80f, 0.80f);
	glVertex2f(0.50f, 0.20f);
    glVertex2f(0.50f, -0.20f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Pita");
    glutDisplayFunc(Pita);
    glClearColor(1.00f, 0.97f, 0.80f, 1.0f);
    glutMainLoop();
    return 0;
}
