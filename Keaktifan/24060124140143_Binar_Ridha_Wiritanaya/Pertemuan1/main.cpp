#include <GL/glut.h>

void Bunga(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.8f, 0.0f); 
    glRectf(-0.05, -0.6, 0.05, -0.4); 
    glRectf(-0.05, -0.4, 0.05, -0.2); 

    glColor3f(1.0f, 0.4f, 0.7f); 
    glRectf(-0.1,  0.2,  0.1,  0.4); 
    glRectf(-0.1, -0.2,  0.1,  0.0); 
    glRectf(-0.3,  0.0, -0.1,  0.2);
    glRectf( 0.1,  0.0,  0.3,  0.2);

    glColor3f(1.0f, 1.0f, 0.0f); 
    glRectf(-0.1,  0.0,  0.1,  0.2); 

    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Bunga");
    glutDisplayFunc(Bunga);
    glClearColor(0.6f, 0.9f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}

