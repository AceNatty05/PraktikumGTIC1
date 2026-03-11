#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

// TRANSLASI
void SegiEmpat(void) {
glClear(GL_COLOR_BUFFER_BIT);

// SE 1
glTranslatef(-0.50, 0.50, 0.0);
glColor3f(1.0f, 0.0f, 0.0f);
glRectf(-0.18, 0.18, 0.18, -0.18);

// segiEMpat 2
glRectf(0.0, 0.0, 1.0, 1.0);

glFlush();
}

void Segitiga(void) {
glClear(GL_COLOR_BUFFER_BIT);

glScalef(2.0, 0.5, 0.0);
glRotated(90.0, 0.0, 0.0, 1.0);
glBegin(GL_TRIANGLES);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex3f(0.0, 0.0, 0.0);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex3f(0.15, 0.0, 0.00);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex3f(0.0, 0.15, 0.00);
glEnd();

glFlush();
}

void RenderScene(void)
{
glClear(GL_COLOR_BUFFER_BIT);

//// Bagian 1: Menggambar Garis
//glPushMatrix();
//glLineWidth(2.0f);
//glTranslatef(-0.50, 0.50, 0.0);
//glBegin(GL_LINES);
//glColor3f(1.0f, 1.0f, 1.0f);
//glVertex3f(0.00, 0.20, 0.0);
//glVertex3f(0.00, -0.20, 0.0);
//glEnd();
//glPopMatrix();
//
//// Bagian 2: Menggambar Titik dengan Translasi
//glPushMatrix();
//glPointSize(5.0f);
//glTranslatef(0.35, 0.35, 0.0);
//glBegin(GL_POINTS);
//glColor3f(1.0f, 1.0f, 1.0f);
//glVertex3f(0.25, 0.25, 0.0);
//glEnd();
//glPopMatrix();

//// 3. Menggambar Persegi Panjang (Triangle Strip) berwarna-warni
//glPushMatrix();
//glTranslatef(0.50, 0.50, 0.00);
//glBegin(GL_TRIANGLE_STRIP);
//glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.00); 
//glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.15, -0.05, 0.00);
//glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-0.05, 0.05, 0.00);
//glColor3f(1.0f, 1.0f, 0.0f); glVertex3f(0.15, 0.05, 0.00);
//glEnd();
//glPopMatrix();

// 4. Menggambar Lingkaran di Tengah

GLfloat PI = 3.14;
glPushMatrix();
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
GLint circle_points = 100;
for (int i = 0; i < circle_points; i++) {
float angle = 2 * PI * i / circle_points;
glVertex2f(cos(angle), sin(angle));
}
glEnd();
glPopMatrix();

glFlush();
}

void Snowflake(){
	glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.25, 0.0, 0.0);
		glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0, 0.25, 0.00);
		glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.8, 0.8, 0.00);
glEnd();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	Snowflake();
	
	glRotated(72.0, 0.0, 0.0, 1.0);
	Snowflake();
	
	glRotated(180.0, 0.0, 0.0, 1.0);
	Snowflake();
	
	glRotated(270.0, 0.0, 0.0, 1.0);
	Snowflake();
	
	glFlush();
}

int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitWindowSize(600, 600);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);

glutCreateWindow("Transformasi");
glutDisplayFunc(display);

glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
glutMainLoop();
return 0;
}
