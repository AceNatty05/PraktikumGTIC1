#include <GL/glut.h>
#include <math.h>

void JaringLabaLaba(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);
    
    int jumlahSisi = 12; 
    float PI = 3.14159265f;

    for (float r = 0.2f; r <= 0.8f; r += 0.2f) {
        glBegin(GL_LINE_LOOP); 
        for (int i = 0; i < jumlahSisi; i++) {
            float angle = i * 2 * PI / jumlahSisi;
            glVertex2f(r * cos(angle), r * sin(angle));
        }
        glEnd();
    }

    
    for (int i = 0; i < jumlahSisi; i++) {
        glPushMatrix(); 
            glRotated(i * (360.0 / jumlahSisi), 0.0, 0.0, 1.0); 
            glBegin(GL_LINES);
                glVertex2f(0.0f, 0.0f);
                glVertex2f(0.8f, 0.0f); 
            glEnd();
        glPopMatrix(); 
    }

    glFlush(); 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv); 
    glutInitWindowSize(640, 480); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); 
    glutCreateWindow(" Jaring Laba-Laba"); 
    
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
    
    glutDisplayFunc(JaringLabaLaba); 
    glutMainLoop(); 
    return 0;
}