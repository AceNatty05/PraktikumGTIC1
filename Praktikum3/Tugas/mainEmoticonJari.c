/* Nama File : mainEmoticonJari.c
 * Deskripsi : berisi pembentukan lengan dan jari beserta emoticon
 * Pembuat : Akbar Mukti Wibowo 
 * Tanggal : 23 Maret 2026
 */

#include <GL/glut.h>

int shoulder = 0;
int elbow = 0;
int wrist = 0;
int finger = 0;
int mode = 0;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    // BAHU
    glTranslatef(-2.0, 0.0, 0.0);
    glRotatef(shoulder, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glScalef(2.0, 0.4, 0.6);
    glutWireCube(1.0);
    glPopMatrix();

    // SIKU
    glTranslatef(2.0, 0.0, 0.0);
    glRotatef(elbow, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glScalef(2.0, 0.4, 0.6);
    glutWireCube(1.0);
    glPopMatrix();

    // PERGELANGAN
    glTranslatef(2.0, 0.0, 0.0);
    glRotatef(wrist, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(0.1, 0.0, 0.0);
    glScalef(0.4, 0.3, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // TELAPAK
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(0.4, 0.0, 0.0);
    glScalef(0.8, 0.49, 0.6);
    glutWireCube(1.0);
    glPopMatrix();

    // PANGKAL JARI
    glTranslatef(0.6, 0.0, 0.0);

    // JEMPOL
    glPushMatrix();
    if (mode == 0) {
	    glTranslatef(-0.1, 0.35, 0.0);
	    
	//    float jempol = finger;
	//
	//    if (mode == 1) {
	//        glRotatef(90,0,0,1);
	//    }
	//    if (mode == 2) {
	//    	glRotatef(270,0,0,1);
	//    }
	//    if (mode == 3) jempol = 0;
	    
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.5, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.0, 0.0, 0.0);
	    glScalef(0.5, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 1) {
	    glTranslatef(-0.3, 0.35, 0.0);
	    
	//    float jempol = finger;
	//
	//    if (mode == 1) {
	//        glRotatef(90,0,0,1);
	//    }
	//    if (mode == 2) {
	//    	glRotatef(270,0,0,1);
	//    }
	//    if (mode == 3) jempol = 0;
	    
	    glRotatef(90, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.5, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.0, 0.0, 0.0);
	    glScalef(0.5, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 2 || mode == 3) {
	    glTranslatef(-0.1, 0.35, 0.0);
	    
	//    float jempol = finger;
	//
	//    if (mode == 1) {
	//        glRotatef(90,0,0,1);
	//    }
	//    if (mode == 2) {
	//    	glRotatef(270,0,0,1);
	//    }
	//    if (mode == 3) jempol = 0;
	    
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glRotatef(280,0.0,0.0,1.0);
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.5, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.0, 0.0, 0.0);
	    glScalef(0.20, 0.12, 0.15);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	

    glPopMatrix();

    // JARI 1
    glPushMatrix();
    if (mode == 0 || mode == 3) {
	    glTranslatef(0.0, 0.18, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.55, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.9, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 1) {
	    glTranslatef(0.0, 0.18, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.0, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(-0.2, 0.0, 0.0);
	    glScalef(0.2, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 2) {
	    glTranslatef(0.0, 0.18, 0.0);
	    glRotatef(15, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.55, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.9, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}

    glPopMatrix();

    // JARI 2
    glPushMatrix();
    if (mode == 0) {
	    glTranslatef(-0.02, 0.08, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.25, 0.0, 0.0);
	    glScalef(0.4, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.65, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(1.0, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 1 || mode == 3) {
	    glTranslatef(-0.02, 0.08, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.25, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.00, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(-0.2, 0.0, 0.0);
	    glScalef(0.0, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 2) {
	    glTranslatef(-0.02, 0.08, 0.0);
	    glRotatef(355, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.25, 0.0, 0.0);
	    glScalef(0.4, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.65, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(1.0, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}

    glPopMatrix();

    // JARI 3
    glPushMatrix();
    if (mode == 0) {
	    glTranslatef(0.0, -0.03, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.35, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.55, 0.0, 0.0);
	    glScalef(0.3, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.85, 0.0, 0.0);
	    glScalef(0.2, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 1 || mode == 2 || mode == 3) {
	    glTranslatef(0.0, -0.03, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.2, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.0, 0.0, 0.0);
	    glScalef(0.3, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(-0.2, 0.0, 0.0);
	    glScalef(0.07, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	glPopMatrix();

    // JARI 4
    glPushMatrix();
    if (mode == 0) {
	    glTranslatef(0.0, -0.175, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.15, 0.0, 0.0);
	    glScalef(0.3, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(0.45, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}
	
	if (mode == 1 || mode == 2 || mode == 3) {
	    glTranslatef(0.0, -0.175, 0.0);
	    glRotatef(finger, 0.0, 0.0, 1.0);
	
	    glPushMatrix();
	    glTranslatef(0.15, 0.0, 0.0);
	    glScalef(0.3, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	
	    glPushMatrix();
	    glTranslatef(-0.1, 0.0, 0.0);
	    glScalef(0.25, 0.12, 0.1);
	    glutWireCube(1.0);
	    glPopMatrix();
	}

    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

// input
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 's': shoulder = (shoulder + 5) % 360; break;
        case 'S': shoulder = (shoulder - 5) % 360; break;

        case 'e': elbow = (elbow + 5) % 360; break;
        case 'E': elbow = (elbow - 5) % 360; break;

        case 'w': wrist = (wrist + 5) % 360; break;
        case 'W': wrist = (wrist - 5) % 360; break;

        case 'f': finger = (finger + 5) % 90; break;
        case 'F': finger = (finger - 5) % 90; break;
        
        case '1': mode = 1; break;
        case '2': mode = 2; break;
        case '3': mode = 3; break;
        case '0': mode = 0; break;
    }
    glutPostRedisplay();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (float)w / (float)h, 1.0, 20.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -8.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Emoticon Jari");
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}

