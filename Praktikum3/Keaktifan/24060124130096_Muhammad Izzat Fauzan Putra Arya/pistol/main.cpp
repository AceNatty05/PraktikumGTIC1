#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0;

void drawSegment(float x, float y, float z) {
    glPushMatrix();
    glScalef(x, y, z);
    glutWireCube(1.0);
    glPopMatrix();
}

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    
    glTranslatef(0.0, 0.0, -12.0);
    
    glPushMatrix();
        
        glTranslatef(-2.0, 0.0, 0.0);           
        glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
        glTranslatef(2.0, 0.0, 0.0);            
        
        glPushMatrix();
            drawSegment(4.0, 1.0, 0.8);
        glPopMatrix();

        glTranslatef(2.0, 0.0, 0.0);            
        glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
        glTranslatef(2.0, 0.0, 0.0);            
        
        glPushMatrix();
            drawSegment(4.0, 0.9, 0.7);
        glPopMatrix();

        glTranslatef(2.0, 0.0, 0.0);            
        glTranslatef(0.6, 0.0, 0.0);            
        
        glPushMatrix();
            drawSegment(1.2, 1.4, 0.5); 

            glPushMatrix();
                glTranslatef(-0.4, 0.7, 0.0);
                glRotatef(45.0, 0.0, 0.0, 1.0);
                glTranslatef(0.3, 0.0, 0.0);
                drawSegment(0.6, 0.3, 0.3);
                
                glTranslatef(0.3, 0.0, 0.0);  
                glTranslatef(0.2, 0.0, 0.0);  
                drawSegment(0.4, 0.3, 0.3);
            glPopMatrix();

            float lengths[4] = {1.2f, 1.3f, 0.8f, 0.6f}; 
            float yPos = 0.45f;

            for (int i = 0; i < 4; i++) {
                glPushMatrix();
                    if (i < 2) { 
                        glTranslatef(0.8, yPos, 0.0); 
                        drawSegment(lengths[i], 0.25, 0.3); 
                    } else {
                        glTranslatef(0.3, yPos, 0.25); 
                        drawSegment(lengths[i], 0.25, 0.3); 
                    }
                glPopMatrix();
                yPos -= 0.3f; 
            }
        glPopMatrix(); 

    glPopMatrix(); 
    
    glutSwapBuffers();
}

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 30.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    if (key == 27) exit(0); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Pistol");
    init();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
