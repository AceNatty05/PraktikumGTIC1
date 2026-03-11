#include <gl/glut.h>

void snowflake() {
    glBegin(GL_LINES);
        glVertex3f(0.0, 0.0, 0.0); 
        glVertex3f(0.0, 5.0, 0.0);
    glEnd();

    glBegin(GL_LINES);
        glVertex3f(0.0, 4.5, 0.0); 
		glVertex3f(1.0, 5.5, 0.0);
        glVertex3f(0.0, 4.5, 0.0); 
		glVertex3f(-1.0, 5.5, 0.0);
    glEnd();

    glBegin(GL_LINES);
        glVertex3f(0.0, 3.0, 0.0); 
		glVertex3f(1.5, 4.0, 0.0);
        glVertex3f(0.0, 3.0, 0.0); 
		glVertex3f(-1.5, 4.0, 0.0);
    glEnd();
    
    glBegin(GL_LINES);
        glVertex3f(0.0, 1.5, 0.0); 
		glVertex3f(0.8, 2.2, 0.0);
        glVertex3f(0.0, 1.5, 0.0); 
		glVertex3f(-0.8, 2.2, 0.0);
    glEnd();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.5f, 0.8f);
    glScalef(0.1, 0.1, 1.0); 

    snowflake();

    glRotated(60.0, 0.0, 0.0, 1.0);
    snowflake();

    glRotated(60.0, 0.0, 0.0, 1.0);
    snowflake();

    glRotated(60.0, 0.0, 0.0, 1.0);
    snowflake();

    glRotated(60.0, 0.0, 0.0, 1.0);
    snowflake();

    glRotated(60.0, 0.0, 0.0, 1.0);
    snowflake();

    glFlush();
}


int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA); 
	glutCreateWindow("Snowflake");
	glutDisplayFunc (display);
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
