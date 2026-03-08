#include <GL/glut.h> 

void point(void) { 

	glPointSize(10.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f( 0.0f, 0.8f, 0.9f);
	glEnd(); 
	glFlush();

} 


void Garis(void) {

    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(-0.50, 0.50, 0.0);
    glVertex3f(0.50, -0.50, 0.0);
    glEnd();
    glFlush();
}


void Segitiga(void) {

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.10, -0.10, 0.00);
	
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.10, -0.10, 0.00);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.00, 0.10, 0.00);
    
    glEnd();
    glFlush();
}


void SegiEmpat(void) {

    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glFlush();
}


void Trapesium(void){

	glBegin(GL_POLYGON);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(-0.15, -0.10, 0.00);
	
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(0.15, -0.10, 0.00);
	
	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.08, 0.10, 0.00);
	
	glColor3f(1.0f,1.0f,0.0f);
	glVertex3f(-0.08, 0.10, 0.00);
	
	glEnd();
	glFlush();
	
}

// Menampilkan semua
void display(){
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
    glutCreateWindow("Gabung");
    glutDisplayFunc(display);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}


