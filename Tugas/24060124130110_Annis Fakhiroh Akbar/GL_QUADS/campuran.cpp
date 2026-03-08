#include <GL/glut.h> 

void campuran(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.00, 1.00, 0.0);
    glVertex3f(3.00, 1.00, 0.0);
    glVertex3f(2.00, -1.00, 0.0);
    glVertex3f(-1.00, -1.00, 0.0);
    
    glVertex3f(-3.00, 2.00, 0.0);
    glVertex3f(-2.00, 2.00, 0.0);
    glVertex3f(-2.00, 1.00, 0.0);
    glVertex3f(-3.00, 1.00, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Campuran");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
    glutDisplayFunc(campuran);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
