#include <GLUT/glut.h>

void Segitiga() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.10f, -0.10f, 0.0f);

        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(0.10f, -0.10f, 0.0f);

        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, 0.10f, 0.0f);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640, 480);

    glutCreateWindow("Membuat Segitiga");  // ⚠️ WAJIB sebelum OpenGL config

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);   // ✅ PINDAHKAN KE SINI

    glutDisplayFunc(Segitiga);
    glutMainLoop();

    return 0;
}