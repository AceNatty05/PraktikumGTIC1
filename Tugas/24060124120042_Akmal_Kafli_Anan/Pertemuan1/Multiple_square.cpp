#include <GL/glut.h>

void wall(void) {
    glColor3f(1.0f, 0.647f, 0.0f);
    glRectf(-0.5f, -0.9f, 0.5f, 0.2f);
    glFlush();
}

void door(void) {
    glColor3f(0.647f, 0.165f, 0.165f);
    glRectf(-0.1f, -0.9f, 0.1f, -0.4f);
    glFlush();
}

void window(void) {
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.2f, 0.0f, -0.4f, -0.3f);
    glFlush();
}

void roof(float a, float b, float c, float d) {
    glColor3f(0.6f, 0.2f, 0.0f);
    glRectf(a, b, c, d);
    glFlush();
}

void terain(void) {
    glColor3f(0.36f, 0.66f, 0.02f);
    glRectf(-1.0f, -0.9f, 1.0f, -1.0f);
    glFlush();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    wall();
    door();
    window();
    terain();

    roof(-0.5f, 0.5f, -0.3f, 0.3f);
    roof(-0.3f, 0.5f, -0.1f, 0.3f);
    roof(-0.1f, 0.5f, 0.1f, 0.3f);
    roof(0.1f, 0.5f, 0.3f, 0.3f);
    roof(0.3f, 0.5f, 0.5f, 0.3f);
    roof(-0.3f, 0.7f, -0.1f, 0.5f);
    roof(-0.3f, 0.7f, -0.1f, 0.5f);
    roof(-0.1f, 0.7f, 0.1f, 0.5f);
    roof(0.1f, 0.7f, 0.3f, 0.5f);
    roof(-0.1f, 0.9f, 0.1f, 0.7f);
    roof(-0.7f, 0.3f, 0.7f, 0.2f);
    roof(-0.4f, 0.6f, -0.2f, 0.5f);
    roof(-0.6f, 0.4f, -0.5f, 0.3f);
    roof(-0.2f, 0.7f, -0.1f, 0.8f);
    roof(0.4f, 0.6f, 0.2f, 0.5f);
    roof(0.6f, 0.4f, 0.5f, 0.3f);
    roof(0.2f, 0.7f, 0.1f, 0.8f);
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Sweet Home");
    glutDisplayFunc(display);
    glClearColor(0.53f, 0.81f, 0.92f, 1.0f);
    glutMainLoop();
    return 0;
}