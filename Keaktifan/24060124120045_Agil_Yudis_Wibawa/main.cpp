/*
 * Keaktifan 1
 * Nama  : Agil Yudis Wibawa
 * NIM   : 24060124120045
 */

#include <GL/glut.h>

// Fungsi kotak GL_QUADS
void kotak(float x, float y, float ukuran, float r, float g, float b) {
    float s = ukuran / 2.0f;
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
        glVertex2f(x - s, y - s);
        glVertex2f(x + s, y - s);
        glVertex2f(x + s, y + s);
        glVertex2f(x - s, y + s);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    float k = 60.0f; // ukuran 1 kotak
    float g = 62.0f; // jarak antar kotak

// WAJAH
    // Baris 1 mualai dari bawah, 3 kotak tengah
    kotak(400 - g, 150, k, 1.0f, 0.85f, 0.0f);
    kotak(400,     150, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + g, 150, k, 1.0f, 0.85f, 0.0f);

    // Baris 2
    kotak(400 - 2*g, 150 + g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 - g,   150 + g, k, 1.0f, 0.85f, 0.0f);
    kotak(400,       150 + g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + g,   150 + g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + 2*g, 150 + g, k, 1.0f, 0.85f, 0.0f);

    // Baris 3
    kotak(400 - 2*g, 150 + 2*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 - g,   150 + 2*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400,       150 + 2*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + g,   150 + 2*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + 2*g, 150 + 2*g, k, 1.0f, 0.85f, 0.0f);

    // Baris 4
    kotak(400 - 2*g, 150 + 3*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 - g,   150 + 3*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400,       150 + 3*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + g,   150 + 3*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + 2*g, 150 + 3*g, k, 1.0f, 0.85f, 0.0f);

    // Baris 5
    kotak(400 - g, 150 + 4*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400,     150 + 4*g, k, 1.0f, 0.85f, 0.0f);
    kotak(400 + g, 150 + 4*g, k, 1.0f, 0.85f, 0.0f);

    // MATA KIRI (hitam)
    kotak(400 - g, 150 + 3*g, k, 0.0f, 0.0f, 0.0f);

    // MATA KANAN (hitam)
    kotak(400 + g, 150 + 3*g, k, 0.0f, 0.0f, 0.0f);

    // MULUT (merah)
    kotak(400 - g, 150 + g, k, 0.9f, 0.1f, 0.1f);
    kotak(400,     150 + g, k, 0.9f, 0.1f, 0.1f);
    kotak(400 + g, 150 + g, k, 0.9f, 0.1f, 0.1f);

    glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0) h = 1;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    if (key == 27) exit(0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Keaktifan 1 - Smiley Kubus | Agil Yudis Wibawa");

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
