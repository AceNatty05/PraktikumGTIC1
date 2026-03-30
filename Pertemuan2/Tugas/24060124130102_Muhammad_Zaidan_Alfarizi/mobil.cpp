#include <GLUT/glut.h>
#include <cmath>

float mobil1 = 250.0f;
float mobil2 = 440.0f;
float mobil3 = 630.0f;

void lingkaran(float cx, float cy, float r, int segmen = 100) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < segmen; i++) {
        float sudut = 2.0f * 3.1415926f * i / segmen;
        float x = r * cos(sudut);
        float y = r * sin(sudut);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void awan(float x, float y) {
    glColor3f(1.0f, 1.0f, 1.0f);
    lingkaran(x, y, 25);
    lingkaran(x + 25, y + 10, 30);
    lingkaran(x + 55, y, 25);
    lingkaran(x + 25, y - 10, 25);
}

void matahari(float x, float y) {
    glColor3f(1.0f, 0.85f, 0.0f);
    lingkaran(x, y, 40);

    glColor3f(1.0f, 0.7f, 0.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < 360; i += 20) {
        float rad = i * 3.1415926f / 180.0f;
        glVertex2f(x + 45 * cos(rad), y + 45 * sin(rad));
        glVertex2f(x + 70 * cos(rad), y + 70 * sin(rad));
    }
    glEnd();
}

void pohon(float x, float y) {
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
        glVertex2f(x - 10, y);
        glVertex2f(x + 10, y);
        glVertex2f(x + 10, y + 50);
        glVertex2f(x - 10, y + 50);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f);
    lingkaran(x, y + 70, 25);
    lingkaran(x - 20, y + 60, 22);
    lingkaran(x + 20, y + 60, 22);
    lingkaran(x, y + 95, 20);
}

void rumah(float x, float y) {
    glColor3f(0.95f, 0.75f, 0.55f);
    glBegin(GL_POLYGON);
        glVertex2f(x, y);
        glVertex2f(x + 120, y);
        glVertex2f(x + 120, y + 90);
        glVertex2f(x, y + 90);
    glEnd();

    glColor3f(0.7f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
        glVertex2f(x - 10, y + 90);
        glVertex2f(x + 60, y + 140);
        glVertex2f(x + 130, y + 90);
    glEnd();

    glColor3f(0.4f, 0.2f, 0.1f);
    glBegin(GL_POLYGON);
        glVertex2f(x + 45, y);
        glVertex2f(x + 75, y);
        glVertex2f(x + 75, y + 50);
        glVertex2f(x + 45, y + 50);
    glEnd();

    glColor3f(0.7f, 0.9f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(x + 10, y + 40);
        glVertex2f(x + 35, y + 40);
        glVertex2f(x + 35, y + 65);
        glVertex2f(x + 10, y + 65);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(x + 85, y + 40);
        glVertex2f(x + 110, y + 40);
        glVertex2f(x + 110, y + 65);
        glVertex2f(x + 85, y + 65);
    glEnd();
}

void gedung(float x, float y, float lebar, float tinggi) {
    glColor3f(0.65f, 0.65f, 0.75f);
    glBegin(GL_POLYGON);
        glVertex2f(x, y);
        glVertex2f(x + lebar, y);
        glVertex2f(x + lebar, y + tinggi);
        glVertex2f(x, y + tinggi);
    glEnd();

    glColor3f(0.8f, 0.9f, 1.0f);
    for (float i = x + 10; i < x + lebar - 10; i += 25) {
        for (float j = y + 15; j < y + tinggi - 10; j += 30) {
            glBegin(GL_POLYGON);
                glVertex2f(i, j);
                glVertex2f(i + 12, j);
                glVertex2f(i + 12, j + 18);
                glVertex2f(i, j + 18);
            glEnd();
        }
    }
}

void jalan() {
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(1000, 0);
        glVertex2f(1000, 180);
        glVertex2f(0, 180);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i = 0; i < 1000; i += 80) {
        glBegin(GL_POLYGON);
            glVertex2f(i + 10, 85);
            glVertex2f(i + 50, 85);
            glVertex2f(i + 50, 95);
            glVertex2f(i + 10, 95);
        glEnd();
    }
}

void rumput() {
    glColor3f(0.2f, 0.8f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 180);
        glVertex2f(1000, 180);
        glVertex2f(1000, 350);
        glVertex2f(0, 350);
    glEnd();
}

void mobil(float x, float y, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
        glVertex2f(x, y);
        glVertex2f(x + 120, y);
        glVertex2f(x + 120, y + 35);
        glVertex2f(x, y + 35);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(x + 20, y + 35);
        glVertex2f(x + 45, y + 65);
        glVertex2f(x + 90, y + 65);
        glVertex2f(x + 105, y + 35);
    glEnd();

    glColor3f(0.7f, 0.9f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(x + 48, y + 38);
        glVertex2f(x + 58, y + 58);
        glVertex2f(x + 72, y + 58);
        glVertex2f(x + 72, y + 38);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(x + 75, y + 38);
        glVertex2f(x + 78, y + 58);
        glVertex2f(x + 90, y + 58);
        glVertex2f(x + 98, y + 38);
    glEnd();

    glColor3f(0.1f, 0.1f, 0.1f);
    lingkaran(x + 25, y, 14);
    lingkaran(x + 95, y, 14);

    glColor3f(0.7f, 0.7f, 0.7f);
    lingkaran(x + 25, y, 6);
    lingkaran(x + 95, y, 6);
}

void latarBelakang() {
    glColor3f(0.53f, 0.81f, 0.98f);
    glBegin(GL_POLYGON);
        glVertex2f(0, 350);
        glVertex2f(1000, 350);
        glVertex2f(1000, 700);
        glVertex2f(0, 700);
    glEnd();

    matahari(850, 600);
    awan(120, 600);
    awan(280, 560);
    awan(600, 620);

    gedung(60, 350, 110, 220);
    gedung(180, 350, 90, 200);
    gedung(750, 350, 120, 250);
    gedung(880, 350, 90, 190);

    rumah(350, 350);
    rumah(510, 350);

    pohon(300, 320);
    pohon(470, 320);
    pohon(650, 320);
    pohon(720, 320);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    latarBelakang();
    rumput();
    jalan();

    mobil(mobil1, 45, 1.0f, 0.0f, 0.0f);
    mobil(mobil2, 115, 0.0f, 0.0f, 1.0f);
    mobil(mobil3, 45, 1.0f, 0.5f, 0.0f);

    glFlush();
}

void init() {
    glClearColor(0.6f, 0.9f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 700);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 700);
    glutInitWindowPosition(100, 50);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Mobil");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}