#include <GL/glut.h>
#include <stdlib.h>

int shoulder = 0, elbow = 0, wrist = 0;
int finger = 0, thumb = 0;
int armRotY = 0;

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, -5.0f);
    glRotatef((float)armRotY, 0.0f, 1.0f, 0.0f);

    glPushMatrix();

    // shoulder
    glTranslatef(-1.0f, 0.0f, 0.0f);
    glRotatef((float)shoulder, 0.0f, 0.0f, 1.0f);
    glTranslatef(1.0f, 0.0f, 0.0f);
    glPushMatrix();
        glScalef(2.0f, 0.4f, 1.0f);
        glutWireCube(1.0f);
    glPopMatrix();

    // elbow
    glTranslatef(1.0f, 0.0f, 0.0f);
    glRotatef((float)elbow, 0.0f, 0.0f, 1.0f);
    glTranslatef(1.0f, 0.0f, 0.0f);
    glPushMatrix();
        glScalef(2.0f, 0.4f, 1.0f);
        glutWireCube(1.0f);
    glPopMatrix();

    // wrist
    glTranslatef(1.0f, 0.0f, 0.0f);
    glRotatef((float)wrist, 0.0f, 0.0f, 1.0f);
    glTranslatef(0.35f, 0.0f, 0.0f);
    glPushMatrix();
        glScalef(0.70f, 0.65f, 0.45f);
        glutWireCube(1.0f);
    glPopMatrix();
    glTranslatef(0.35f, 0.0f, 0.0f);

    // finger 1
    glPushMatrix();
        glTranslatef(0.0f, 0.24f, 0.0f);
        // ruas 1
        glRotatef(-(float)finger, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.165f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.33f, 0.11f, 0.11f); glutWireCube(1.0f); glPopMatrix();
        glTranslatef(0.165f, 0.0f, 0.0f);
        // ruas 2
        glRotatef(-(float)finger * 0.7f, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.13f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.26f, 0.094f, 0.094f); glutWireCube(1.0f); glPopMatrix();
    glPopMatrix();

    // finger 2
    glPushMatrix();
        glTranslatef(0.0f, 0.08f, 0.0f);
        // ruas 1
        glRotatef(-(float)finger, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.165f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.33f, 0.11f, 0.11f); glutWireCube(1.0f); glPopMatrix();
        glTranslatef(0.165f, 0.0f, 0.0f);
        // ruas 2
        glRotatef(-(float)finger * 0.7f, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.13f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.26f, 0.094f, 0.094f); glutWireCube(1.0f); glPopMatrix();
    glPopMatrix();

    // finger 3
    glPushMatrix();
        glTranslatef(0.0f, -0.08f, 0.0f);
        // ruas 1
        glRotatef(-(float)finger, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.165f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.33f, 0.11f, 0.11f); glutWireCube(1.0f); glPopMatrix();
        glTranslatef(0.165f, 0.0f, 0.0f);
        // ruas 2
        glRotatef(-(float)finger * 0.7f, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.13f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.26f, 0.094f, 0.094f); glutWireCube(1.0f); glPopMatrix();
    glPopMatrix();

    // finger 4
    glPushMatrix();
        glTranslatef(0.0f, -0.24f, 0.0f);
        // ruas 1
        glRotatef(-(float)finger, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.165f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.33f, 0.11f, 0.11f); glutWireCube(1.0f); glPopMatrix();
        glTranslatef(0.165f, 0.0f, 0.0f);
        // ruas 2
        glRotatef(-(float)finger * 0.7f, 0.0f, 1.0f, 0.0f);
        glTranslatef(0.13f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.26f, 0.094f, 0.094f); glutWireCube(1.0f); glPopMatrix();
    glPopMatrix();

    // thumb
    glPushMatrix();
        glTranslatef(-0.25f, -0.38f, 0.0f);
        glRotatef(-75.0f + (float)thumb, 0.0f, 0.0f, 1.0f);
        // ruas 1
        glTranslatef(0.13f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.26f, 0.13f, 0.13f); glutWireCube(1.0f); glPopMatrix();
        glTranslatef(0.13f, 0.0f, 0.0f);
        // ruas 2
        glRotatef((float)thumb * 0.4f, 0.0f, 0.0f, 1.0f);
        glTranslatef(0.10f, 0.0f, 0.0f);
        glPushMatrix(); glScalef(0.20f, 0.11f, 0.11f); glutWireCube(1.0f); glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void Reshape(int w, int h) {
    if (h == 0) h = 1;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(70.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

void Keyboard(unsigned char key, int x, int y) {
    switch (key) {
        /* Putar kiri / kanan */
        case 'a': armRotY = (armRotY + 5) % 360; break;
        case 'A': armRotY = (armRotY - 5 + 360) % 360; break;

        /* Lengan atas */
        case 's': shoulder = (shoulder + 5) % 360; break;
        case 'S': shoulder = (shoulder - 5 + 360) % 360; break;

        /* Siku */
        case 'e': if (elbow < 145) elbow = (elbow + 5) % 360; break;
        case 'E': if (elbow > 0) elbow = (elbow - 5 + 360) % 360; break;

        /* Pergelangan */
        case 'w': if (wrist < 70) wrist = (wrist + 5) % 360; break;
        case 'W': if (wrist > -70) wrist = (wrist - 5) % 360; break;

        /* Jari */
        case 'f': if (finger < 80) finger += 5; break;
        case 'F': if (finger > 0)  finger -= 5; break;

        /* Ibu jari */
        case 't': if (thumb < 60)  thumb += 5; break;
        case 'T': if (thumb > -30) thumb -= 5; break;

        case 27: exit(0); break;
    }
    glutPostRedisplay();
}

void SpecialKey(int key, int x, int y) {
    if (key == GLUT_KEY_LEFT)  armRotY = (armRotY + 5) % 360;
    if (key == GLUT_KEY_RIGHT) armRotY = (armRotY - 5 + 360) % 360;
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(900, 600);
    glutCreateWindow("Tangan");
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutDisplayFunc(Display);
    glutReshapeFunc(Reshape);
    glutKeyboardFunc(Keyboard);
    glutSpecialFunc(SpecialKey);
    glutMainLoop();
    return 0;
}
