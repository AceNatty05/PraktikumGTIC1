#include <GL/glut.h>
#include <cmath>

const float PI = 3.14159265358979323846f;
const int width = 1000;
const int height = 700;

float wheelRotation = 0.0f;

// Gambar lingkaran
void drawCircle(float radius, int segments = 40) {
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.0f, 0.0f);
		for (int i = 0; i <= segments; ++i) {
			float angle = 2.0f * PI * (float)i / (float)segments;
			glVertex2f(std::cos(angle) * radius, std::sin(angle) * radius);
		}
	glEnd();
}

// Gambar oval
void drawOval(float radiusX, float radiusY, int segments = 50) {
	glBegin(GL_POLYGON);
		for (int i = 0; i < segments; ++i) {
			float angle = 2.0f * PI * (float)i / (float)segments;
			glVertex2f(std::cos(angle) * radiusX, std::sin(angle) * radiusY);
		}
	glEnd();
}

// Gambar langit
void drawSky() {
	glColor3f(0.53f, 0.81f, 0.98f);
	glBegin(GL_QUADS);
		glVertex2f(0.0f, 0.0f);
		glVertex2f((float)width, 0.0f);
		glVertex2f((float)width, (float)height);
		glVertex2f(0.0f, (float)height);
	glEnd();
}

// Gambar matahari
void drawSun(float x, float y, float radius) {
	glPushMatrix();
	glTranslatef(x, y, 0.0f);

	glColor3f(1.0f, 0.84f, 0.18f);
	for (int i = 0; i < 12; ++i) {
		glPushMatrix();
		glRotatef(i * 30.0f, 0.0f, 0.0f, 1.0f);
		glBegin(GL_TRIANGLES);
			glVertex2f(radius + 8.0f, 0.0f);
			glVertex2f(radius + 26.0f, 6.0f);
			glVertex2f(radius + 26.0f, -6.0f);
		glEnd();
		glPopMatrix();
	}

	glColor3f(1.0f, 0.9f, 0.25f);
	drawCircle(radius + 6.0f);

	glColor3f(1.0f, 0.96f, 0.52f);
	drawCircle(radius);

	glPopMatrix();
}

// Gambar jalan
void drawRoad() {
	glColor3f(0.24f, 0.24f, 0.24f);
	glBegin(GL_QUADS);
		glVertex2f(0.0f, 0.0f);
		glVertex2f((float)width, 0.0f);
		glVertex2f((float)width, 180.0f);
		glVertex2f(0.0f, 180.0f);
	glEnd();

	glColor3f(0.96f, 0.88f, 0.35f);
	for (int x = 40; x < width; x += 120) {
		glBegin(GL_QUADS);
			glVertex2f((float)x, 88.0f);
			glVertex2f((float)(x + 70), 88.0f);
			glVertex2f((float)(x + 70), 98.0f);
			glVertex2f((float)x, 98.0f);
		glEnd();
	}
}

// Gambar awan
void drawCloud(float x, float y, float scale) {
	glPushMatrix();
	glTranslatef(x, y, 0.0f);
	glScalef(scale, scale, 1.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(-35.0f, 0.0f, 0.0f);
	drawCircle(28.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 15.0f, 0.0f);
	drawCircle(34.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(35.0f, 0.0f, 0.0f);
	drawCircle(28.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, -8.0f, 0.0f);
	glScalef(1.5f, 0.7f, 1.0f);
	drawCircle(30.0f);
	glPopMatrix();

	glPopMatrix();
}

// Gambar pohon
void drawTree(float x, float y, float scale) {
	glPushMatrix();
	glTranslatef(x, y, 0.0f);
	glScalef(scale, scale, 1.0f);

	glColor3f(0.47f, 0.28f, 0.12f);
	glBegin(GL_QUADS);
		glVertex2f(-12.0f, 0.0f);
		glVertex2f(12.0f, 0.0f);
		glVertex2f(12.0f, 70.0f);
		glVertex2f(-12.0f, 70.0f);
	glEnd();

	glColor3f(0.12f, 0.58f, 0.22f);
	glPushMatrix();
	glTranslatef(0.0f, 90.0f, 0.0f);
	drawCircle(35.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-22.0f, 70.0f, 0.0f);
	drawCircle(28.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(22.0f, 72.0f, 0.0f);
	drawCircle(28.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 118.0f, 0.0f);
	drawCircle(24.0f);
	glPopMatrix();

	glPopMatrix();
}

// Gambar roda
void drawWheel() {
	glColor3f(0.1f, 0.1f, 0.1f);
	drawCircle(22.0f);

	glColor3f(0.75f, 0.75f, 0.75f);
	drawCircle(10.0f);

	glColor3f(0.9f, 0.9f, 0.9f);
	glPushMatrix();
	glRotatef(wheelRotation, 0.0f, 0.0f, 1.0f);
	for (int i = 0; i < 6; ++i) {
		glRotatef(60.0f, 0.0f, 0.0f, 1.0f);
		glBegin(GL_QUADS);
			glVertex2f(-2.0f, 0.0f);
			glVertex2f(2.0f, 0.0f);
			glVertex2f(2.0f, 18.0f);
			glVertex2f(-2.0f, 18.0f);
		glEnd();
	}
	glPopMatrix();
}

// Gambar jendela mobil
void drawWindowPart() {
	glColor3f(0.82f, 0.93f, 0.98f);
	glBegin(GL_POLYGON);
		glVertex2f(-26.0f, 8.0f);
		glVertex2f(-10.0f, 30.0f);
		glVertex2f(8.0f, 30.0f);
		glVertex2f(0.0f, 8.0f);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(4.0f, 8.0f);
		glVertex2f(12.0f, 30.0f);
		glVertex2f(28.0f, 24.0f);
		glVertex2f(28.0f, 8.0f);
	glEnd();
}

// Gambar lampu mobil
void drawHeadlight() {
	glColor3f(1.0f, 0.95f, 0.62f);
	drawCircle(6.5f);
}

// Gambar mobil VW
void drawVWCar(float x, float y, float scale, float red, float green, float blue) {
	glPushMatrix();
	glTranslatef(x, y, 0.0f);
	glScalef(scale, scale, 1.0f);

	glPushMatrix();
	glTranslatef(0.0f, 36.0f, 0.0f);
	glColor3f(red, green, blue);
	drawOval(78.0f, 34.0f);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-4.0f, 62.0f, 0.0f);
	glColor3f(red, green, blue);
	drawOval(42.0f, 28.0f);
	glPopMatrix();

	drawWindowPart();

	glColor3f(0.08f, 0.08f, 0.08f);
	glBegin(GL_LINES);
		glVertex2f(0.0f, 42.0f);
		glVertex2f(0.0f, 78.0f);
	glEnd();

	glPushMatrix();
	glTranslatef(58.0f, 40.0f, 0.0f);
	drawHeadlight();
	glPopMatrix();

	glColor3f(0.9f, 0.2f, 0.15f);
	glBegin(GL_QUADS);
		glVertex2f(-72.0f, 36.0f);
		glVertex2f(-64.0f, 36.0f);
		glVertex2f(-64.0f, 46.0f);
		glVertex2f(-72.0f, 46.0f);
	glEnd();

	glPushMatrix();
	glTranslatef(-38.0f, 10.0f, 0.0f);
	drawWheel();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(38.0f, 10.0f, 0.0f);
	drawWheel();
	glPopMatrix();

	glPopMatrix();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	// Gambar latar
	drawSky();
	drawSun(860.0f, 575.0f, 42.0f);

	// Gambar awan
	drawCloud(160.0f, 590.0f, 1.0f);
	drawCloud(390.0f, 620.0f, 0.8f);
	drawCloud(690.0f, 585.0f, 1.1f);
	drawCloud(870.0f, 625.0f, 0.75f);

	// Gambar pohon
	drawTree(90.0f, 175.0f, 1.05f);
	drawTree(220.0f, 175.0f, 0.9f);
	drawTree(355.0f, 175.0f, 1.15f);
	drawTree(520.0f, 175.0f, 0.95f);
	drawTree(675.0f, 175.0f, 1.08f);
	drawTree(835.0f, 175.0f, 0.92f);

	// Gambar jalan
	drawRoad();

	// Gambar mobil
	drawVWCar(120.0f, 145.0f, 1.0f, 0.86f, 0.16f, 0.16f);
	drawVWCar(340.0f, 145.0f, 1.0f, 0.14f, 0.35f, 0.83f);
	drawVWCar(560.0f, 145.0f, 1.0f, 0.97f, 0.82f, 0.18f);
	drawVWCar(780.0f, 145.0f, 1.0f, 0.18f, 0.64f, 0.24f);

	glutSwapBuffers();
}

void update() {
	wheelRotation -= 2.5f;
	if (wheelRotation <= -360.0f) {
		wheelRotation += 360.0f;
	}
	glutPostRedisplay();
}

void init() {
	glClearColor(0.53f, 0.81f, 0.98f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, width, 0.0, height);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glLineWidth(2.0f);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("VW Kodok Jalan Jalan");

	init();
	glutDisplayFunc(display);
	glutIdleFunc(update);
	glutMainLoop();
	return 0;
}

