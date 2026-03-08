#include <GL/glut.h> 

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.00f);
    glBegin(GL_LINES);
    glColor3f(0.00f, 0.00f, 0.00f);
    glVertex3f(0.00, 0.50, 0.00);
    glVertex3f(0.00, -0.50, 0.00);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Garis");
    glutDisplayFunc(Garis);
    glClearColor(1.00f, 1.00f, 1.00f, 1.00f);
    glutMainLoop();
    return 0;
}
