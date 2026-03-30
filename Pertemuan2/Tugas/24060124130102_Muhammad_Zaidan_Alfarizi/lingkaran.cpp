#include <GLUT/glut.h>
#include <cmath>

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

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f);   // warna merah
    lingkaran(250, 250, 100);      // x, y, radius

    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Lingkaran");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}