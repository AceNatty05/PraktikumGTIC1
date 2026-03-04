#include <GL/glut.h>

void sq01(void) {
    glColor3f(1.0f, 0.756f, 0.76f);
    glRectf(-0.4, 0.8, 0.0, 1.0);
    glFlush();
}

void sq02(void) {
    glColor3f(1.0f, 0.756f, 0.76f);
    glRectf(-0.2, 0.6, 0.2, 0.8);
    glFlush();
}

void sq03(void) {
    glColor3f(1.0f, 0.662f, 0.658f);
    glRectf(0.0, 0.4, 0.4, 0.6);
    glFlush();
}

void sq04(void) {
    glColor3f(0.941f, 0.862f, 0.768f);
    glRectf(0.0, 0.8, 0.2, 1.0);
    glFlush();
}

void sq05(void) {
    glColor3f(0.941f, 0.862f, 0.768f);
    glRectf(0.2, 0.6, 0.4, 0.8);
    glFlush();
}

void sq06(void) {
    glColor3f(0.929f, 0.85f, 0.705f);
    glRectf(0.4, 0.4, 0.8, 0.6);
    glFlush();
}

void sq07(void) {
    glColor3f(0.929f, 0.85f, 0.705f);
    glRectf(0.2, 0.2, 0.6, 0.4);
    glFlush();
}

void sq08(void) {
    glColor3f(0.929f, 0.85f, 0.705f);
    glRectf(-0.6, 0.2, -0.2, 0.4);
    glFlush();
}

void sq09(void) {
    glColor3f(0.929f, 0.85f, 0.705f);
    glRectf(0.8, 0.2, 1.0, 0.4);
    glFlush();
}

void sq10(void) {
    glColor3f(0.929f, 0.85f, 0.705f);
    glRectf(-1.0, 0.4, -0.8, 0.6);
    glFlush();
}

void sq11(void) {
    glColor3f(0.933f, 0.835f, 0.674f);
    glRectf(-0.8, 0.2, -0.6, 0.4);
    glFlush();
}

void sq12(void) {
    glColor3f(0.933f, 0.835f, 0.674f);
    glRectf(-1.0, 0.0, 1.0, 0.2);
    glFlush();
}

void sq13(void) {
    glColor3f(0.933f, 0.835f, 0.674f);
    glRectf(-1.0, -0.2, -0.6, 0.0);
    glFlush();
}

void sq14(void) {
    glColor3f(0.933f, 0.835f, 0.674f);
    glRectf(-0.2, -0.2, 0.8, 0.0);
    glFlush();
}

void sq15(void) {
    glColor3f(0.905f, 0.796f, 0.6f);
    glRectf(-1.0, -0.4, -0.2, -0.2);
    glFlush();
}

void sq16(void) {
    glColor3f(0.905f, 0.796f, 0.6f);
    glRectf(0.0, -0.4, 0.6, -0.2);
    glFlush();
}

void sq17(void) {
    glColor3f(0.905f, 0.796f, 0.6f);
    glRectf(-1.0, -0.6, 0.0, -0.4);
    glFlush();
}

void sq18(void) {
    glColor3f(0.905f, 0.796f, 0.6f);
    glRectf(0.2, -0.6, 0.8, -0.4);
    glFlush();
}

void sq19(void) {
    glColor3f(0.878f, 0.756f, 0.541f);
    glRectf(-0.8, -0.8, -0.2, -0.6);
    glFlush();
}

void sq20(void) {
    glColor3f(0.878f, 0.756f, 0.541f);
    glRectf(0.4, -0.8, 0.8, -0.6);
    glFlush();
}

void sq21(void) {
    glColor3f(0.878f, 0.756f, 0.541f);
    glRectf(-0.6, -1.0, 0.2, -0.8);
    glFlush();
}

void sq22(void) {
    glColor3f(0.878f, 0.756f, 0.541f);
    glRectf(0.6, -1.0, 1.0, -0.8);
    glFlush();
}

void Display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	sq01();
	sq02();
	sq03();
	sq04();
	sq05();
	sq06();
	sq07();
	sq08();
	sq09();
	sq10();
	sq11();
	sq12();
	sq13();
	sq14();
	sq15();
	sq16();
	sq17();
	sq18();
	sq19();
	sq20();
	sq21();
	sq22();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Rabbit");
    glutDisplayFunc(Display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
