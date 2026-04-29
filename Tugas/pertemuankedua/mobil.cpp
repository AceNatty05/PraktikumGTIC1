#include <gl/glut.h>
#include <math.h>

#define PI 3.1415926535898

// Fungsi membuat lingkaran
void buatLingkaran(float rx, float ry, float x, float y) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float theta = 2.0f * PI * i / 100;
        glVertex2f(x + rx * cos(theta), y + ry * sin(theta));
    }
    glEnd();
}

// Fungsi menggambar pohon (DIPERBESAR)
void gambarPohon(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(1.5f, 1.5f, 1.0f); // perbesar pohon

    // Batang
    glColor3f(0.4f, 0.2f, 0.0f);
    glRectf(-0.03, 0.0, 0.03, -0.2);

    // Daun
    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.15, 0.0); glVertex2f(0.15, 0.0); glVertex2f(0.0, 0.2);
        glVertex2f(-0.12, 0.1); glVertex2f(0.12, 0.1); glVertex2f(0.0, 0.3);
    glEnd();

    glPopMatrix();
}

// Fungsi menggambar awan
void gambarAwan(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);

    buatLingkaran(0.1, 0.08, 0.0, 0.0);
    buatLingkaran(0.08, 0.06, -0.1, -0.02);
    buatLingkaran(0.08, 0.06, 0.1, -0.02);

    glPopMatrix();
}

void RenderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // --- LANGIT ---
    glBegin(GL_QUADS);
        glColor3f(0.5f, 0.8f, 1.0f); glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glColor3f(0.8f, 0.9f, 1.0f); glVertex2f(1.0, -0.4);
        glVertex2f(-1.0, -0.4);
    glEnd();

    // --- AWAN & POHON ---
    gambarAwan(-0.6, 0.7);
    gambarAwan(0.4, 0.8);

    gambarPohon(-0.8, -0.3);
    gambarPohon(0.2, -0.3);
    gambarPohon(0.7, -0.3); // pohon tambahan kanan

    // --- JALAN ---
    glColor3f(0.25f, 0.25f, 0.25f);
    glRectf(-1.0f, -0.4f, 1.0f, -1.0f);

    // Marka jalan
    glColor3f(1.0f, 1.0f, 1.0f);
    for(float i = -1.0; i < 1.0; i += 0.5) {
        glRectf(i + 0.1, -0.65, i + 0.4, -0.68);
    }

    // --- MOBIL ---
    glPushMatrix();

        // Bak belakang
        glColor3f(0.0f, 0.3f, 0.7f);
        glRectf(-0.6, -0.15, 0.1, -0.4);

        // Kabin
        glColor3f(0.0f, 0.4f, 0.9f);
        glBegin(GL_POLYGON);
            glVertex2f(0.1, -0.15);
            glVertex2f(0.1, 0.1);
            glVertex2f(0.4, 0.1);
            glVertex2f(0.6, -0.15);
            glVertex2f(0.6, -0.4);
            glVertex2f(0.1, -0.4);
        glEnd();

        // Jendela
        glColor3f(0.8f, 0.95f, 1.0f);
        glBegin(GL_QUADS);
            glVertex2f(0.15, 0.05); glVertex2f(0.35, 0.05);
            glVertex2f(0.45, -0.1); glVertex2f(0.15, -0.1);
        glEnd();

        // Lampu
        glColor3f(1.0f, 1.0f, 0.0f);
        buatLingkaran(0.03, 0.04, 0.58, -0.22);

    glPopMatrix();

    // --- RODA ---
    glColor3f(0.0f, 0.0f, 0.0f);
    buatLingkaran(0.12, 0.12, -0.35, -0.42);
    buatLingkaran(0.12, 0.12, 0.35, -0.42);

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Tugas Akhir Praktikum - Pickup Biru");

    // BACKGROUND LANGIT (menghilangkan hitam)
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);

    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(RenderScene);
    glutMainLoop();
    return 0;
}
