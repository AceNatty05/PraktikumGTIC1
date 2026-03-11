#include <GL/glut.h>
#include <cmath>
using namespace std;

const float PI = 3.14159265358979323846f;
const int jum = 8;

void gambarPolygon(float radius, int sisi) {
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < sisi; i++) {
		float angle = 2.0f * PI * i / sisi;
		glVertex2f(cos(angle) * radius, sin(angle) * radius);
	}
	glEnd();
}

void gambarSalju() {
	glBegin(GL_LINES);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(0.0f, 0.82f);

		glVertex2f(0.0f, 0.28f);
		glVertex2f(-0.10f, 0.38f);
		glVertex2f(0.0f, 0.28f);
		glVertex2f(0.10f, 0.38f);

		glVertex2f(0.0f, 0.50f);
		glVertex2f(-0.14f, 0.62f);
		glVertex2f(0.0f, 0.50f);
		glVertex2f(0.14f, 0.62f);

		glVertex2f(0.0f, 0.68f);
		glVertex2f(-0.12f, 0.78f);
		glVertex2f(0.0f, 0.68f);
		glVertex2f(0.12f, 0.78f);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex2f(0.0f, 0.90f);
		glVertex2f(-0.05f, 0.80f);
		glVertex2f(0.05f, 0.80f);
	glEnd();
}

void drawCenterStar() {
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.0f, 0.0f);
		for (int i = 0; i <= jum * 2; i++) {
			float angle = PI * i / jum;
			float radius = (i % 2 == 0) ? 0.12f : 0.05f;
			glVertex2f(cos(angle) * radius, sin(angle) * radius);
		}
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glLineWidth(2.2f);
	glColor3f(0.72f, 0.88f, 1.0f);
	gambarPolygon(0.25f, jum);
	gambarPolygon(0.45f, jum);
	gambarPolygon(0.65f, jum);

	glColor3f(0.55f, 0.82f, 1.0f);
	for (int i = 0; i < jum; i++) {
		glPushMatrix();
		glRotatef(i * (360.0f / jum), 0.0f, 0.0f, 1.0f);
		gambarSalju();
		glPopMatrix();
	}

	glColor3f(0.92f, 0.97f, 1.0f);
	drawCenterStar();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(900, 700);
	glutCreateWindow("Salju salju");

	glViewport(0, 0, 900, 700);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	float aspect = 900.0f / 700.0f;
	glOrtho(-aspect, aspect, -1.0f, 1.0f, -1.0f, 1.0f);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.05f, 0.09f, 0.16f, 1.0f);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
