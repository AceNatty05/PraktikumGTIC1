#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

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

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Implementasi GL_LINES");

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

