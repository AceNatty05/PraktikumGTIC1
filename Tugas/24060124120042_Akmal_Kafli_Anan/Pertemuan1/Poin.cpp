#include <GL/glut.h> 

void point(void) { 
	glClear (GL_COLOR_BUFFER_BIT);
	glPointSize(10.0f);
	glBegin(GL_POINTS);
		glColor3f(0.0f, 0.0f, 0.0f);  // setting warna titik(R, G, B)
		glVertex3f( 0.0f, 0.0f, 0.0f);     // Koordinat titiknya (x,y,z)
	glEnd(); 
	glFlush();

} 

int main(int argc, char* argv[]) { 

	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Titik");
	glutDisplayFunc (point);
	glClearColor(1.0f, 0.75f, 0.8f, 1.0f);  
	glutMainLoop();
	return 0;
}
