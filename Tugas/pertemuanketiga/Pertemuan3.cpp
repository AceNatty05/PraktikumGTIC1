#include <GL/glut.h>
#include <stdlib.h>

// Variabel lengan dan telapak
static int shoulder = 0, elbow = 0, wrist = 0;
// Variabel 5 jari dipisah kembali
static int thumb = 0, index_finger = 0, middle_finger = 0, ring_finger = 0, pinky_finger = 0;

void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    // Memutar sudut pandang agar 5 jari terlihat jelas
    glRotatef(25.0, 0.0, 1.0, 0.0);
    glRotatef(20.0, 1.0, 0.0, 0.0);

    // LENGAN ATAS
    glTranslatef (-2.0, 0.0, 0.0); 
    glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
        glScalef (2.0, 0.4, 1.0);
        glutWireCube (1.0);
    glPopMatrix();

    // LENGAN BAWAH
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
        glScalef (2.0, 0.4, 1.0);
        glutWireCube (1.0);
    glPopMatrix();

    // TELAPAK TANGAN
    glTranslatef (1.0, 0.0, 0.0); 
    glRotatef ((GLfloat) wrist, 0.0, 0.0, 1.0);
    glTranslatef (0.5, 0.0, 0.0); 
    glPushMatrix();
        glScalef (1.0, 0.4, 1.0);
        glutWireCube (1.0);
    glPopMatrix();

    // 1. IBU JARI (Thumb)
    glPushMatrix();
        glTranslatef (0.0, 0.25, 0.3); 
        glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
        glTranslatef (0.25, 0.0, 0.0);
        glScalef (0.5, 0.15, 0.2);
        glutWireCube (1.0);
    glPopMatrix();

    // 2. JARI TELUNJUK (Index)
    glPushMatrix();
        glTranslatef (0.5, 0.0, 0.35); 
        glRotatef ((GLfloat) index_finger, 0.0, 0.0, 1.0);
        glTranslatef (0.3, 0.0, 0.0);
        glScalef (0.6, 0.15, 0.15);
        glutWireCube (1.0);
    glPopMatrix();

    // 3. JARI TENGAH (Middle)
    glPushMatrix();
        glTranslatef (0.5, 0.0, 0.12); 
        glRotatef ((GLfloat) middle_finger, 0.0, 0.0, 1.0);
        glTranslatef (0.35, 0.0, 0.0);
        glScalef (0.7, 0.15, 0.15);
        glutWireCube (1.0);
    glPopMatrix();

    // 4. JARI MANIS (Ring)
    glPushMatrix();
        glTranslatef (0.5, 0.0, -0.12);
        glRotatef ((GLfloat) ring_finger, 0.0, 0.0, 1.0);
        glTranslatef (0.3, 0.0, 0.0);
        glScalef (0.6, 0.15, 0.15);
        glutWireCube (1.0);
    glPopMatrix();

    // 5. JARI KELINGKING (Pinky)
    glPushMatrix();
        glTranslatef (0.5, 0.0, -0.35); 
        glRotatef ((GLfloat) pinky_finger, 0.0, 0.0, 1.0);
        glTranslatef (0.25, 0.0, 0.0);
        glScalef (0.5, 0.15, 0.15);
        glutWireCube (1.0);
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape (int w, int h) {
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective (65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0, 0.0, -9.0); 
}

void keyboard (unsigned char key, int x, int y) {
    switch (key) {
        // Kontrol Lengan & Telapak (WASD)
        case 'w': shoulder = (shoulder + 5) % 360; glutPostRedisplay(); break;
        case 'W': shoulder = (shoulder - 5) % 360; glutPostRedisplay(); break;
        case 'a': elbow = (elbow + 5) % 360; glutPostRedisplay(); break;
        case 'A': elbow = (elbow - 5) % 360; glutPostRedisplay(); break;
        case 's': wrist = (wrist + 5) % 360; glutPostRedisplay(); break;
        case 'S': wrist = (wrist - 5) % 360; glutPostRedisplay(); break;
        
        // Kontrol 5 Jari (12345 dan !@#$%)
        case '1': thumb = (thumb + 5) % 360; glutPostRedisplay(); break;
        case '!': thumb = (thumb - 5) % 360; glutPostRedisplay(); break;
        
        case '2': index_finger = (index_finger + 5) % 360; glutPostRedisplay(); break;
        case '@': index_finger = (index_finger - 5) % 360; glutPostRedisplay(); break;
        
        case '3': middle_finger = (middle_finger + 5) % 360; glutPostRedisplay(); break;
        case '#': middle_finger = (middle_finger - 5) % 360; glutPostRedisplay(); break;
        
        case '4': ring_finger = (ring_finger + 5) % 360; glutPostRedisplay(); break;
        case '$': ring_finger = (ring_finger - 5) % 360; glutPostRedisplay(); break;
        
        case '5': pinky_finger = (pinky_finger + 5) % 360; glutPostRedisplay(); break;
        case '%': pinky_finger = (pinky_finger - 5) % 360; glutPostRedisplay(); break;
        
        case 27: exit(0); break; // ESC untuk keluar
        default: break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (900, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Lengan Robot - Jari (12345 & !@#$%)");
    init();
    glutDisplayFunc (display);
    glutReshapeFunc (reshape);
    glutKeyboardFunc (keyboard);
    glutMainLoop();
    return 0;
}
