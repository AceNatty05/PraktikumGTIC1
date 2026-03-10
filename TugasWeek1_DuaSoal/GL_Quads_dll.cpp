#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.95f, 0.95f);
        glVertex2f(-0.7f,  0.7f);
        glVertex2f(-0.95f, 0.7f);
        glVertex2f(-0.7f,  0.55f);
        glVertex2f(-0.95f, 0.55f);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.15f, 0.95f);
        glVertex2f(-0.3f,  0.75f);
        glVertex2f(-0.2f,  0.55f);
        glVertex2f(-0.05f, 0.55f);
        glVertex2f(0.0f,   0.75f);
    glEnd();

    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.7f, 0.75f);   
        glVertex2f(0.5f, 0.55f);
        glVertex2f(0.6f, 0.95f);
        glVertex2f(0.8f, 0.95f);
        glVertex2f(0.9f, 0.75f);
        glVertex2f(0.85f, 0.55f);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.95f, -0.55f);
        glVertex2f(-0.85f, -0.3f);
        glVertex2f(-0.75f, -0.55f);
        glVertex2f(-0.65f, -0.3f);
        glVertex2f(-0.55f, -0.55f);
        glVertex2f(-0.45f, -0.3f);
    glEnd();

    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.25f, -0.3f);
        glVertex2f(-0.25f, -0.55f);
        glVertex2f(0.05f,  -0.55f);
        glVertex2f(0.05f,  -0.3f);
    glEnd();

    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(0.4f, -0.3f);
        glVertex2f(0.4f, -0.55f);
        glVertex2f(0.55f, -0.3f);
        glVertex2f(0.55f, -0.55f);
        glVertex2f(0.7f, -0.3f);
        glVertex2f(0.7f, -0.55f);
        glVertex2f(0.85f, -0.3f);
        glVertex2f(0.85f, -0.55f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("GL_LINE_STRIP, LINE_LOOP, TRIANGLE_FAN, TRIANGLE_STRIP, QUADS, QUAD_STRIP");

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
