#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(0.2f, 0.8f);
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.5f, -0.1f); 
    glVertex2f(-0.5f, 0.3f);
    glEnd();
   
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, -0.1f);  
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.2f, -0.2f);
    glEnd(); 

    glBegin(GL_LINE_LOOP); 
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.4f, -0.6f); 
    glVertex2f(0.4f, -0.2f); 
    glEnd(); 


    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.4f, -0.2f);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(-0.8f, -0.2f);

    glEnd();
    

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Tugas");
    glutInitWindowSize(400, 400);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
