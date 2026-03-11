#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

float rotasi = 0.0f;

void Lingkaran(void)
{
GLfloat PI = 3.14;
float radius = 0.08;
glColor4f(0.8f, 0.9f, 1.0f, 0.6f);
glBegin(GL_TRIANGLE_FAN);
GLint circle_points = 100;
for (int i = 0; i < circle_points; i++) {
float angle = 2 * PI * i / circle_points;
glVertex2f(cos(angle)*radius, sin(angle)*radius);
}
glEnd();
}

void daun(void) {
glLineWidth(4.0f);
glBegin(GL_LINES);
glColor4f(1.0f, 1.0f, 1.0f, 0.7f);
glVertex3f(0.0, 0.0, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(1.0, 1.0, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
glVertex3f(0.133, 0.133, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.53, 0.192, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.5f);
glVertex3f(0.133, 0.133, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.2, 0.5, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.4f);
glVertex3f(0.416, 0.416, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.6844, 0.4376, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.4f);
glVertex3f(0.416, 0.416, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.438, 0.66, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.3f);
glVertex3f(0.702, 0.702, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.887, 0.776, 0.0);

glColor4f(1.0f, 1.0f, 1.0f, 0.3f);
glVertex3f(0.702, 0.702, 0.0);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex3f(0.763, 0.892, 0.0);
glEnd();

glFlush();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glRotatef(rotasi, 0.0f, 0.0f, 1.0f);
	Lingkaran();
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glRotated(45.0, 0.0, 0.0, 1.0);
	daun();
	glutSwapBuffers();
}

void update(int value) {
    rotasi += 0.5f; 
    if (rotasi > 360) rotasi -= 360;
    glutPostRedisplay(); 
    glutTimerFunc(16, update, 0);
}

int main(int argc, char* argv[]){
glutInit(&argc, argv);
glutInitWindowSize (640,640);
glutInitDisplayMode (GLUT_DOUBLE |GLUT_RGBA); 
glutCreateWindow("Snowflake");
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
glutDisplayFunc (display);
glClearColor(0.01f, 0.01f, 0.05f, 1.0f);
glutTimerFunc(0, update, 0);
glutMainLoop();
return 0;
}
