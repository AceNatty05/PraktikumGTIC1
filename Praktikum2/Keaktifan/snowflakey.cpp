#include <GL/glut.h>
#include <stdlib.h>

void createFlakePart(GLfloat rotate) {
	glPushMatrix();
	glRotated(rotate, 0.0, 0.0, 1.0);
	glColor3f(0.2f, 0.5f, 1.0f);
	glBegin(GL_QUADS);
    	glVertex3f(0.5f, 0.7f, 0.0f);
    	glVertex3f(0.165f, 0.5f, 0.0f);
	    glVertex3f(0.0f, 0.85f, 0.0f);
    	glVertex3f(0.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();
}

void createCenter(GLfloat rad, GLfloat rotate) {
	glPushMatrix();
	glRotated(rotate, 0.0, 0.0, 1.0);
	glColor3f(0.4f, 0.7f, 1.0f);
	glLineWidth(5.0f);
	glBegin(GL_QUADS);
		glVertex3f(0.0f, rad, 0.0f);
		glVertex3f(rad, 0.0f, 0.0f);
		glVertex3f(0.0, -rad, 0.0f);
		glVertex3f(-rad, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();
}

void Snowflake(void) {
	glClear(GL_COLOR_BUFFER_BIT);
//	createFlakePart(0.0f);
	for (int i = 0; i < 9; i++) {
		createFlakePart(i * 40.0);
	}
	for (int i = 0; i < 6; i++) {
		createCenter(0.2, i * 60.0);
	}
	glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(480, 480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    
    glutCreateWindow("remahan salju");
    glClearColor(1, 1, 1, 1);
    glutDisplayFunc(Snowflake);

    glutMainLoop();

    return EXIT_SUCCESS;
}

