#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, palm = 0;
static int thumb = 0, index_finger = 0, middle_finger = 0, ring_finger = 0, pinky_finger = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);

    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)palm, 0.0, 0.0, 1.0);
    glPushMatrix();
    glScalef(0.6, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.15, -0.18, 0.0);
    glRotatef(-40.0, 0.0, 0.0, 1.0);
    glRotatef((GLfloat)thumb, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.09, 0.18);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3, 0.13, 0.0);
    glRotatef((GLfloat)index_finger, 0.0, 0.0, 1.0);
    glTranslatef(0.22, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.44, 0.09, 0.18);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3, 0.04, 0.0);
    glRotatef((GLfloat)middle_finger, 0.0, 0.0, 1.0);
    glTranslatef(0.24, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.48, 0.09, 0.18);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.3, -0.05, 0.0);
    glRotatef((GLfloat)ring_finger, 0.0, 0.0, 1.0);
    glTranslatef(0.22, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.44, 0.09, 0.18);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.25, -0.13, 0.0);
    glRotatef((GLfloat)pinky_finger, 0.0, 0.0, 1.0);
    glTranslatef(0.16, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.32, 0.09, 0.18);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 's': shoulder = (shoulder + 5) % 360; break;
        case 'S': shoulder = (shoulder - 5) % 360; break;
        case 'e': elbow = (elbow + 5) % 360; break;
        case 'E': elbow = (elbow - 5) % 360; break;
        case 'p': palm = (palm + 5) % 360; break;
        case 'P': palm = (palm - 5) % 360; break;
        case 't': thumb = (thumb + 5) % 90; break;
        case 'T': thumb = (thumb - 5) % 90; break;
        case 'i': index_finger = (index_finger + 5) % 90; break;
        case 'I': index_finger = (index_finger - 5) % 90; break;
        case 'm': middle_finger = (middle_finger + 5) % 90; break;
        case 'M': middle_finger = (middle_finger - 5) % 90; break;
        case 'r': ring_finger = (ring_finger + 5) % 90; break;
        case 'R': ring_finger = (ring_finger - 5) % 90; break;
        case 'k': pinky_finger = (pinky_finger + 5) % 90; break;
        case 'K': pinky_finger = (pinky_finger - 5) % 90; break;
        case 27: exit(0); break;
        default: return;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Lengan Telapak Jari");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
