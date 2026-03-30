#include <GLUT/glut.h>

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.0f, 0.7f, 0.7f); 
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-0.8f,  0.3f);
        glVertex2f(-0.8f, -0.3f);

        glVertex2f(-0.4f,  0.5f);
        glVertex2f(-0.4f, -0.1f);

        glVertex2f( 0.0f,  0.3f);
        glVertex2f( 0.0f, -0.3f);

        glVertex2f( 0.4f,  0.5f);
        glVertex2f( 0.4f, -0.1f);

        glVertex2f( 0.8f,  0.3f);
        glVertex2f( 0.8f, -0.3f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(600, 400);
    glutCreateWindow("GL_QUAD_STRIP");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}