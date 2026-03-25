#include <GL/glut.h>

int shoulder = 0, elbow = 0, wrist = 0;
int thumb1 = 0, thumb2 = 0;
int index1 = 0, index2 = 0, index3 = 0;
int middle1 = 0, middle2 = 0, middle3 = 0;
int ring1 = 0, ring2 = 0, ring3 = 0;
int pinky1 = 0, pinky2 = 0, pinky3 = 0;

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
    glTranslatef(0.0, 0.0, -5.0);

    glPushMatrix();
    
    	// Bahu (Shoulder)
        glTranslatef(-1.0, 0.0, 0.0);
        glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);
        
        // Lengan Atas
        glPushMatrix();
            glScalef(2.0, 0.4, 0.2);
            glutWireCube(1.0);
        glPopMatrix();

        // Siku (Elbow)
        glTranslatef(1.0, 0.0, 0.0);
        glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);
        
        // Lengan Bawah
        glPushMatrix();
            glScalef(2.0, 0.4, 0.2);
            glutWireCube(1.0);
        glPopMatrix();

        // Pergelangan (Wrist)
        glTranslatef(1.0, 0.0, 0.0);
        glRotatef((GLfloat)wrist, 0.0, 0.0, 1.0);
        glTranslatef(0.3, 0.0, 0.0);
        
        // Telapak Tangan
        glPushMatrix();
            glScalef(0.6, 0.8, 0.2);
            glutWireCube(1.0);
        glPopMatrix();

        // Ibu Jari (Thumb)
        glPushMatrix();
            glTranslatef(0.15, 0.35, 0.0);
            glRotatef((GLfloat)thumb1, 0.0, 0.0, 1.0);
            glTranslatef(0.15, 0.15, 0.0);
			glPushMatrix(); 
				glScalef(0.3, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.15, 0.0, 0.0);
            glRotatef((GLfloat)thumb2, 0.0, 1.0, 0.0);
            glTranslatef(0.1, 0.0, 0.0);
            glPushMatrix();
				glScalef(0.25, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();
        glPopMatrix();

        // Jari Telunjuk (Index)
        glPushMatrix();
            glTranslatef(0.3, 0.3, 0.0); 
            glRotatef((GLfloat)index1, 0.0, 0.0, 1.0);
            glTranslatef(0.1, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.2, 0.2, 0.1); 
				glutWireCube(1.0);
			glPopMatrix();

            glTranslatef(0.1, 0.0, 0.0);
            glRotatef((GLfloat)index2, 0.0, 0.0, 1.0);
            glTranslatef(0.125, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.25, 0.2, 0.1);
				glutWireCube(1.0);
			glPopMatrix();

            glTranslatef(0.125, 0.0, 0.0);
            glRotatef((GLfloat)index3, 0.0, 0.0, 1.0);
            glTranslatef(0.15, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.3, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();
        glPopMatrix();

        // Jari Tengah (Middle)
        glPushMatrix();
            glTranslatef(0.3, 0.1, 0.0); 
            glRotatef((GLfloat)middle1, 0.0, 0.0, 1.0);
            glTranslatef(0.1, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.2, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.1, 0.0, 0.0); 
            glRotatef((GLfloat)middle2, 0.0, 0.0, 1.0);
            glTranslatef(0.15, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.3, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.15, 0.0, 0.0); 
            glRotatef((GLfloat)middle3, 0.0, 0.0, 1.0);
            glTranslatef(0.175, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.35, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();
        glPopMatrix();

        // Jari Manis (Ring)
        glPushMatrix();
            glTranslatef(0.3, -0.1, 0.0); 
            glRotatef((GLfloat)ring1, 0.0, 1.0, 0.0);
            glTranslatef(0.1, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.2, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.1, 0.0, 0.0); 
            glRotatef((GLfloat)ring2, 0.0, 1.0, 0.0);
            glTranslatef(0.125, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.25, 0.2, 0.1);
				glutWireCube(1.0);
			glPopMatrix();

            glTranslatef(0.125, 0.0, 0.0); 
            glRotatef((GLfloat)ring3, 0.0, 1.0, 0.0);
            glTranslatef(0.15, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.3, 0.2, 0.1); 
				glutWireCube(1.0);
			glPopMatrix();
        glPopMatrix();

        // Jari Kelingking (Pinky)
        glPushMatrix();
            glTranslatef(0.3, -0.3, 0.0); 
            glRotatef((GLfloat)pinky1, 0.0, 1.0, 0.0);
            glTranslatef(0.1, 0.0, 0.0);
            glPushMatrix(); 
				glScalef(0.2, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.1, 0.0, 0.0); 
            glRotatef((GLfloat)pinky2, 0.0, 1.0, 0.0);
            glTranslatef(0.09, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.18, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();

            glTranslatef(0.09, 0.0, 0.0); 
            glRotatef((GLfloat)pinky3, 0.0, 1.0, 0.0);
            glTranslatef(0.1, 0.0, 0.0); 
            glPushMatrix(); 
				glScalef(0.2, 0.2, 0.1); 
				glutWireCube(1.0); 
			glPopMatrix();
        glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void Keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 's': shoulder = (shoulder + 5) % 360; break;
        case 'S': shoulder = (shoulder - 5) % 360; break;
        case 'e': elbow = (elbow + 5) % 360; break;
        case 'E': elbow = (elbow - 5) % 360; break;
        case 'w': wrist = (wrist + 5) % 360; break;
        case 'W': wrist = (wrist - 5) % 360; break;
        
        // Ibu Jari (Thumb)
        case 'a': thumb1 = (thumb1 + 5) % 360; break;
        case 'A': thumb1 = (thumb1 - 5) % 360; break;
        case 'b': thumb2 = (thumb2 + 5) % 360; break;
        case 'B': thumb2 = (thumb2 - 5) % 360; break;

        // Jari Telunjuk (Index)
        case 'c': index1 = (index1 + 5) % 360; break;
        case 'C': index1 = (index1 - 5) % 360; break;
        case 'd': index2 = (index2 + 5) % 360; break;
        case 'D': index2 = (index2 - 5) % 360; break;
        case 'f': index3 = (index3 + 5) % 360; break;
        case 'F': index3 = (index3 - 5) % 360; break;

        // Jari Tengah (Middle)
        case 'g': middle1 = (middle1 + 5) % 360; break;
        case 'G': middle1 = (middle1 - 5) % 360; break;
        case 'h': middle2 = (middle2 + 5) % 360; break;
        case 'H': middle2 = (middle2 - 5) % 360; break;
        case 'i': middle3 = (middle3 + 5) % 360; break;
        case 'I': middle3 = (middle3 - 5) % 360; break;

        // Jari Manis (Ring)
        case 'j': ring1 = (ring1 + 5) % 360; break;
        case 'J': ring1 = (ring1 - 5) % 360; break;
        case 'k': ring2 = (ring2 + 5) % 360; break;
        case 'K': ring2 = (ring2 - 5) % 360; break;
        case 'l': ring3 = (ring3 + 5) % 360; break;
        case 'L': ring3 = (ring3 - 5) % 360; break;

        // Jari Kelingking (Pinky)
        case 'm': pinky1 = (pinky1 + 5) % 360; break;
        case 'M': pinky1 = (pinky1 - 5) % 360; break;
        case 'n': pinky2 = (pinky2 + 5) % 360; break;
        case 'N': pinky2 = (pinky2 - 5) % 360; break;
        case 'o': pinky3 = (pinky3 + 5) % 360; break;
        case 'O': pinky3 = (pinky3 - 5) % 360; break;

        case 27: exit(0); break;
    }
    glutPostRedisplay();
}

void Peace() {
    // Lengan
    shoulder = -15;
    elbow = 105;

    // Jari telunjuk dan tengah membentuk V
    index1 = 10;
    middle1 = -10;

    // Jari manis dan kelingling menggenggam
    ring1 = ring2 = ring3 = -60;
    pinky1 = pinky2 = pinky3 = -60;

    // Ibu jari menekuk ke dalam
    thumb1 = 90;
    thumb2 = -105;
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Keaktifan - Peace");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glutDisplayFunc(Display);
    glutReshapeFunc(Reshape);
    
    // Untuk peace manual
    glutKeyboardFunc(Keyboard);
    
    // Untuk peace otomatis
    Peace();
    
    glutMainLoop();
    return 0;
}
