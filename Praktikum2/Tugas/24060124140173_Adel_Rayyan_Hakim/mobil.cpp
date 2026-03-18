#include <gl/glut.h>
#include <math.h>

void roda(float radius) {
    int i;
    int lineAmount = 50; 
    float twicePi = 2.0f * 3.14159265f;

    glColor3f(0.2f, 0.2f, 0.2f); 
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.0f, 0.0f); 
        for (i = 0; i <= lineAmount; i++) {
            glVertex2f(
                (radius * cos(i * twicePi / lineAmount)),
                (radius * sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
    glColor3f(0.5f, 0.5f, 0.5f); 
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.0f, 0.0f); 
        for (i = 0; i <= lineAmount; i++) {
            glVertex2f(
                (radius/2 * cos(i * twicePi / lineAmount)),
                (radius/2 * sin(i * twicePi / lineAmount))
            );
        }
    glEnd();
}

void bubble(float x, float y, float radius) {
    glBegin(GL_TRIANGLE_FAN);
        glColor4f(1.0f, 1.0f, 1.0f, 0.2f); 
        glVertex2f(x, y);
        for (int i = 0; i <= 50; i++) {
            float angle = i * 2.0f * 3.14159f / 50;
            glColor4f(0.5f, 0.8f, 1.0f, 0.6f); 
            glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
        }
    glEnd();
    
}

void gedungsigmaboi(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor4f(0.4f, 0.4f, 0.4f, 0.8f); 
    glBegin(GL_QUADS);
        glVertex2f(-0.10f, 0); glVertex2f(0.10f, 0); 
        glVertex2f(0.10f, 0.9f); glVertex2f(-0.10f, 0.9f);
    glEnd();
    
    glTranslatef(0.2f, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(-0.09f, 0);
		glVertex2f(0.05f, 0); 
        glVertex2f(0.05f, 0.7f);
		glVertex2f(-0.09f, 0.7f);
    glEnd();
    glPopMatrix();
}

void background() {
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.6f, 1.0f); glVertex2f(-1, 1);
        glColor3f(0.0f, 0.6f, 1.0f); glVertex2f(1, 1);
        glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(1, -0.2f);
        glColor3f(1.0f, 1.0f, 1.0f); glVertex2f(-1, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.2f, 0.8f, 0.2f); 
        for(float x = -1.0f; x <= 1.0f; x += 0.05f) {
            float y = -0.6f + 0.15f * sin(x * 2.0f); 
            glVertex2f(x, y);
        }
        glVertex2f(1.0f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();
}

void jendela() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    background();
    gedungsigmaboi(0.5f, -0.5f); 
    bubble(0.6f, -0.3f, 0.4f); 
    bubble(-0.5f, -0.4f, 0.25f);
    bubble(-0.2f, -0.5f, 0.1f);
    
    //buat mobil terbang wkwkwk
    glPushMatrix();
    	glTranslatef(-0.1f, 0.0f, 0.0f); 
    		glColor3f(0.0f, 0.4f, 0.7f); 
    		glBegin(GL_QUADS);
        		glVertex2f(-0.35f, -0.1f); 
        		glVertex2f(0.35f, -0.1f);  
        		glVertex2f(0.35f, 0.12f);  
        		glVertex2f(-0.35f, 0.12f); 
        
        		glVertex2f(-0.18f, 0.12f); 
        		glVertex2f(0.18f, 0.12f);  
        		glVertex2f(0.12f, 0.28f);  
        		glVertex2f(-0.12f, 0.28f); 
    		glEnd();

    
    		glColor3f(0.8f, 0.9f, 1.0f); 
    		glBegin(GL_QUADS);
        		glVertex2f(-0.08f, 0.15f); 
        		glVertex2f(0.08f, 0.15f);  
        		glVertex2f(0.06f, 0.24f);  
        		glVertex2f(-0.06f, 0.24f); 
    		glEnd();

    		glPushMatrix();
        		glTranslatef(-0.18f, -0.1f, 0.0f); 
        			roda(0.09f); 
    		glPopMatrix();
    		
    		glPushMatrix();
				glTranslatef(0.18f, -0.1f, 0.0f); 
        			roda(0.09f); 	
			glPopMatrix();

    glPopMatrix(); 
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(400, 300);
    glutCreateWindow("mobil");
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    glutDisplayFunc(jendela);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
