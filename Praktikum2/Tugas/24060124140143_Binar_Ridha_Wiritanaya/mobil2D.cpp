#include <GL/glut.h>
#include <math.h>

void Mobil() {
	glBegin(GL_QUADS);
        glVertex3f(-0.3, 0.0, 0.0);  
		glVertex3f(0.3, 0.0, 0.0);
        glVertex3f(0.3, 0.15, 0.0);  
		glVertex3f(-0.3, 0.15, 0.0);
        glVertex3f(-0.2, 0.15, 0.0); 
		glVertex3f(0.2, 0.15, 0.0);
        glVertex3f(0.15, 0.25, 0.0); 
		glVertex3f(-0.15, 0.25, 0.0);
    glEnd();

// Jendela mobil
    glBegin(GL_POLYGON);
    	glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f(-0.13, 0.23, 0.0);  
		glVertex3f(-0.16, 0.15, 0.0);
        glVertex3f(-0.01, 0.15, 0.0);  
		glVertex3f(-0.01, 0.23, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	    glColor3f(0.5f, 0.5f, 0.5f);
        glVertex3f(0.01, 0.23, 0.0); 
		glVertex3f(0.01, 0.15, 0.0); 
		glVertex3f(0.16, 0.15, 0.0);
		glVertex3f(0.13, 0.23, 0.0);
    glEnd();

//Roda
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);
        glTranslatef(-0.2f, 0.0f, 0.0f); 
        glBegin(GL_POLYGON);
        for (int i = 0; i < 50; i++) {
            float angle = 2 * 3.14159f * i / 50;
            glVertex2f(cos(angle) * 0.06, sin(angle) * 0.06);
        }
        glEnd();
    glPopMatrix();


    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f); 
        glTranslatef(0.2f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 50; i++) {
            float angle = 2 * 3.14159f * i / 50;
            glVertex2f(cos(angle) * 0.06, sin(angle) * 0.06);
        }
        glEnd();
    glPopMatrix();

//lampu mobil
    glColor3f(1.0f, 1.0f, 0.0f); 
    glBegin(GL_QUADS);
        glVertex3f(0.27, 0.12, 0.0);  
        glVertex3f(0.30, 0.12, 0.0);  
        glVertex3f(0.30, 0.08, 0.0);  
        glVertex3f(0.27, 0.08, 0.0);
    glEnd();
}



void Pohon() {
// Batang
    glColor3f(0.4f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
        glVertex3f(-0.03, 0.0, 0.0);  
		glVertex3f(0.03, 0.0, 0.0);
        glVertex3f(0.03, 0.15, 0.0); 
		glVertex3f(-0.03, 0.15, 0.0);
    glEnd();

// Daun
    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.15, 0.15, 0.0); 
		glVertex3f(0.15, 0.15, 0.0); 
		glVertex3f(0.0, 0.35, 0.0);
		
        glVertex3f(-0.12, 0.25, 0.0); 
		glVertex3f(0.12, 0.25, 0.0); 
		glVertex3f(0.0, 0.45, 0.0);
    glEnd();
}



void Awan() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
        glTranslatef(0.0f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 50; i++) {
            float angle = 2 * 3.14159f * i / 50;
            glVertex2f(cos(angle) * 0.1, sin(angle) * 0.1); // Radius 0.1
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.08f, -0.02f, 0.0f);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 50; i++) {
            float angle = 2 * 3.14159f * i / 50;
            glVertex2f(cos(angle) * 0.07, sin(angle) * 0.07); // Radius 0.07
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.08f, -0.02f, 0.0f);
        glBegin(GL_POLYGON);
        for (int i = 0; i < 50; i++) {
            float angle = 2 * 3.14159f * i / 50;
            glVertex2f(cos(angle) * 0.07, sin(angle) * 0.07); // Radius 0.07
        }
        glEnd();
    glPopMatrix();
}


void Lingkungan() {
// Langit
    glBegin(GL_QUADS);
        glColor3f(0.7f, 0.9f, 1.0f); 
        glVertex3f(-1.0, -0.1, 0.0); 
        glVertex3f(1.0, -0.1, 0.0);

        glColor3f(0.0f, 0.5f, 1.0f); 
        glVertex3f(1.0, 1.0, 0.0);   
        glVertex3f(-1.0, 1.0, 0.0);
    glEnd();

// Jalan
    glColor3f(0.15f, 0.15f, 0.15f); 
    glBegin(GL_QUADS);
        glVertex3f(-1.0, -1.0, 0.0); 
        glVertex3f(1.0, -1.0, 0.0);  
        glVertex3f(1.0, -0.1, 0.0);  
        glVertex3f(-1.0, -0.1, 0.0);
    glEnd();

// Garis Jalan
    glColor3f(1.0f, 1.0f, 1.0f);
    for(float i = -1.0; i < 1.0; i += 0.4) {
        glBegin(GL_QUADS);
            glVertex3f(i, -0.52, 0.0);      
			glVertex3f(i+0.2, -0.52, 0.0);
            glVertex3f(i+0.2, -0.48, 0.0);  
			glVertex3f(i, -0.48, 0.0);
        glEnd();
    }
}



void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    Lingkungan();

// Mobil
	glPushMatrix();
		glTranslatef(0.1f, -0.3f, 0.0f);
	    glColor3f(1.0, 0.0, 0.0);
	    Mobil();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(0.6f, -0.8f, 0.0f);
        glColor3f(0.0, 1.0, 0.0);
        Mobil();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.5f, -0.8f, 0.0f);
        glColor3f(1.0, 1.0, 1.0);
        Mobil();
    glPopMatrix();
    
// Pohon
    glPushMatrix(); 
		glTranslatef(-0.8f, -0.1f, 0.0f); 
		Pohon(); 
	glPopMatrix();
    
	glPushMatrix(); 
		glTranslatef(0.4f, -0.1f, 0.0f);  
		Pohon(); 
	glPopMatrix();

// Awan
    glPushMatrix(); 
		glTranslatef(-0.6f, 0.7f, 0.0f); 
		Awan(); 
	glPopMatrix();
	
    glPushMatrix(); 
		glTranslatef(0.7f, 0.65f, 0.0f); 
		Awan(); 
	glPopMatrix();

    glFlush();
}


int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize (640,480);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA); 
	glutCreateWindow("Mobil2D");
	glutDisplayFunc (display);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
