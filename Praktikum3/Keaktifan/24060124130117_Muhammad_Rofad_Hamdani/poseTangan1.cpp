#include <GL/glut.h>
int shoulderX = -5, shoulderY = -10, shoulderZ = -30;
int elbowY = 0, elbowZ = 45;
int telapakX = 0, telapakY = 0, telapakZ = 0;
int jempol1Y = 0, jempol1Z = 45, jempol2Y = 0;
int telunjuk1Y = -35, telunjuk1Z = 5, telunjuk2Y = -40, telunjuk3Y = -90;
int tengah1Y = -50, tengah1Z = 5, tengah2Y = -40, tengah3Y = -90;
int manis1Y = 0, manis1Z = 5, manis2Y = 0, manis3Y = 0;
int kelingking1Y = 0, kelingking1Z = -20, kelingking2Y = 0, kelingking3Y = 0;

void Reshape(int w, int h) {
	if (h == 0) h = 1;
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(70.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(-2.0, 0.0, -5.0);
	glPushMatrix();
		//lengan atas
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)shoulderX, 1.0, 0.0, 0.0);
		glRotatef((GLfloat)shoulderY, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)shoulderZ, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
			glScalef(2.0, 0.4, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//lengan bawah
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat)elbowY, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)elbowZ, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
			glScalef(2.0, 0.4, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//telapak
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat)telapakX, 1.0, 0.0, 0.0);
		glRotatef((GLfloat)telapakY, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)telapakZ, 0.0, 0.0, 1.0);
		glTranslatef(0.25, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.5, 0.8, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//jempol1
		glPushMatrix();
		glTranslatef(-0.06, 0.5, 0.0);
		glRotatef((GLfloat)jempol1Y, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)jempol1Z, 0.0, 0.0, 1.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//jempol2
		glTranslatef(0.12, 0.0, 0.0);
		glRotatef((GLfloat)jempol2Y, 0.0, 1.0, 0.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();
		
		//telunjuk1
		glPushMatrix();
		glTranslatef(0.25, 0.3, 0.0);
		glRotatef((GLfloat)telunjuk1Y, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)telunjuk1Z, 0.0, 0.0, 1.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//telunjuk2
		glTranslatef(0.12, 0.0, 0.0);
		glRotatef((GLfloat)telunjuk2Y, 0.0, 1.0, 0.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//telunjuk3
		glTranslatef(0.12, 0.0, 0.0);
		glRotatef((GLfloat)telunjuk3Y, 0.0, 1.0, 0.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();
		
		//tengah1
		glPushMatrix();
		glTranslatef(0.25, 0.1, 0.0);
		glRotatef((GLfloat)tengah1Y, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)tengah1Z, 0.0, 0.0, 1.0);
		glTranslatef(0.15, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.3, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//tengah2
		glTranslatef(0.15, 0.0, 0.0);
		glRotatef((GLfloat)tengah2Y, 0.0, 1.0, 0.0);
		glTranslatef(0.15, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.3, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//tengah3
		glTranslatef(0.15, 0.0, 0.0);
		glRotatef((GLfloat)tengah3Y, 0.0, 1.0, 0.0);
		glTranslatef(0.15, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.3, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();
		
		//manis1
		glPushMatrix();
		glTranslatef(0.25, -0.1, 0.0);
		glRotatef((GLfloat)manis1Y, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)manis1Z, 0.0, 0.0, 1.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//manis2
		glTranslatef(0.12, 0.0, 0.0);
		glRotatef((GLfloat)manis2Y, 0.0, 1.0, 0.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//manis3
		glTranslatef(0.12, 0.0, 0.0);
		glRotatef((GLfloat)manis3Y, 0.0, 1.0, 0.0);
		glTranslatef(0.12, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.24, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();
		
		//kelingking1
		glPushMatrix();
		glTranslatef(0.25, -0.3, 0.0);
		glRotatef((GLfloat)kelingking1Y, 0.0, 1.0, 0.0);
		glRotatef((GLfloat)kelingking1Z, 0.0, 0.0, 1.0);
		glTranslatef(0.1, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.2, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//kelingking2
		glTranslatef(0.1, 0.0, 0.0);
		glRotatef((GLfloat)kelingking2Y, 0.0, 1.0, 0.0);
		glTranslatef(0.1, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.2, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		
		//kelingking3
		glTranslatef(0.1, 0.0, 0.0);
		glRotatef((GLfloat)kelingking3Y, 0.0, 1.0, 0.0);
		glTranslatef(0.1, 0.0, 0.0);
		glPushMatrix();
			glScalef(0.2, 0.2, 0.15);
			glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();
}

void Keyboard(unsigned char key, int x, int y) {
	switch (key) {
		//lengan atas
		case 's': shoulderY = (shoulderY + 5 > 120) ? 120 : shoulderY + 5; break;
		case 'S': shoulderY = (shoulderY - 5 < -120) ? -120 : shoulderY - 5; break;

		case 'a': shoulderX = (shoulderX + 5 > 90) ? 90 : shoulderX + 5; break;
		case 'A': shoulderX = (shoulderX - 5 < -90) ? -90 : shoulderX - 5; break;

		case 'd': shoulderZ = (shoulderZ + 5 > 120) ? 120 : shoulderZ + 5; break;
		case 'D': shoulderZ = (shoulderZ - 5 < -70) ? -70 : shoulderZ - 5; break;
		
		
		//lengan bawah
		case 'e': elbowY = (elbowY + 5 > 0) ? 0 : elbowY + 5; break;
		case 'E': elbowY = (elbowY - 5 < -120) ? -120 : elbowY - 5; break;
		
		case 'r': elbowZ = (elbowZ + 5 > 120) ? 120 : elbowZ + 5; break;
		case 'R': elbowZ = (elbowZ - 5 < -120) ? -120 : elbowZ - 5; break;
		
		
		//telapak
		case 't': telapakX = (telapakX + 5 > 90) ? 90 : telapakX + 5; break;
		case 'T': telapakX = (telapakX - 5 < -90) ? -90 : telapakX - 5; break;
		
		case 'y': telapakY = (telapakY + 5 > 90) ? 90 : telapakY + 5; break;
		case 'Y': telapakY = (telapakY - 5 < -90) ? -90 : telapakY - 5; break;
		
		case 'u': telapakZ = (telapakZ + 5 > 60) ? 60 : telapakZ + 5; break;
		case 'U': telapakZ = (telapakZ - 5 < -60) ? -60 : telapakZ - 5; break;
		
		
		//jempol1 (pangkal)
		case '1': jempol1Y = (jempol1Y + 5 > 90) ? 90 : jempol1Y + 5; break;
		case '!': jempol1Y = (jempol1Y - 5 < -90) ? -90 : jempol1Y - 5; break;
		
		case '6': jempol1Z = (jempol1Z + 5 > 45) ? 45 : jempol1Z + 5; break;
		case '^': jempol1Z = (jempol1Z - 5 < -45) ? -45 : jempol1Z - 5; break;
		
		//jempol2
		case 'z': jempol2Y = (jempol2Y + 5 > 45) ? 45 : jempol2Y + 5; break;
		case 'Z': jempol2Y = (jempol2Y - 5 < -90) ? -90 : jempol2Y - 5; break;
		
		
		//telunjuk1 (pangkal)
		case '2': telunjuk1Y = (telunjuk1Y + 5 > 90) ? 90 : telunjuk1Y + 5; break;
		case '@': telunjuk1Y = (telunjuk1Y - 5 < -90) ? -90 : telunjuk1Y - 5; break;
		
		case '7': telunjuk1Z = (telunjuk1Z + 5 > 20) ? 20 : telunjuk1Z + 5; break;
		case '&': telunjuk1Z = (telunjuk1Z - 5 < -20) ? -20 : telunjuk1Z - 5; break;
		
		//telunjuk2
		case 'x': telunjuk2Y = (telunjuk2Y + 5 > 0) ? 0 : telunjuk2Y + 5; break;
		case 'X': telunjuk2Y = (telunjuk2Y - 5 < -90) ? -90 : telunjuk2Y - 5; break;
		
		//telunjuk3
		case 'c': telunjuk3Y = (telunjuk3Y + 5 > 0) ? 0 : telunjuk3Y + 5; break;
		case 'C': telunjuk3Y = (telunjuk3Y - 5 < -90) ? -90 : telunjuk3Y - 5; break;
		
		
		//tengah1 (pangkal)
		case '3': tengah1Y = (tengah1Y + 5 > 90) ? 90 : tengah1Y + 5; break;
		case '#': tengah1Y = (tengah1Y - 5 < -90) ? -90 : tengah1Y - 5; break;
		
		case '8': tengah1Z = (tengah1Z + 5 > 20) ? 20 : tengah1Z + 5; break;
		case '*': tengah1Z = (tengah1Z - 5 < -20) ? -20 : tengah1Z - 5; break;
		
		//tengah2
		case 'v': tengah2Y = (tengah2Y + 5 > 0) ? 0 : tengah2Y + 5; break;
		case 'V': tengah2Y = (tengah2Y - 5 < -90) ? -90 : tengah2Y - 5; break;
		
		//tengah3
		case 'b': tengah3Y = (tengah3Y + 5 > 0) ? 0 : tengah3Y + 5; break;
		case 'B': tengah3Y = (tengah3Y - 5 < -90) ? -90 : tengah3Y - 5; break;
		
		
		//manis1 (pangkal)
		case '4': manis1Y = (manis1Y + 5 > 90) ? 90 : manis1Y + 5; break;
		case '$': manis1Y = (manis1Y - 5 < -90) ? -90 : manis1Y - 5; break;
		
		case '9': manis1Z = (manis1Z + 5 > 20) ? 20 : manis1Z + 5; break;
		case '(': manis1Z = (manis1Z - 5 < -20) ? -20 : manis1Z - 5; break;
		
		//manis2
		case 'n': manis2Y = (manis2Y + 5 > 0) ? 0 : manis2Y + 5; break;
		case 'N': manis2Y = (manis2Y - 5 < -90) ? -90 : manis2Y - 5; break;
		
		//manis3
		case 'm': manis3Y = (manis3Y + 5 > 0) ? 0 : manis3Y + 5; break;
		case 'M': manis3Y = (manis3Y - 5 < -90) ? -90 : manis3Y - 5; break;
		
		
		//kelingking1 (pangkal)
		case '5': kelingking1Y = (kelingking1Y + 5 > 90) ? 90 : kelingking1Y + 5; break;
		case '%': kelingking1Y = (kelingking1Y - 5 < -90) ? -90 : kelingking1Y - 5; break;
		
		case '0': kelingking1Z = (kelingking1Z + 5 > 20) ? 20 : kelingking1Z + 5; break;
		case ')': kelingking1Z = (kelingking1Z - 5 < -20) ? -20 : kelingking1Z - 5; break;
		
		//kelingking2
		case ',': kelingking2Y = (kelingking2Y + 5 > 0) ? 0 : kelingking2Y + 5; break;
		case '<': kelingking2Y = (kelingking2Y - 5 < -90) ? -90 : kelingking2Y - 5; break;
		
		//kelingking3
		case '.': kelingking3Y = (kelingking3Y + 5 > 0) ? 0 : kelingking3Y + 5; break;
		case '>': kelingking3Y = (kelingking3Y - 5 < -90) ? -90 : kelingking3Y - 5; break;
		
		
		case 27: exit(0); break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutCreateWindow("tugas tangan pertemuan 3");
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutKeyboardFunc(Keyboard);
	glutMainLoop();
	return 0;
}
