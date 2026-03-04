# include <GL/glut.h>

void Kubus2D(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.7f, 0.5f, 0.2f);
	glRectf(0.5, -0.1, 0.8, -0.2);
	glRectf(0.75, 0.2, 0.8, -0.1);
	
	glColor3f(0.6f, 0.45f, 0.1f);
	glRectf(0.5, -0.2, 0.55, -0.4);
	glRectf(0.75, -0.2, 0.8, -0.4);
	
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Kubus 2D");
	glutDisplayFunc(Kubus2D);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
