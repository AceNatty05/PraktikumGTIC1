#include <GL/glut.h> 

void Kotak(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4.0f);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.5f, 0.5f, 0.0f);
        glVertex3f(-0.5f, -0.5f, 0.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);
        glVertex3f(0.5f, 0.5f, 0.0f);
    glEnd();
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Quads");
    glutDisplayFunc(Kotak);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}