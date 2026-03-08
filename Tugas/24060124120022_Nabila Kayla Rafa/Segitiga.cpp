#include <GL/glut.h> 

void Segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);    
    glBegin(GL_TRIANGLES);
    glColor3f(0.94f, 0.37f, 0.46f);
    glVertex3f(-0.30, -0.30, 0.00);
    glColor3f(1.00f, 0.81f, 0.31f);
    glVertex3f(0.30, -0.30, 0.00);
    glColor3f(0.27f, 0.54f, 0.45f);
    glVertex3f(0.00, 0.30, 0.00);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Segitiga");
    glutDisplayFunc(Segitiga);
    glClearColor(0.90f, 0.88f, 0.85f, 1.00f);
    glutMainLoop();
    return 0;
}
