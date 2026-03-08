#include <GL/glut.h> 

void Segiempat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.60f, 0.14f, 0.60f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Segiempat");
    glutDisplayFunc(Segiempat);
    glClearColor(0.94f, 0.91f, 0.91f, 1.00f);
    glutMainLoop();
    return 0;
}
