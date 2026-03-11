#include <GL/glut.h>
void garis(){ 
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,1.0f); 
	glVertex3f(0.00, 1.00, 0.0);
	glVertex3f(0.00, -1.00, 0.0);
	glEnd();
}
void jendela(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	garis();
	glFlush();
}
int main(int argc, char * argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(480,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Garis"); //tulisan atas window
	glutDisplayFunc(jendela); //panggil
	glutMainLoop();
	return 0;
}
