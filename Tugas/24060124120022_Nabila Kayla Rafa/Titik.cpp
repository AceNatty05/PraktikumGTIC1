#include <GL/glut.h> 

void Titik(void) { 
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10.00f);
	glBegin(GL_POINTS);
	glColor3f(0.00f, 0.00f, 0.00f);
	glVertex3f(0.00f, 0.80f, 0.90f);
	glEnd(); 
	glFlush();
} 

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Titik");
    glutDisplayFunc(Titik);
    glClearColor(1.00f, 1.00f, 1.00f, 1.00f);
    glutMainLoop();
    return 0;
}
