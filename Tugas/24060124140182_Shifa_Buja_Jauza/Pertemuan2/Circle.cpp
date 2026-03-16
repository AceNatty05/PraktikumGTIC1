#include <GL/glut.h>
#include <math.h> 

void Lingkaran(void) {
    glClear(GL_COLOR_BUFFER_BIT); 

    glPushMatrix(); 
    	glLineWidth(5.0f);
        
        glColor3f(1.0f, 1.0f, 1.0f); 
        glBegin(GL_LINE_LOOP); 
            
            int circle_points = 100; 
            float PI = 3.14159265f;
            
            for (int i = 0; i < circle_points; i++) {
               
                float angle = 2 * PI * i / circle_points; 
                
                glVertex2f(0.5 * cos(angle), 0.5 * sin(angle)); 
            }
            
        glEnd();
        
    glPopMatrix(); 
    
    glFlush(); 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 1 GTI - Lingkaran");
    
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); 
    
    glutDisplayFunc(Lingkaran);
    glutMainLoop();
    return 0;
}