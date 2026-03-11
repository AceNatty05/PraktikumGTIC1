#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void Snow(void) {
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(0.00, 0.00, 0.0);
        glVertex3f(0.00, 0.80, 0.0);

        glVertex3f(0.00, 0.40, 0.0);
        glVertex3f(0.15, 0.55, 0.0); 
        
        glVertex3f(0.00, 0.40, 0.0); 
        glVertex3f(-0.15, 0.55, 0.0); 

        glVertex3f(0.00, 0.60, 0.0);
        glVertex3f(0.10, 0.70, 0.0);
        
        glVertex3f(0.00, 0.60, 0.0);
        glVertex3f(-0.10, 0.70, 0.0);
    glEnd();
    glFlush();
}

void RenderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    float sudutRotasi = 360.0f / (float)8;
    glPushMatrix(); 
        for (int i = 1; i <= 8; i++) {
            glPushMatrix(); 
                glRotatef(i * sudutRotasi, 0.0f, 0.0f, 1.0f);
                Snow();
            glPopMatrix(); 
        }
    glPopMatrix();

    glFlush(); 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Snowflake");
    glutDisplayFunc(RenderScene);    
    glClearColor(0.0f, 0.1f, 0.3f, 1.0f); 
    glutMainLoop();
    return 0;
}

