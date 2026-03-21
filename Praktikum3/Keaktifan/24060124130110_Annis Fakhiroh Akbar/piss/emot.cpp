#include <GL/glut.h>
int shoulder = 0, elbow = 0, telapak = 0, kelingking = 0, manis = 0, tengah = 0, telunjuk = 0, jempol = 0;
void Reshape(int w, int h) {
if (h == 0) h = 1;
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(70.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW);
}

void tangan(void) {
	glPushMatrix();
	glTranslatef(-1.0, -2.0, 0.0);
	glPushMatrix();
	glTranslatef(0.0, -1.0, 0.0);
	glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 1.0, 0.0);
	glPushMatrix();
	glScalef(0.3, 1.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(0.0, 1.0, 0.0);
	glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
	glTranslatef(0.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.3, 1.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef((GLfloat)telapak, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 1.0, 0.0);
	glPushMatrix();
	glScalef(1.3, 1.0, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.5, -0.4, 0.0);
	glRotatef((GLfloat)kelingking, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.2, -0.4, 0.0);
	glRotatef((GLfloat)manis, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.2, 0.4, 0.0);
	glRotatef(25.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)tengah, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.5, 0.4, 0.0);
	glRotatef(-25.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)telunjuk, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.8, -0.1, 0.0);
	glRotatef(90.0, 0.0, 0.0, 1.0);
	glRotatef((GLfloat)jempol, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.2, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glPushMatrix();
	glScalef(0.3, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	
	glPopMatrix();
	
	
glPopMatrix();
}

void Display(void) {
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
glTranslatef(0.0, 0.0, -5.0);
glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0); 
	tangan();
glPopMatrix();
glutSwapBuffers();
}

void Keyboard(unsigned char key, int x, int y) {
switch (key) {
case 's': shoulder = (shoulder + 5) % 360; break;
case 'S': shoulder = (shoulder - 5) % 360; break;
case 'e': elbow = (elbow + 5) % 360; break;
case 'E': elbow = (elbow - 5) % 360; break;
case 'w': telapak = (telapak + 5) % 360; break;
case 'f': kelingking = (kelingking + 5) % 360; break;
case 'g': manis = (manis + 5) % 360; break;
case 'h': tengah = (tengah + 5) % 360; break;
case 'i': telunjuk = (telunjuk + 5) % 360; break;
case 'j': jempol = (jempol + 5) % 360; break;
case 27: exit(0); break;
}
glutPostRedisplay();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(600, 600);
glutCreateWindow("piss");
glClearColor(0.0, 0.0, 0.0, 0.0);
glutDisplayFunc(Display);
glutReshapeFunc(Reshape);
glutKeyboardFunc(Keyboard);
glutMainLoop();
return 0;
}
