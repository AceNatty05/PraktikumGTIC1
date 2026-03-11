#include <GL/glut.h>

void linestrip(){
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(0.00,0.00);
	glVertex2f(0.05,0.10);
	glVertex2f(0.10,0.00);
	glEnd();
}
void trianglefan(){
	float u,v,i,j,k;
	u = 0.00;
	v = 0.00;
	i = 129.0/255.0;
	j = 166.0/255.0;
	k = 52.0/255.0;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f + i,0.0f + j,0.0f + k);
	glVertex2f(0.00+u,-0.50+v);
	glVertex2f(0.30+u,0.05+v);
	glVertex2f(0.00+u,0.10+v);
	glVertex2f(-0.30+u,0.05+v);
	glEnd();
}
void trianglestrip(){
	float u,v;
	u = -0.10;
	v = 0.10;
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(0.00+u,0.00+v);
	glVertex2f(0.05+u,0.10+v);
	glVertex2f(0.10+u,0.00+v);
	glVertex2f(0.05+u,-0.10+v);
	glEnd();
}

void quads(){
	float u,v;
	u = -0.30;
	v = 0.00;
	glBegin(GL_QUADS);
	glColor3f(1.0f,0.0f,1.0f);
	glVertex2f(0.00+u,0.00+v);
	glVertex2f(0.00+u,0.10+v);
	glVertex2f(0.10+u,0.00+v);
	glVertex2f(0.10+u,0.10+v);
	glEnd();
}
void quads2(){
	float u,v;
	u = 0.25;
	v = 0.00;
	glBegin(GL_QUADS);
	glColor3f(0.0f,1.0f,1.0f);
	glVertex2f(0.00+u,0.00+v);
	glVertex2f(0.00+u,0.10+v);
	glVertex2f(0.10+u,0.00+v);
	glVertex2f(0.10+u,0.10+v);
	glEnd();
}
void quadstrip(){
	float u,v;
	u = -0.30;
	v = -0.30;
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-0.05+u,-1.00+v);
	glVertex2f(-0.05+u,0.05+v);
	glVertex2f(0.70+u,-1.00+v);
	glVertex2f(0.70+u,0.05+v);
	
	glVertex2f(0.70+u,0.05+v);
	glVertex2f(0.65+u,0.05+v);
	glVertex2f(0.70+u,1.50+v);
	glVertex2f(0.65+u,1.50+v);
	
	glVertex2f(0.65+u,1.50+v);
	glVertex2f(0.65+u,0.65+v);
	glVertex2f(-0.05+u,1.50+v);
	glVertex2f(-0.05+u,0.65+v);
	
	glVertex2f(-0.05+u,0.65+v);
	glVertex2f(0.00+u,0.65+v);
	glVertex2f(-0.05+u,0.05+v);
	glVertex2f(0.00+u,0.05+v);
	glEnd();
}
void quadstrip2(){
	float u,v,i,j,k;
	u = -0.30;
	v = 0.30;
	i = 95.0/255.0;
	j = 150.0/255.0;
	k = 234.0/255.0;
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f + i,0.0f + j,0.0f + k);
	glVertex2f(-0.05+u,-1.00+v);
	glVertex2f(-0.05+u,0.05+v);
	glVertex2f(0.70+u,-1.00+v);
	glVertex2f(0.70+u,0.05+v);
	glEnd();
}
void jendela(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	quadstrip2();
	trianglefan();
	trianglestrip();
	quads();
	quads2();
	quadstrip();
	linestrip();
	glFlush();
}
int main(int argc, char * argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(480,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Program"); 
	glutDisplayFunc(jendela); 
	glutMainLoop();
	return 0;
}
