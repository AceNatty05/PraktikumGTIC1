#include <GL/glut.h> 

void point(void) { 
//	glClear (GL_COLOR_BUFFER_BIT);
	glPointSize(10.0f);
	glBegin(GL_POINTS);
	lor3f(1.0f, 0.0f, 0.0f);
	glVertex3f( 0.0f, 0.8f, 0.9f);
	glEnd(); 
	glFlush();

} 

void Garis(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.00, 0.20, 0.0);
    glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glFlush();
}

void Segitiga(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.10, -0.10, 0.00);
	
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.10, -0.10, 0.00);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.00, 0.10, 0.00);
    
    glEnd();
    glFlush();glCo
}

void SegiEmpat(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glFlush();
}

void Trapesium(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.10, -0.10, 0.00);
	
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.10, -0.10, 0.00);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.05, 0.10, 0.00);
    
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.05, 0.10, 0.00);
	
    glEnd();
    glFlush();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	point();
	Garis();
	Segitiga();
	SegiEmpat();
	Trapesium();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Segi Empat");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
