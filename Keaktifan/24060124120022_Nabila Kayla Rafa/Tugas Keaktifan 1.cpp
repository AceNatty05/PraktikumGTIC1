#include <GL/glut.h>

void Bg1(void) {
    glColor3f(0.74f, 0.92f, 1.00f);
    glRectf(0.60, 0.60, -0.60, -0.60);
    glFlush();
}

void Bg2(void) {
    glColor3f(0.85f, 0.91f, 0.51f);
    glRectf(0.60, -0.25, -0.60, -0.60);
    glFlush();
}

void Bangun1(void) {
    glColor3f(0.97f, 0.93f, 0.06f);
    glRectf(0.25, 0.20, -0.25, -0.30);
    glFlush();
}

void Bangun2(void) {
    glColor3f(0.97f, 0.93f, 0.06f);
    glRectf(-0.25, 0.00, -0.35, -0.20);
    glFlush();
}

void Bangun3(void) {
    glColor3f(0.97f, 0.93f, 0.06f);
    glRectf(0.35, 0.00, 0.25, -0.20);
    glFlush();
}

void Bangun4(void) {
    glColor3f(0.97f, 0.93f, 0.06f);
    glRectf(0.15, 0.30, -0.15, 0.20);
    glFlush();
}

void Bangun5(void) {
    glColor3f(0.91f, 0.33f, 0.06f);
    glRectf(0.05, 0.00, -0.05, -0.10);
    glFlush();
}

void Bangun6(void) {
    glColor3f(0.91f, 0.33f, 0.06f);
    glRectf(-0.05, -0.30, -0.15, -0.40);
    glFlush();
}

void Bangun7(void) {
    glColor3f(0.91f, 0.33f, 0.06f);
    glRectf(0.15, -0.30, 0.05, -0.40);
    glFlush();
}

void Bangun8(void) {
    glColor3f(0.96f, 0.79f, 0.85f);
    glRectf(-0.05, 0.00, -0.25, -0.10);
    glFlush();
}

void Bangun9(void) {
    glColor3f(0.96f, 0.79f, 0.85f);
    glRectf(0.25, 0.00, 0.05, -0.10);
    glFlush();
}

void Bangun10(void) {
    glColor3f(0.00f, 0.00f, 0.00f);
    glRectf(-0.05, 0.10, -0.15, 0.00);
    glFlush();
}

void Bangun11(void) {
    glColor3f(0.00f, 0.00f, 0.00f);
    glRectf(0.15, 0.10, 0.05, 0.00);
    glFlush();
}

void Display() {
	glClear(GL_COLOR_BUFFER_BIT);
	Bg1();
	Bg2();
	Bangun1();
	Bangun2();
	Bangun3();
	Bangun4();
	Bangun5();
	Bangun6();
	Bangun7();
	Bangun8();
	Bangun9();
	Bangun10();
	Bangun11();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Little Duck");
    glutDisplayFunc(Display);
    glClearColor(0.98f, 0.97f, 0.97f, 1.0f);
    glutMainLoop();
    return 0;
}
