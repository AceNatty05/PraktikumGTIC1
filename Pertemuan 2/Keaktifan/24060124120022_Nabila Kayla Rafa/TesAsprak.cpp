// Nama 	: Nabila Kayla Rafa
// NIM		: 24060124120022
// Lab		: C1
// Project	: Keaktifan 2 - Snowflake

#include <GL/glut.h>

void Segienam() {
    glColor3f(0.60f, 0.79f, 0.98f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.97f, 0.78f, 0.93f);
    	glVertex2f(0.0f, 0.0f);       
    glColor3f(0.56f, 0.55f, 0.90f);
    	glVertex2f(0.30f, 0.0f);
    	glVertex2f(0.15f, 0.26f);
    	glVertex2f(-0.15f, 0.26f);
    	glVertex2f(-0.30f, 0.0f);
    	glVertex2f(-0.15f, -0.26f);
    	glVertex2f(0.15f, -0.26f);
    	glVertex2f(0.30f, 0.0f); 
    glEnd();
}

void LenganSnowflake() {
    glBegin(GL_LINES);
        // Batang
        glColor3f(0.56f, 0.55f, 0.90f);
        	glVertex2f(0.30f, 0.0f);  
        glColor3f(0.96f, 0.63f, 1.00f);
        	glVertex2f(0.85f, 0.0f);  
        
        // Cabang bawah
        glColor3f(0.43f, 0.68f, 0.95f);
        	glVertex2f(0.50f, 0.0f); 
        glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2f(0.65f, 0.20f);
		glColor3f(0.43f, 0.68f, 0.95f);
        	glVertex2f(0.50f, 0.0f);
		glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2f(0.65f, -0.20f);
		
        // Cabang atas
        glColor3f(0.43f, 0.68f, 0.95f);
        	glVertex2f(0.65f, 0.0f);
        glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2f(0.77f, 0.15f);
		glColor3f(0.43f, 0.68f, 0.95f);
        	glVertex2f(0.65f, 0.0f); 
        glColor3f(1.0f, 1.0f, 1.0f);
			glVertex2f(0.77f, -0.15f);
    glEnd();
}

void Rotasi(void) {
	// Lengan 1 (0 Derajat)
    glPushMatrix();
    	glRotatef(0, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();
    
    // Lengan 2 (60 Derajat)
    glPushMatrix();
    	glRotatef(60, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();

    // Lengan 3 (120 Derajat)
    glPushMatrix();
    	glRotatef(120, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();

    // Lengan 4 (180 Derajat)
    glPushMatrix();
    	glRotatef(180, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();

    // Lengan 5 (240 Derajat)
    glPushMatrix();
    	glRotatef(240, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();

    // Lengan 6 (300 Derajat)
    glPushMatrix();
    	glRotatef(300, 0, 0, 1);
    	glBegin(GL_LINES);
    	LenganSnowflake();
    glPopMatrix();
}

void DisplaySnowflake(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    Segienam();
    glLineWidth(5.0f);
	Rotasi();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Snowflake");
    glClearColor(0.00f, 0.00f, 0.00f, 1.0f);
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutDisplayFunc(DisplaySnowflake);
    glutMainLoop();
    return 0;
}
