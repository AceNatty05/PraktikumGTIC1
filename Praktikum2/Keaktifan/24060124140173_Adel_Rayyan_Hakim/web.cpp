#include <GL/glut.h>
void garis(){
	
}
void web() {
	int i;
	for(i=0;i<8;i++){
		glPushMatrix();
		glRotated(0.0 + 45.0*i, 0.0, 0.0, 1.0);
		glBegin(GL_LINE_STRIP);
		
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(0.00, 0.00);
		glVertex2f(0.15, 0.00);
		glVertex2f(0.10,0.10);
		glEnd();
		
		glPopMatrix();
	}
}
void jendela(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	web();
	glPushMatrix();
	glScalef(2.0, 2.0, 2.0);
	web();
	glPopMatrix();
	glPushMatrix();
	glScalef(3.0, 3.0, 3.0);
	web();
	glPopMatrix();
	glFlush();
}
int main(int argc, char * argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(480,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("web"); 
	glutDisplayFunc(jendela); 
	glutMainLoop();
	return 0;
}

