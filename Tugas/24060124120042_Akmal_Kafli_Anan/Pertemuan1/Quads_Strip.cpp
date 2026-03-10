#include <GL/glut.h> 

void KotakStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(4.0f);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(1.0f, 0.0f, 0.0f); 
        glVertex3f(-0.8f, 0.3f, 0.0f);     
        glVertex3f(-0.7f, -0.4f, 0.0f);   

        glColor3f(1.0f, 1.0f, 0.0f); 
        glVertex3f(-0.3f, 0.7f, 0.0f);    
        glVertex3f(-0.2f, -0.1f, 0.0f);   

        glColor3f(0.0f, 1.0f, 1.0f); 
        glVertex3f(0.3f, 0.2f, 0.0f);      
        glVertex3f(0.2f, -0.6f, 0.0f);     

        glColor3f(1.0f, 0.0f, 1.0f); 
        glVertex3f(0.8f, 0.5f, 0.0f);      
        glVertex3f(0.9f, -0.2f, 0.0f);     
    glEnd();
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Quads_Strip");
    glutDisplayFunc(KotakStrip);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}