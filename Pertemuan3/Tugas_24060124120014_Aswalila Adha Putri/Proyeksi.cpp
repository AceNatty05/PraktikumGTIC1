#include <GL/glut.h>  

// prosedur untuk menggambar poligon berwarna
void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f(-0.5, -0.5, -3.0);

        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0.5, -0.5, -3.0);

        glColor3f(0.0, 0.0, 1.0);
        glVertex3f(0.5, 0.5, -3.0);
    glEnd();

    glFlush();
}

// prosedur untuk proyeksi perspektif saat ukuran window berubah
void Reshape(int x, int y)
{
    if (y == 0 || x == 0) return;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0, (GLdouble)x / (GLdouble)y, 0.5, 20.0);

    glMatrixMode(GL_MODELVIEW);
    glViewport(0, 0, x, y);
}

// inisialisasi GLUT dan jalankan loop utama
int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Aswalila Adha Putri");

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glutDisplayFunc(Display);
    glutReshapeFunc(Reshape);
    glutMainLoop();
}
