#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // ======================
    // Tutup (kotak hitam)
    // ======================
    glColor3f(0,0,0);
    glRectf(-0.05,0.65,0.05,0.80);

    // ======================
    // Leher (persegi panjang merah)
    // ======================
    glColor3f(1,0,0);
    glRectf(-0.02,0.40,0.02,0.65);

    // ======================
    // Trapesium terbalik (biru)
    // ======================
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
        glVertex2f(-0.12,0.40);
        glVertex2f(0.12,0.40);
        glVertex2f(0.05,0.20);
        glVertex2f(-0.05,0.20);
    glEnd();

    // ======================
    // Kotak tengah (biru)
    // ======================
    glRectf(-0.05,0.00,0.05,0.20);

    // ======================
    // Trapesium bawah (biru)
    // ======================
    glBegin(GL_POLYGON);
        glVertex2f(-0.05,0.00);
        glVertex2f(0.05,0.00);
        glVertex2f(0.12,-0.25);
        glVertex2f(-0.12,-0.25);
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1,1,1,1); // background putih
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutCreateWindow("Objek 2D dari 5 Bentuk");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
