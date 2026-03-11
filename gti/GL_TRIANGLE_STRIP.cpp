#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1,0,1);
        glVertex2f(-0.2,0.3);
        glVertex2f(-0.1,0.1);
        glVertex2f(0.0,0.3);
        glVertex2f(0.1,0.1);
        glVertex2f(0.2,0.3);
    glEnd();

    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitWindowSize(600,400);
    glutCreateWindow("GL TRIANGLE STRIP");

    glClearColor(1,1,1,1);
    glutDisplayFunc(display);
    glutMainLoop();
}
