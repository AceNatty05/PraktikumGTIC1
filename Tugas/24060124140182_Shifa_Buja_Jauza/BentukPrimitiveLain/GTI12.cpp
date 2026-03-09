#include <GL/glut.h>

void LineStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f); 
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.5f, 0.5f);
    glEnd();
    glFlush();
}

void LineLoop(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.5f, 0.5f);
    glEnd();
    glFlush();
}

void TriangleFan(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.0f, 0.0f);   
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.2f, 0.5f);
        glVertex2f(-0.2f, 0.5f);
        glVertex2f(-0.5f, 0.2f);
    glEnd();
    glFlush();
}

void TriangleStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.5f, 0.2f);
        glVertex2f(-0.5f, -0.2f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(0.0f, -0.2f);
        glVertex2f(0.5f, 0.2f);
    glEnd();
    glFlush();
}

void Quads(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.5f, 0.5f);
    glEnd();
    glFlush();
}

void QuadStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUAD_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.6f, -0.3f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.6f, -0.3f);
    glEnd();
    glFlush();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("Tugas 1 GTI");
    glutDisplayFunc(TriangleStrip);

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 

    glutMainLoop();
    return 0;
}