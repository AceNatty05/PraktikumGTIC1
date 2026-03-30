#include <GLUT/glut.h>
#include <stdlib.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}

void drawSegment(GLfloat length, GLfloat height, GLfloat depth) {
    glPushMatrix();
        glTranslatef(length / 2.0f, 0.0f, 0.0f);
        glScalef(length, height, depth);
        glutWireCube(1.0f);
    glPopMatrix();
}

void Jarilain(GLfloat baseX, GLfloat baseY, GLfloat baseZ,
              int a1, int a2, int a3,
              GLfloat l1, GLfloat l2, GLfloat l3) {
    glPushMatrix();
        glTranslatef(baseX, baseY, baseZ);

        glRotatef((GLfloat)a1, 0.0f, 1.0f, 0.0f);
        drawSegment(l1, 0.22f, 0.18f);

        glTranslatef(l1, 0.0f, 0.0f);
        glRotatef((GLfloat)a2, 0.0f, 1.0f, 0.0f);
        drawSegment(l2, 0.20f, 0.16f);

        glTranslatef(l2, 0.0f, 0.0f);
        glRotatef((GLfloat)a3, 0.0f, 1.0f, 0.0f);
        drawSegment(l3, 0.18f, 0.14f);
    glPopMatrix();
}

void jariJempol(GLfloat baseX, GLfloat baseY, GLfloat baseZ,
                int a1, int a2, int a3,
                GLfloat l1, GLfloat l2, GLfloat l3) {
    glPushMatrix();
        glTranslatef(baseX, baseY, baseZ);

        glRotatef(90.0f, 0.0f, 0.0f, 1.0f);

        glRotatef((GLfloat)a1, 0.0f, 1.0f, 0.0f);
        drawSegment(l1, 0.22f, 0.18f);

        glTranslatef(l1, 0.0f, 0.0f);
        glRotatef((GLfloat)a2, 0.0f, 1.0f, 0.0f);
        drawSegment(l2, 0.20f, 0.16f);

        glTranslatef(l2, 0.0f, 0.0f);
        glRotatef((GLfloat)a3, 0.0f, 1.0f, 0.0f);
        drawSegment(l3, 0.16f, 0.13f);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(-2.8f, 0.0f, -10.5f);

    glPushMatrix();

        /* shoulder */
        glTranslatef(-1.5f, 0.0f, 0.0f);
        glRotatef(0.0, 0.0f, 0.0f, 1.0f);
        glTranslatef(1.5f, 0.0f, 0.0f);
        drawSegment(3.0f, 0.85f, 0.5f);

        /* elbow */
        glTranslatef(3.0f, 0.0f, 0.0f);
        glRotatef(0.0, 0.0f, 0.0f, 1.0f);
        drawSegment(1.5f, 0.85f, 0.5f);

        /* pergelangan 1 */
        glTranslatef(1.5f, 0.0f, 0.0f);
        glRotatef(0.0, 0.0f, 0.0f, 1.0f);

        /* pergelangan 2 */
        glRotatef(0.0, 0.0f, 1.0f, 0.0f);

        /* telapak */
        drawSegment(1.4f, 1.5f, 0.5f);

        /* jempol */
        jariJempol(0.4f, 0.74f, 0.35f,
                   0, 0, 0,
                   0.45f, 0.37f, 0.25f);

        /* 4 jari utama */
        Jarilain(1.5f,  0.50f, 0.00f,
                 90, 90, 90,
                 0.47f, 0.37f, 0.25f);

        Jarilain(1.5f,  0.20f, 0.00f,
                 90, 90, 90,
                 0.53f, 0.41f, 0.27f);

        Jarilain(1.5f, -0.10f, 0.00f,
                 90, 90, 90,
                 0.50f, 0.39f, 0.26f);

        Jarilain(1.5f, -0.40f, 0.00f,
                 0, 0, 0,
                 0.43f, 0.35f, 0.23f);

    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0) h = 1;

    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 25.0);

    glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}