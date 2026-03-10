/*
 * Nama  : Agil Yudis Wibawa
 * NIM   : 24060124120045
 */
#include <GL/glut.h> 

void point(void) { 
	glClear (GL_COLOR_BUFFER_BIT);
	glPointSize(10.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f( 0.0f, 0.8f, 0.9f);
	glEnd(); 
	glFlush();

} 

void Segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.10, -0.10, 0.00);
	
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.10, -0.10, 0.00);
    
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.00, 0.10, 0.00);
    
    glEnd();
    glFlush();
}

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.5, 0.5, 0.5, -0.5);
    glFlush();
}

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) { 

	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Titik");
	glutDisplayFunc (Garis);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
	glutMainLoop();
	return 0;
}
