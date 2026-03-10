#include <GL/glut.h> 

void GarisLoop(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4.0f);
    glColor3f(1.0, 0.75, 0.8);
    glBegin(GL_LINE_LOOP);
        glVertex3f(-0.4f, 0.1f, 0.0f);
        glVertex3f(-0.2f, 0.3f, 0.0f);
        glVertex3f(0.0f, 0.1f, 0.0f);
        glVertex3f(0.2f, 0.3f, 0.0f);
        glVertex3f(0.4f, 0.1f, 0.0f);
        glVertex3f(0.0f, -0.3f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Garis_Loop");
    glutDisplayFunc(GarisLoop);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}