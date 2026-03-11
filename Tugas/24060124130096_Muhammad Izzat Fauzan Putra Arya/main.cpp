#include <GL/glut.h>

void init() {
	glClearColor(0.08f, 0.08f, 0.12f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void drawLineStrip() {
	glLineWidth(3.0f);
	glColor3f(1.0f, 0.4f, 0.3f);
	glBegin(GL_LINE_STRIP);
		glVertex2f(-0.90f, 0.75f);
		glVertex2f(-0.78f, 0.90f);
		glVertex2f(-0.66f, 0.65f);
		glVertex2f(-0.54f, 0.82f);
		glVertex2f(-0.42f, 0.58f);
	glEnd();
}

void drawLineLoop() {
	glLineWidth(3.0f);
	glColor3f(0.20f, 0.85f, 0.45f);
	glBegin(GL_LINE_LOOP);
		glVertex2f(0.10f, 0.90f);
		glVertex2f(0.34f, 0.90f);
		glVertex2f(0.42f, 0.68f);
		glVertex2f(0.22f, 0.52f);
		glVertex2f(0.02f, 0.68f);
	glEnd();
}

void drawTriangleFan() {
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(1.0f, 0.95f, 0.2f);
		glVertex2f(-0.68f, 0.12f);

		glColor3f(1.0f, 0.60f, 0.15f);
		glVertex2f(-0.88f, -0.08f);

		glColor3f(1.0f, 0.35f, 0.20f);
		glVertex2f(-0.82f, 0.18f);

		glColor3f(1.0f, 0.15f, 0.30f);
		glVertex2f(-0.60f, 0.30f);

		glColor3f(0.95f, 0.55f, 0.85f);
		glVertex2f(-0.44f, 0.12f);

		glColor3f(0.75f, 0.80f, 1.0f);
		glVertex2f(-0.56f, -0.10f);

		glColor3f(0.35f, 0.95f, 0.95f);
		glVertex2f(-0.80f, -0.14f);

		glColor3f(1.0f, 0.60f, 0.15f);
		glVertex2f(-0.88f, -0.08f);
	glEnd();
}

void drawTriangleStrip() {
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(0.30f, 0.80f, 1.0f);
		glVertex2f(0.05f, 0.28f);
		glVertex2f(0.15f, -0.12f);

		glColor3f(0.45f, 0.90f, 0.55f);
		glVertex2f(0.28f, 0.20f);
		glVertex2f(0.38f, -0.18f);

		glColor3f(0.95f, 0.85f, 0.25f);
		glVertex2f(0.54f, 0.30f);
		glVertex2f(0.66f, -0.06f);
	glEnd();
}

void drawQuads() {
	glBegin(GL_QUADS);
		glColor3f(0.70f, 0.35f, 1.0f);
		glVertex2f(-0.92f, -0.48f);
		glVertex2f(-0.52f, -0.48f);
		glVertex2f(-0.46f, -0.82f);
		glVertex2f(-0.86f, -0.82f);
	glEnd();
}

void drawQuadStrip() {
	glBegin(GL_QUAD_STRIP);
		glColor3f(0.95f, 0.30f, 0.35f);
		glVertex2f(0.10f, -0.42f);
		glVertex2f(0.10f, -0.82f);

		glColor3f(0.95f, 0.55f, 0.25f);
		glVertex2f(0.28f, -0.36f);
		glVertex2f(0.28f, -0.76f);

		glColor3f(0.95f, 0.85f, 0.30f);
		glVertex2f(0.46f, -0.46f);
		glVertex2f(0.46f, -0.86f);

		glColor3f(0.35f, 0.80f, 1.0f);
		glVertex2f(0.64f, -0.40f);
		glVertex2f(0.64f, -0.80f);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	drawLineStrip();
	drawLineLoop();
	drawTriangleFan();
	drawTriangleStrip();
	drawQuads();
	drawQuadStrip();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 700);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Implementasi Primitif");

	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

