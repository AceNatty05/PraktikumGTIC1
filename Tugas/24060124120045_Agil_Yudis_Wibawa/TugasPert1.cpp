/*
 * Tugas Minggu 1 GL_LINES + Primitif Lainnya
 * Nama  : Agil Yudis Wibawa
 * NIM   : 24060124120045
 */

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //  GL_LINES 
    glBegin(GL_LINES);
        //  horizontal merah
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.8f, 0.0f);
        glVertex2f(0.8f, 0.0f);

        //  vertikal hijau
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.0f, -0.8f);
        glVertex2f(0.0f, 0.8f);

        //  diagonal kiri bawah ke kanan atas (biru)
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.8f, -0.8f);
        glVertex2f(0.8f, 0.8f);

        //  diagonal kiri atas ke kanan bawah (kuning)
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.8f, 0.8f);
        glVertex2f(0.8f, -0.8f);
    glEnd();

    //  GL_LINE_STRIP (merah) 
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.95f, 0.95f);
        glVertex2f(-0.7f,  0.7f);
        glVertex2f(-0.95f, 0.7f);
        glVertex2f(-0.7f,  0.55f);
        glVertex2f(-0.95f, 0.55f);
    glEnd();

    //  GL_LINE_LOOP (hijau) 
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.15f, 0.95f);
        glVertex2f(-0.3f,  0.75f);
        glVertex2f(-0.2f,  0.55f);
        glVertex2f(-0.05f, 0.55f);
        glVertex2f(0.0f,   0.75f);
    glEnd();

    //  GL_TRIANGLE_FAN (biru muda) 
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.7f, 0.75f);
        glVertex2f(0.5f, 0.55f);
        glVertex2f(0.6f, 0.95f);
        glVertex2f(0.8f, 0.95f);
        glVertex2f(0.9f, 0.75f);
        glVertex2f(0.85f, 0.55f);
    glEnd();

    //  GL_TRIANGLE_STRIP (kuning) 
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.95f, -0.55f);
        glVertex2f(-0.85f, -0.3f);
        glVertex2f(-0.75f, -0.55f);
        glVertex2f(-0.65f, -0.3f);
        glVertex2f(-0.55f, -0.55f);
        glVertex2f(-0.45f, -0.3f);
    glEnd();

    //  GL_QUADS (magenta) 
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.25f, -0.3f);
        glVertex2f(-0.25f, -0.55f);
        glVertex2f(0.05f,  -0.55f);
        glVertex2f(0.05f,  -0.3f);
    glEnd();

    //  GL_QUAD_STRIP (cyan) 
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(0.4f, -0.3f);
        glVertex2f(0.4f, -0.55f);
        glVertex2f(0.55f, -0.3f);
        glVertex2f(0.55f, -0.55f);
        glVertex2f(0.7f, -0.3f);
        glVertex2f(0.7f, -0.55f);
        glVertex2f(0.85f, -0.3f);
        glVertex2f(0.85f, -0.55f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tugas 1 - GL_LINES, LINE_STRIP, LINE_LOOP, TRIANGLE_FAN, TRIANGLE_STRIP, QUADS, QUAD_STRIP");

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

