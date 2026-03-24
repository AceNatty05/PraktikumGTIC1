#include <GL/glut.h>
#include <math.h>

void roda() {
    glPushMatrix();
    	const GLfloat rad = 0.125f;
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
	    for (int i = 0; i < 100; i++) {
	        float angle = 2.0f * 3.14 * i / 100;
	        glVertex2f(rad * cos(angle), rad * sin(angle));
	    }
	    glEnd();
    glPopMatrix();
}

void wuling() {
	// Rangka
    glPushMatrix();
        glColor3f(0.8, 0.0, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.6f, -0.2f);
            glVertex2f( 0.6f, -0.2f);
            glVertex2f( 0.6f,  0.2f);
            glVertex2f(-0.6f,  0.2f);
        glEnd();
    glPopMatrix();

    // Atap
    glPushMatrix();
        glColor3f(0.8, 0.0, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.6f, 0.2f);
            glVertex2f(0.5f, 0.2f);
            glVertex2f(0.2f, 0.5f);
            glVertex2f(-0.475f, 0.5f);
        glEnd();
    glPopMatrix();
    
    // Hitam Tambahan
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0.0125, -0.02, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.6f, 0.2f);
            glVertex2f(-0.19f, 0.2f);
            glVertex2f(-0.19f, 0.15f);
            glVertex2f(-0.6f, 0.15f);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-0.6f, 0.2f);
            glVertex2f(-0.19f, 0.2f);
            glVertex2f(-0.19f, 0.5f);
            glVertex2f(-0.475f, 0.5f);
        glEnd();
    glPopMatrix();
    
    // Kaca depan
	glPushMatrix();
	    glColor3f(0.7, 0.9, 1.0);
	    glBegin(GL_POLYGON);
	        glVertex2f(-0.15f, 0.2f);
	        glVertex2f(0.43f, 0.2f);
	        glVertex2f(0.2f, 0.45f);
	        glVertex2f(-0.15f, 0.45f);
	    glEnd();
	glPopMatrix();
	
	// Kaca belakang
	glPushMatrix();
	    glColor3f(0.7, 0.9, 1.0);
	    glBegin(GL_POLYGON);
	        glVertex2f(-0.55f, 0.2f);
	        glVertex2f(-0.225f, 0.2f);
	        glVertex2f(-0.225f, 0.45f);
	        glVertex2f(-0.45f, 0.45f);
	    glEnd();
	glPopMatrix();
	
	// Pintu Mobil
	glPushMatrix();
	    glColor3f(0.0, 0.0, 0.0);
	    glLineWidth(2.0f);
	
	    glBegin(GL_LINE_LOOP);
	        glVertex2f(-0.175f, -0.15f);
	        glVertex2f(0.3f, -0.15f);
	        glVertex2f(0.3f, 0.35f);
	        glVertex2f(0.175f, 0.475f);
	        glVertex2f(-0.175f, 0.475f);
	    glEnd();
	glPopMatrix();

    // Roda Kiri
    glPushMatrix();
        glTranslatef(-0.45f, -0.15f, 0.0);
        roda();
    glPopMatrix();

    // Kanan
    glPushMatrix();
        glTranslatef(0.45f, -0.15f, 0.0);
        roda();
    glPopMatrix();
    
    glFlush();
}

void background() {
	
    glBegin(GL_QUADS);
        glColor3f(0.4, 0.75, 0.95); 
        glVertex2f(-2, 2);
        glVertex2f(2, 2);

        glColor3f(0.7, 0.9, 1.0);
        glVertex2f(2, -0.5);
        glVertex2f(-2, -0.5);
    glEnd();

	glPushMatrix();
		glTranslatef(0.0f, -0.4f, 0.0f);

	    glColor3f(1.0, 0.9, 0.0);
	    glBegin(GL_POLYGON);
	        for(int i=0;i<100;i++){
	            float a = 2 * 3.14159 * i/100;
	            glVertex3f(0.0 + 0.18*cos(a), 0.5 + 0.18*sin(a), 0);
	        }
	    glEnd();
	
		// gunung kiri
	    glColor3f(0.55, 0.75, 0.35);
	    glBegin(GL_TRIANGLES);
	        glVertex2f(-1.5, 0.2);
	        glVertex2f(0.5, 0.2);
	        glVertex2f(-0.5, 0.75);
	    glEnd();
	
	    // gunung kanan
	    glBegin(GL_TRIANGLES);
	        glVertex2f(1.5, 0.2);
	        glVertex2f(-0.5, 0.2);
	        glVertex2f(0.5, 0.75);
	    glEnd();
	glPopMatrix();

    glColor3f(0.15, 0.15, 0.15);
    glBegin(GL_QUADS);
        glVertex2f(-2, -2);
        glVertex2f( 2, -2);
        glVertex2f( 2, -0.1);
        glVertex2f(-2, -0.1);
    glEnd();


    glColor3f(1, 1, 1);

    for(float i = -2; i < 2; i += 0.3){
        glBegin(GL_QUADS);
            glVertex2f(i, -0.55);
            glVertex2f(i+0.15, -0.55);
            glVertex2f(i+0.15, -0.5);
            glVertex2f(i, -0.5);
        glEnd();
    }
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	background();
	glPushMatrix();
		GLfloat sfact = 0.5;
		glScalef(sfact, sfact, sfact);
		glTranslatef(-1.5f, -0.5f, 0.0);
		wuling();
	glPopMatrix();
	glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("wuling gueh");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    glScalef(0.75, 1, 1); // biar ga stretchy
    glutMainLoop();
    return 0;
}
