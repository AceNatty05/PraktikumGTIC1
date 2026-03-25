#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, wrist = 0;

static int thumbBase = 0, thumbUp = 0;

static int fBase = 0, fMid = 0, fUp = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void drawSegment(float x, float y, float z) {
    glPushMatrix();
    glScalef(x, y, z);
    glutWireCube(1.0);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -8.0);

    glPushMatrix();
        glTranslatef(-2.5, 0.0, 0.0);
        glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);
        drawSegment(2.0, 0.4, 0.4);

        glTranslatef(1.0, 0.0, 0.0);
        glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);
        drawSegment(2.0, 0.4, 0.4);

        glTranslatef(1.0, 0.0, 0.0);
        glRotatef((GLfloat)wrist, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        drawSegment(1.0, 1.2, 0.4);

        glPushMatrix();
            glTranslatef(-0.2, 0.6, 0.0);
            glRotatef((GLfloat)thumbBase, 0.0, 0.0, 1.0);
            glTranslatef(0.25, 0.0, 0.0);
            drawSegment(0.5, 0.2, 0.2);

            glTranslatef(0.25, 0.0, 0.0);
            glRotatef((GLfloat)thumbUp, 0.0, 0.0, 1.0);
            glTranslatef(0.2, 0.0, 0.0);
            drawSegment(0.4, 0.2, 0.2);
        glPopMatrix();

        float yPos = 0.45;
        for (int i = 0; i < 4; i++) {
            glPushMatrix();
                glTranslatef(0.5, yPos, 0.0);
                glRotatef((GLfloat)fBase, 0.0, 0.0, 1.0);
                glTranslatef(0.3, 0.0, 0.0);
                drawSegment(0.6, 0.18, 0.2);

                glTranslatef(0.3, 0.0, 0.0);
                glRotatef((GLfloat)fMid, 0.0, 0.0, 1.0);
                glTranslatef(0.25, 0.0, 0.0);
                drawSegment(0.5, 0.18, 0.2);

                glTranslatef(0.25, 0.0, 0.0);
                glRotatef((GLfloat)fUp, 0.0, 0.0, 1.0);
                glTranslatef(0.2, 0.0, 0.0);
                drawSegment(0.4, 0.18, 0.2);
            glPopMatrix();
            yPos -= 0.3;
        }

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
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 's': shoulder = (shoulder + 5) % 360; break;
        case 'S': shoulder = (shoulder - 5) % 360; break;
        case 'e': elbow = (elbow + 5) % 360; break;
        case 'E': elbow = (elbow - 5) % 360; break;
        case 'w': wrist = (wrist + 5) % 360; break;
        case 'W': wrist = (wrist - 5) % 360; break;

        case 'f': fBase = (fBase + 5) % 90; break;
        case 'F': fBase = (fBase - 5) % 90; break;
        case 'g': fMid = (fMid + 5) % 90; break;
        case 'G': fMid = (fMid - 5) % 90; break;
        case 'h': fUp = (fUp + 5) % 90; break;
        case 'H': fUp = (fUp - 5) % 90; break;

        case 't': thumbBase = (thumbBase + 5) % 90; break;
        case 'T': thumbBase = (thumbBase - 5) % 90; break;

        case '1':
            fBase = 0; fMid = 0; fUp = 0; thumbBase = 0; thumbUp = 0; break;
        case '2':
            fBase = 90; fMid = 90; fUp = 90; thumbBase = 45; thumbUp = 45; break;
        case '3':
            fBase = 90; fMid = 90; fUp = 90; break;
        case '4':
            fBase = 90; fMid = 90; fUp = 90; thumbBase = 0; thumbUp = 0;
            wrist = -45; break;

        case 27: exit(0); break;
        default: break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
