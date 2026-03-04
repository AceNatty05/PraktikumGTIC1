#include <GL/glut.h>

void drawRect(float x, float y, float w, float h, float r, float g, float b) {
	glColor3f(r, g, b);
	glBegin(GL_QUADS);
	glVertex2f(x - w, y - h); glVertex2f(x + w, y - h);
	glVertex2f(x + w, y + h); glVertex2f(x - w, y + h);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	drawRect(0.00f,  0.45f, 0.20f, 0.12f, 0.40f, 0.80f, 1.00f); // kepala
	drawRect(-0.08f, 0.46f, 0.03f, 0.03f, 0.05f, 0.05f, 0.10f); // mata kiri
	drawRect(0.08f,  0.46f, 0.03f, 0.03f, 0.05f, 0.05f, 0.10f); // mata kanan
	drawRect(0.00f,  0.10f, 0.28f, 0.22f, 0.30f, 0.60f, 0.95f); // badan
	drawRect(-0.38f, 0.10f, 0.09f, 0.18f, 0.95f, 0.55f, 0.25f); // tangan kiri
	drawRect(0.38f,  0.10f, 0.09f, 0.18f, 0.95f, 0.55f, 0.25f); // tangan kanan
	drawRect(-0.12f, -0.28f, 0.08f, 0.18f, 0.75f, 0.85f, 1.00f); // kaki kiri
	drawRect(0.12f,  -0.28f, 0.08f, 0.18f, 0.75f, 0.85f, 1.00f); // kaki kanan
	drawRect(0.00f,  0.70f, 0.02f, 0.08f, 0.90f, 0.90f, 0.90f); // antena
	drawRect(0.00f,  0.80f, 0.05f, 0.03f, 1.00f, 0.35f, 0.35f); // ujung antena

	glFlush();
}

void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	float asp = (h == 0) ? 1.0f : (float)w / h;
	if (asp >= 1.0f) glOrtho(-asp, asp, -1, 1, -1, 1);
	else glOrtho(-1, 1, -1 / asp, 1 / asp, -1, 1);

	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Roblox ala ala");

	glClearColor(0.08f, 0.07f, 0.12f, 1.0f);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
