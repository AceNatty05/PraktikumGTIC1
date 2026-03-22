/* 
 * File        : Tugas.cpp
 * Deskripsi   : Program OpenGL untuk menampilkan model tangan sederhana
 *               yang terdiri dari lengan, telapak tangan, dan jari-jari.
 *               Setiap bagian dapat digerakkan menggunakan keyboard.
 * Pembuat     : Aprillia Abel Cleodora
 * Tanggal     : 22 Maret 2026
 */
 
#include <windows.h>
#include <GL/glut.h>

// Variabel untuk menyimpan sudut rotasi tiap bagian tangan
static int shoulder1 = 0, shoulder2 = 0, shoulder3 = 0, 
           elbow = 0, hand = 0, 
           arm1 = 0, arm2 = 0, arm3 = 0, arm4 = 0, arm5 = 0;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0); 
	glShadeModel (GL_FLAT);            
}

// Fungsi untuk menampilkan objek
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT); 
	glPushMatrix();               

	// Transformasi awal
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(0.45, 0.45, 0.45); 

	// Rotasi bahu 
	glRotatef((GLfloat)shoulder1, 0.0, 1.0, 0.0);
	glRotatef((GLfloat)shoulder2, 1.0, 0.0, 0.0);
	glRotatef((GLfloat)shoulder3, 0.0, 0.0, 1.0);

	// LENGAN ATAS 
	glTranslatef(1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);     
	glutWireCube(1.0);           
	glPopMatrix();
	
	// SIKU 
	glTranslatef (1.0, 0.0, 0.0);
	glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0);

	// LENGAN BAWAH
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0); 
	glutWireCube(1.0); 
	glPopMatrix();
	
	// PERGELANGAN TANGAN 
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef((GLfloat)hand, 0.0, 0.0, 1.0);

	// TELAPAK TANGAN 
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	// JARI 

	// Jari 1 (kelingking)
	glPushMatrix();
	glTranslatef(0.5, 0.0, -0.4);
	glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
	glTranslatef(0.35, 0.0, 0.0);
	glScalef(0.7, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	// Jari 2 (manis)
	glPushMatrix();
	glTranslatef(0.5, 0.0, -0.125);
	glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0.0, 0.0);
	glScalef(0.8, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	// Jari 3 (tengah)
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.125);
	glRotatef((GLfloat)arm3, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	// Jari 4 (telunjuk)
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.4);
	glRotatef((GLfloat)arm4, 0.0, 0.0, 1.0);
	glTranslatef(0.4, 0.0, 0.0);
	glScalef(0.8, 0.4, 0.2);
	glutWireCube(1.0);
	glPopMatrix();

	// Ibu jari
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.5);
	glRotatef((GLfloat)arm5, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.0, 0.25);
	glScalef(0.4, 0.2, 0.5);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();       
	glutSwapBuffers();  
}

// Mengatur tampilan viewport dan perspektif
void reshape(int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0); 

	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0); 
}

// Fungsi untuk input keyboard
void keyboard(unsigned char key, int x, int y) {
	switch (key) {

		// Rotasi bahu
		case 'a': shoulder1 = (shoulder1 + 5) % 360; break;
        case 'A': shoulder1 = (shoulder1 - 5) % 360; break;

		case 's': shoulder2 = (shoulder2 + 5) % 360; break;
		case 'S': shoulder2 = (shoulder2 - 5) % 360; break;

		case 'd': shoulder3 = (shoulder3 + 5) % 360; break;
		case 'D': shoulder3 = (shoulder3 - 5) % 360; break;

		// Rotasi siku
		case 'z': elbow = (elbow + 5) % 360; break;
        case 'Z': elbow = (elbow - 5) % 360; break;

		// Rotasi pergelangan tangan
		case 'x': hand = (hand + 5) % 360; break;
		case 'X': hand = (hand - 5) % 360; break;

		// Rotasi jari
		case 'q': arm1 = (arm1 + 5) % 360; break;
		case 'Q': arm1 = (arm1 - 5) % 360; break;

		case 'w': arm2 = (arm2 + 5) % 360; break;
		case 'W': arm2 = (arm2 - 5) % 360; break;

		case 'e': arm3 = (arm3 + 5) % 360; break;
		case 'E': arm3 = (arm3 - 5) % 360; break;

		case 'r': arm4 = (arm4 + 5) % 360; break;
		case 'R': arm4 = (arm4 - 5) % 360; break;

		case 't': arm5 = (arm5 - 5) % 360; break;
		case 'T': arm5 = (arm5 + 5) % 360; break;

		// Keluar program 
		case 27: exit(0);
        default: break;
    }

	glutPostRedisplay(); 
}

// MAIN
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
	glutInitWindowSize (700, 600); 
	glutInitWindowPosition (100, 100); 
	glutCreateWindow (argv[0]); 

	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape); 
	glutKeyboardFunc(keyboard); 

	glutMainLoop(); 
}
