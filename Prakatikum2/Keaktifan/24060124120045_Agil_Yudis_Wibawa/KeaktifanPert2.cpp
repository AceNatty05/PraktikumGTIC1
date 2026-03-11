/*
 * Keaktifan 1 (Snowflake)
 * Nama  : Agil Yudis Wibawa
 * NIM   : 24060124120045
 */

#include <GL/glut.h>

#define SISI 8

void gambarBasis() {
    glBegin(GL_LINES);
        // sisi pertama
		glVertex2f(0.0f, 0.0f);
        glVertex2f(0.8f, 0.0f);

        // cabang atas
        glVertex2f(0.55f, 0.0f);
        glVertex2f(0.7f, 0.12f);

        // cabang bawah
        glVertex2f(0.55f, 0.0f);
        glVertex2f(0.7f, -0.12f);

        // cabang kecil atas
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.42f, 0.08f);

        // cabang kecil bawah
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.42f, -0.08f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(2.0f);

    // Sisi ke-1: 0 derajat (basis asli, sejajar sumbu X)
    glPushMatrix();
        glRotatef(0.0f, 0.0f, 0.0f, 1.0f);
        gambarBasis();
    glPopMatrix();

    // Sisi ke-2: 45 derajat
   glPushMatrix();
       glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-3: 90 derajat
   glPushMatrix();
       glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-4: 135 derajat
   glPushMatrix();
       glRotatef(135.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-5: 180 derajat
   glPushMatrix();
       glRotatef(180.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-6: 225 derajat
   glPushMatrix();
       glRotatef(225.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-7: 270 derajat
   glPushMatrix();
       glRotatef(270.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // Sisi ke-8: 315 derajat
   glPushMatrix();
       glRotatef(315.0f, 0.0f, 0.0f, 1.0f);
       gambarBasis();
   glPopMatrix();

    // titik pusat
    glPointSize(5.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POINTS);
        glVertex2f(0.0f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Snowflake - Rotasi Basis ke Titik Pusat");

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
