#include <GLUT/glut.h>

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // 1) GL_LINE_STRIP
    glColor3f(1.0f, 0.0f, 0.0f); // merah
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.90f,  0.70f);
        glVertex2f(-0.75f,  0.85f);
        glVertex2f(-0.60f,  0.65f);
        glVertex2f(-0.45f,  0.80f);
    glEnd();

    // 2) GL_LINE_LOOP
    glColor3f(0.0f, 0.6f, 0.0f); // hijau
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.20f, 0.85f);
        glVertex2f( 0.05f, 0.85f);
        glVertex2f( 0.05f, 0.60f);
        glVertex2f(-0.20f, 0.60f);
    glEnd();

    // 3) GL_TRIANGLE_FAN
    glColor3f(0.0f, 0.0f, 1.0f); // biru
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.45f, 0.72f);   // pusat
        glVertex2f(0.35f, 0.55f);
        glVertex2f(0.55f, 0.55f);
        glVertex2f(0.65f, 0.72f);
        glVertex2f(0.55f, 0.90f);
        glVertex2f(0.35f, 0.90f);
        glVertex2f(0.25f, 0.72f);
        glVertex2f(0.35f, 0.55f);   // tutup kembali
    glEnd();

    // 4) GL_TRIANGLE_STRIP
    glColor3f(1.0f, 0.5f, 0.0f); // oranye
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.90f,  0.10f);
        glVertex2f(-0.75f,  0.35f);
        glVertex2f(-0.60f,  0.10f);
        glVertex2f(-0.45f,  0.35f);
        glVertex2f(-0.30f,  0.10f);
        glVertex2f(-0.15f,  0.35f);
    glEnd();

    // 5) GL_QUADS
    glColor3f(0.6f, 0.0f, 0.6f); // ungu
    glBegin(GL_QUADS);
        glVertex2f(0.10f, 0.35f);
        glVertex2f(0.35f, 0.35f);
        glVertex2f(0.35f, 0.10f);
        glVertex2f(0.10f, 0.10f);
    glEnd();

    // 6) GL_QUAD_STRIP
    glColor3f(0.0f, 0.7f, 0.7f); // cyan
    glBegin(GL_QUAD_STRIP);
        glVertex2f(0.55f, 0.35f);
        glVertex2f(0.55f, 0.10f);

        glVertex2f(0.70f, 0.35f);
        glVertex2f(0.70f, 0.10f);

        glVertex2f(0.85f, 0.35f);
        glVertex2f(0.85f, 0.10f);
    glEnd();

    // Tambahan: titik dan garis biasa
    glPointSize(6.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POINTS);
        glVertex2f(-0.85f, -0.50f);
        glVertex2f(-0.75f, -0.60f);
        glVertex2f(-0.65f, -0.50f);
    glEnd();

    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_LINES);
        glVertex2f(-0.40f, -0.60f);
        glVertex2f(-0.10f, -0.40f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Primitive OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}