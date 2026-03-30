#include <GLUT/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);   // Mulai gambar segiempat

        glColor3f(1.0f, 0.0f, 0.0f);  // merah
        glVertex2f(-0.3f, -1.3f);

        glColor3f(0.0f, 1.0f, 0.0f);  // hijau
        glVertex2f(0.3f, -1.3f);

        glColor3f(0.0f, 0.0f, 1.0f);  // biru
        glVertex2f(0.3f, -0.3f);

        glColor3f(1.0f, 1.0f, 0.0f);  // kuning
        glVertex2f(-0.3f, -0.3f);

    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Segi Empat");

    glClearColor(0.0f, 0.0f, 0.3f, 1.0f);

    glutDisplayFunc(SegiEmpat);
    glutMainLoop();
    return 0;
}