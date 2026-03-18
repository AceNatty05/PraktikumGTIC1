#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES); // Atas kanan
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.1f, 0.4f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.1f, 0.4f);
    glEnd();

    glBegin(GL_LINE_STRIP); // Bawah tengah
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_LINE_LOOP); // Bawah kanan
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.4f, -0.6f); 
    glVertex2f(0.4f, -0.2f); 
    glEnd(); 
    
    glBegin(GL_TRIANGLE_FAN); // Bawah kiri
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP); // Tengah kanan
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, -0.1f);
    glEnd();

    glBegin(GL_QUADS); // Tengah kiri
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.5f, -0.1f); 
    glVertex2f(-0.5f, 0.3f);
    glEnd();

    glBegin(GL_QUAD_STRIP); // Atas
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.8f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.5f, 0.8f); 
    glVertex2f(-0.5f, 0.4f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Tugas 1 dan 2");
    glutInitWindowSize(400, 400);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
