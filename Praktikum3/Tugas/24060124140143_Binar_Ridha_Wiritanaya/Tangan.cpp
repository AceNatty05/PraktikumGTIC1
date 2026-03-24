#include <GL/glut.h>
#include <stdlib.h>
static int shoulder = 0, elbow = 0, palm = 0;
static int jempol=0, telunjuk=0, tengah=0, manis=0, kelingking=0;

void display(void) {
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();

//Lengan atas(shoulder)
glTranslatef(0.0, -2.5, 0.0);
glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
glPushMatrix();
    glTranslatef(0.0, 1.0, 0.0);
    glScalef(1.0, 2.0, 1.0);
    glutWireCube(1.0);
glPopMatrix();

//Lengan bawah(elbow)
glTranslatef(0.0, 2.0, 0.0);
glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
glPushMatrix();
    glTranslatef(0.0, 1.0, 0.0);
    glScalef(1.0, 2.0, 1.0);
    glutWireCube(1.0);
glPopMatrix();


//Telapak Tangan (palm)
glTranslatef(0.0, 2.0, 0.0);
glRotatef((GLfloat)palm, 1.0, 0.0, 0.0);
glPushMatrix();
	glTranslatef(0.0, 0.75, 0.0);
	glScalef(1.5, 1.5, 0.8); 
    glutWireCube(1.0);
glPopMatrix();


glTranslatef(0.0, 1.5, 0.0);
//Ibu jari
glPushMatrix();
	glTranslatef(0.92, -0.7, 0.0);
	glRotatef((GLfloat) jempol, 0.0, 0.0, 1.0);
	glPushMatrix(); 
		glTranslatef(0.0, 0.3, 0.0);
		glScalef(0.4, 0.6, 0.4); 
		glutWireCube(1.0); 
	glPopMatrix();
	glTranslatef(0.0, 0.6, 0.0);
	glPushMatrix(); 
		glTranslatef(0.0, 0.3, 0.0);
		glScalef(0.4, 0.6, 0.4); 
		glutWireCube(1.0); 
	glPopMatrix();
glPopMatrix();

//Jari Telunjuk
glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glRotatef((GLfloat) telunjuk, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.275, 0.0);
		glScalef(0.3, 0.55, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
	glTranslatef(0.0, 0.55, 0.0);
    glRotatef((GLfloat) telunjuk, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.275, 0.0);
		glScalef(0.3, 0.55, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
	glTranslatef(0.0, 0.55, 0.0);
    glRotatef((GLfloat) telunjuk, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.275, 0.0);
		glScalef(0.3, 0.55, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
glPopMatrix();

//Jari Tengah
glPushMatrix();
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat) tengah, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.3, 0.0);
		glScalef(0.3, 0.6, 0.3);
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.6, 0.0);
    glRotatef((GLfloat) tengah, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.3, 0.0);
		glScalef(0.3, 0.6, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.6, 0.0);
    glRotatef((GLfloat) tengah, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.3, 0.0);
		glScalef(0.3, 0.6, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
glPopMatrix();

//Jari Manis
glPushMatrix();
    glTranslatef(-0.2, 0.0, 0.0);
    glRotatef((GLfloat) manis, 1.0, 0.0, 0.0);
    glPushMatrix();
		glTranslatef(0.0, 0.275, 0.0); 
		glScalef(0.3, 0.55, 0.3);
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.55, 0.0);
    glRotatef((GLfloat) manis, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.275, 0.0);
		glScalef(0.3, 0.55, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.55, 0.0);
    glRotatef((GLfloat) manis, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.275, 0.0);
		glScalef(0.3, 0.55, 0.3); 
		glutWireCube(1.0); 
	glPopMatrix();
glPopMatrix();

//Jari Kelingking
glPushMatrix();
    glTranslatef(-0.55, 0.0, 0.0);
    glRotatef((GLfloat) kelingking, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.225, 0.0);
		glScalef(0.25, 0.45, 0.25); 
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.45, 0.0);
    glRotatef((GLfloat) kelingking, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.225, 0.0);
		glScalef(0.25, 0.45, 0.25); 
		glutWireCube(1.0); 
	glPopMatrix();
    glTranslatef(0.0, 0.45, 0.0);
    glRotatef((GLfloat) kelingking, 1.0, 0.0, 0.0);
    glPushMatrix(); 
    	glTranslatef(0.0, 0.225, 0.0);
		glScalef(0.25, 0.45, 0.25); 
		glutWireCube(1.0); 
	glPopMatrix();
glPopMatrix();

glPopMatrix();
glutSwapBuffers();
}


void reshape (int w, int h) {
	if(h==0) h=1;
	glViewport (0, 0, w, h);
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, -1.0, -9.0);
}


void init(void) {
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}


void keyboard(unsigned char key, int x, int y) {
switch (key) {
    case 's': shoulder = (shoulder + 5) % 360; break;
    case 'S': shoulder = (shoulder - 5) % 360; break;
    case 'e': elbow = (elbow + 5) % 360; break;
    case 'E': elbow = (elbow - 5) % 360; break;
    case 'p': palm = (palm + 5) % 90; break;
    case 'P': palm = (palm - 5) % 90; break;
    case 'j': jempol = (jempol + 5) % 90; break;
    case 'J': jempol = (jempol - 5) % 90; break;
    case 't': telunjuk = (telunjuk + 5) % 90; break;
    case 'T': telunjuk = (telunjuk - 5) % 90; break;
    case 'c': tengah = (tengah + 5) % 90; break;
    case 'C': tengah = (tengah - 5) % 90; break;
    case 'm': manis = (manis + 5) % 90; break;
    case 'M': manis = (manis - 5) % 90; break;
    case 'k': kelingking = (kelingking + 5) % 90; break;
    case 'K': kelingking = (kelingking - 5) % 90; break;
	case 27: exit(0); break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (700, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Tangan"); 
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop(); 
	return 0;
}

