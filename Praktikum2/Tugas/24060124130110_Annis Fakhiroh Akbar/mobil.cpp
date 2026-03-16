#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void BuatLingkaran(float xc, float yc, float radius) {
    float PI = 3.14159265f;
    int circle_points = 100; 

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc, yc); 

    for (int i = 0; i <= circle_points; i++) {
        float angle = (2.0f * PI * i) / circle_points;
        float x_tepi = xc + (cos(angle) * radius);
        float y_tepi = yc + (sin(angle) * radius);
        glVertex2f(x_tepi, y_tepi);
    }
    glEnd();
}

void mobil(void) {
	glColor3f(0.6f, 0.65f, 0.75f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.904, -0.854, 0.0);
	glVertex3f(-0.887, -0.722, 0.0);
	glVertex3f(-0.778, -0.715, 0.0);
	glVertex3f(-0.714, -0.63, 0.0);
	glVertex3f(-0.468, -0.64, 0.0);
	glVertex3f(-0.401, -0.718, 0.0);
	glVertex3f(-0.238, -0.749, 0.0);
	glVertex3f(-0.24, -0.855, 0.0);
	glEnd();
	
	glColor3f(1.0f, 0.9f, 0.4f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.23834, -0.76702, 0.0);
	glVertex3f(-0.217, -0.767, 0.0);
	glVertex3f(-0.2165, -0.786, 0.0);
	glVertex3f(-0.23873, -0.78769, 0.0);
	glEnd();
	
	glColor3f(0.2f, 0.2f, 0.2f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.258, -0.814, 0.0);
	glVertex3f(-0.256, -0.831, 0.0);
	glVertex3f(-0.208, -0.832, 0.0);
	glVertex3f(-0.211, -0.815, 0.0);
	glEnd();
	
	glColor3f(1.0f, 0.1f, 0.1f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.916,-0.752, 0.0);
	glVertex3f(-0.916,-0.781, 0.0);
	glVertex3f(-0.893269, -0.79, 0.0);
	glVertex3f(-0.89, -0.755, 0.0);
	glEnd();
	
	glColor3f(0.2f, 0.2f, 0.2f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.92, -0.81, 0.0);
	glVertex3f(-0.917, -0.8235, 0.0);
	glVertex3f(-0.879, -0.826, 0.0);
	glVertex3f(-0.878, -0.813, 0.0);
	glEnd();
	
	glColor3f(0.4f, 0.05f, 0.1f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.45795, -0.6517, 0.0);
	glVertex3f(-0.401, -0.718, 0.0);
	glVertex3f(-0.4284, -0.719, 0.0);
	glVertex3f(-0.48, -0.65, 0.0);
	glEnd();
	
	glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    glColor4f(0.2f, 0.3f, 0.4f, 0.6f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.752, -0.715, 0.0);
	glVertex3f(-0.7, -0.65, 0.0);
	glVertex3f(-0.4996, -0.6535, 0.0);
	glVertex3f(-0.46, -0.72, 0.0);
	glEnd();
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.46, -0.72, 0.0);
	glVertex3f(-0.4607, -0.823, 0.0);
	glVertex3f(-0.67, -0.82, 0.0);
	glVertex3f(-0.7485, -0.757, 0.0);
	glVertex3f(-0.752, -0.715, 0.0);
	glEnd();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex3f(-0.597195, -0.651795, 0.0);
	glVertex3f(-0.6, -0.82, 0.0);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
    glColor4f(1.0f, 0.9f, 0.4f, 0.7f); 
    glVertex3f(-0.217, -0.776, 0.0);
    glColor4f(1.0f, 0.9f, 0.4f, 0.0f); 
    glVertex3f( 0.4f, -0.65f, 0.0f); 
    glVertex3f( 0.4f, -0.95f, 0.0f); 
    glEnd();
	
	glFlush();
}

void pohon(void) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.08f, 0.06f, 0.04f);
    glVertex3f(-0.9f, -0.1f, 0.0f); 
    glVertex3f( -0.8f, -0.1f, 0.0f); 
    glColor3f(0.02f, 0.02f, 0.02f);
    glVertex3f( -0.815f,  0.211f, 0.0f); 
    glVertex3f(-0.871f, 0.21f, 0.0f);
    glEnd();

    glLineWidth(10.0f);
    glColor3f(0.02f, 0.02f, 0.02f);
    glBegin(GL_LINES);
    glVertex3f(-0.8525f, 0.122f, 0.0f);  
    glVertex3f(-0.921f, 0.209f, 0.0f); 
    glVertex3f(-0.8425f, 0.106f, 0.0f);  
    glVertex3f(-0.745f, 0.193f, 0.0f);  
    glEnd();
    
    glLineWidth(1.0f); 

	glColor3f(0.12f, 0.25f, 0.18f); 
    BuatLingkaran(-0.8455f, 0.14f, 0.12f);
    glFlush();
}

void garis(void) {
	glColor3f(0.55f, 0.45f, 0.05f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.88f, -0.645f, 0.0f); 
    glVertex3f(1.0f, -0.6434f, 0.0f); 
    glVertex3f(1.0f, -0.69593f, 0.0f); 
    glVertex3f(0.88f, -0.69593f, 0.0f); 
	glEnd();
    glFlush();
}

void beton(void) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex3f(0.83f, -0.40f, 0.0f); 
    glVertex3f(0.95f, -0.40f, 0.0f); 
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex3f(1.0f, -0.47f, 0.0f); 
    glVertex3f(0.78492f, -0.47f, 0.0f); 
    glEnd();

    glFlush();
}

void trotoar(void) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.12f, 0.15f, 0.2f);
    glVertex3f(-1.0f, -0.445f, 0.0f); 
	glVertex3f(-1.0f, -1.0f, 0.0f); 
	glColor3f(0.03f, 0.03f, 0.05f);
	glVertex3f(1.0f, -1.0f, 0.0f);  
	glVertex3f(1.0f, -0.445f, 0.0f); 
    glEnd();
    
    garis();
    glPushMatrix();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glTranslatef(-0.24f, 0.0f, 0.0f);
    garis();
    glPopMatrix();
    
    beton();
    glPushMatrix();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glTranslatef(-0.21508f, 0.0f, 0.0f);
    beton();
    glPopMatrix();
    
    glFlush();
}

void awan(void) {
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.85f, 0.9f);
    glVertex3f(0.42895f, 0.741141f, 0.0f); 
    glColor3f(0.15f, 0.18f, 0.25f);
    glVertex3f(0.528f, 0.81f, 0.0f); 
    glVertex3f(0.65f, 0.79f, 0.0f);
	glVertex3f(0.7f, 0.7f, 0.0f);  
	glVertex3f(0.785f, 0.776f, 0.0f); 
	glVertex3f(0.882f, 0.68f, 0.0f); 
	glVertex3f(0.9f, 0.6f, 0.0f); 
	glVertex3f(0.99f, 0.572f, 0.0f); 
	glVertex3f(0.528f, 0.81f, 0.0f);

    glEnd();
    glFlush();
}

void laut(void) {
    glBegin(GL_POLYGON);
    glColor3f(0.02f, 0.1f, 0.2f); 
    glVertex3f(-1.0f, 0.0f, 0.0f);
    glVertex3f(-0.016f, 0.066f, 0.0f); 
    glVertex3f(1.0f, 0.0f, 0.0f); 

    glColor3f(0.01f, 0.02f, 0.05f); 
    glVertex3f(1.0f, -0.45f, 0.0f);
    glVertex3f(-1.0f, -0.45f, 0.0f);
    
    glEnd();
    glFlush();
}

void gunung(void) {
    glBegin(GL_POLYGON);
    glColor3f(0.01f, 0.02f, 0.05f); 
    glVertex3f(-1.0f, 0.0f, 0.0f);   
    glVertex3f(-0.7f, 0.12f, 0.0f);  
    glVertex3f(-0.4f, 0.05f, 0.0f);  
    glVertex3f(0.3f, 0.04f, 0.0f);   
    glVertex3f(0.7f, 0.15f, 0.0f);   
    glVertex3f(1.0f, 0.0f, 0.0f);    
    glVertex3f(1.0f, -0.1f, 0.0f);
    glVertex3f(-1.0f, -0.1f, 0.0f);
    glEnd();
    glFlush();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	
	glPushMatrix();
    glTranslatef(0.0f, -0.05f, 0.0f); 
    gunung();
    glPopMatrix();
	laut();
	
	glPushMatrix();
	glTranslatef(-0.07f, -0.3f, 0.0f);
	pohon();
	glPopMatrix();
	
	glPushMatrix();
	trotoar();
	glPopMatrix();
	
	glPushMatrix();
	mobil();
	glColor3f(0.75f, 0.75f, 0.75f);
	BuatLingkaran(-0.411895,-0.872065,0.076125);
	glColor3f(0.15f, 0.15f, 0.15f);
	BuatLingkaran(-0.411895,-0.872065,0.052572);
	glColor3f(0.75f, 0.75f, 0.75f);
	BuatLingkaran(-0.785125,-0.868875,0.076125);
	glColor3f(0.15f, 0.15f, 0.15f);
	BuatLingkaran(-0.785125,-0.868875,0.052572);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.5f, 0.2f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);
	mobil();
	glColor3f(0.75f, 0.75f, 0.75f);
	BuatLingkaran(-0.411895,-0.872065,0.076125);
	glColor3f(0.15f, 0.15f, 0.15f);
	BuatLingkaran(-0.411895,-0.872065,0.052572);
	glColor3f(0.75f, 0.75f, 0.75f);
	BuatLingkaran(-0.785125,-0.868875,0.076125);
	glColor3f(0.15f, 0.15f, 0.15f);
	BuatLingkaran(-0.785125,-0.868875,0.052572);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.7f, -0.05f, 0.0f);
	awan();
	glPopMatrix();
	
	glPushMatrix();
	glPointSize(1.5f);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f); 
    glVertex2f(0.10f, 0.80f);
    glVertex2f(0.35f, 0.85f);
    glVertex2f(0.45f, 0.70f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.15f, 0.50f);
    glVertex2f(0.40f, 0.55f);
    glVertex2f(0.50f, 0.75f);
    glVertex2f(0.02f, 0.72f);
    glColor3f(1.0f, 1.0f, 0.8f); 
    glVertex2f(0.30f, 0.92f);
    glVertex2f(-0.05f, 0.78f);
    glVertex2f(0.48f, 0.60f);
    glEnd();
        
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(1.0f, 0.8f, 0.0f, 0.03f); 
    BuatLingkaran(0.21f, 0.67f, 0.48f); 
    glColor4f(1.0f, 0.75f, 0.0f, 0.07f); 
    BuatLingkaran(0.21f, 0.67f, 0.35f); 
    glColor4f(1.0f, 0.9f, 0.2f, 0.15f); 
    BuatLingkaran(0.21f, 0.67f, 0.25f); 
    glDisable(GL_BLEND);
    
    glColor3f(1.0f, 1.0f, 0.95f); 
    BuatLingkaran(0.21f, 0.67f, 0.19f);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.2f, -0.2f, 0.0f);
	awan();
	glTranslatef(-0.35f, 0.0f, 0.0f);
	awan();
	glPopMatrix();
	
	glutSwapBuffers();
}

void init(void) {
    glClearColor(0.05f, 0.08f, 0.18f, 1.0f); 
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glShadeModel(GL_SMOOTH); 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); 
    glutCreateWindow("Mobil");
    init(); 
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
