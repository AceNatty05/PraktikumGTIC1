#include <GL/glut.h>
#include <math.h>

void Roda(float x, float y, float z, float rotasiRoda){
    glPushMatrix();
        glTranslated(x, y, z);   
        glRotated(rotasiRoda, 0, 0, 1); 

        glColor3f(0.1f, 0.1f, 0.1f);
        glBegin(GL_POLYGON);
            for(int i = 0; i < 360; i++) {
                float rad = i * 3.14159 / 180;
                glVertex3f(cos(rad) * 0.1, sin(rad) * 0.1, 0.0f);
            }
        glEnd();


        glColor3f(0.8f, 0.8f, 0.8f);
        glLineWidth(1.0f);
        for (int i = 0; i < 8; i++) {
            glPushMatrix(); 
                glRotated(i * 45.0f, 0, 0, 1); 
                glBegin(GL_LINES);
                    glVertex3f(0.0f, 0.0f, 0.0f);  
                    glVertex3f(0.07f, 0.0f, 0.0f);  
                glEnd();
            glPopMatrix(); 
        }

    glPopMatrix();
}

void BodyMobil(float r, float g, float b) {
    glLineWidth(4.0f);
    glBegin(GL_QUAD_STRIP);
        glColor3f(r + 0.3f, g + 0.3f, b + 0.3f); 
        glVertex3f(0.3f, 0.1f, 0.0f);
        glVertex3f(-0.1f, 0.1f, 0.0f);

        glColor3f(r, g, b);
        glVertex3f(0.4f, 0.0f, 0.0f);
        glVertex3f(-0.2f, 0.0f, 0.0f);

        glColor3f(r - 0.2f, g - 0.2f, b - 0.2f);
        glVertex3f(-0.35f, 0.0f, 0.0f);
        glVertex3f(-0.35f, -0.1f, 0.0f);

        glColor3f(r - 0.4f, g - 0.4f, b - 0.4f);
        glVertex3f(-0.4f, -0.1f, 0.0f);
        glVertex3f(-0.4f, -0.2f, 0.0f);

        glColor3f(r, g, b);
        glVertex3f(0.4f, 0.0f, 0.0f);
        glColor3f(r - 0.4f, g - 0.4f, b - 0.4f);
        glVertex3f(0.4f, -0.2f, 0.0f);
    glEnd();
}

void Mobil(float x, float y, float r, float g, float b, float arah){
    glPushMatrix();
        glTranslated(x, y, 0);   
        glScalef(0.5f * arah, 0.5f, 1.0f);
        BodyMobil(r, g, b);
        Roda(0.25f, -0.2f, 0.0f, 0.0f);  
        Roda(-0.25f, -0.2f, 0.0f, 0.0f); 
    glPopMatrix();
}

void Jalan(void){
    glColor3f(0.25f, 0.25f, 0.25f);
        glBegin(GL_QUADS);
            glVertex3f(-1.0f, -0.1f, 0.0f); 
            glVertex3f(1.0f, -0.1f, 0.0f);

            glVertex3f(1.0f, -0.8f, 0.0f); 
            glVertex3f(-1.0f, -0.8f, 0.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        for (float x = -1.0f; x <= 1.0f; x += 0.2f) {
            glVertex3f(x, -0.45f, 0.0f);
            glVertex3f(x + 0.1f, -0.45f, 0.0f);
        }
    glEnd();
}

void Pohon(float x){
    glPushMatrix();
        glTranslated(x, 0, 0);   
        glScalef(0.7f, 0.7f, 1.0f);
        glColor3f(0.59f, 0.44f, 0.20f);
        glBegin(GL_QUADS);
        glVertex3f(-0.03f, -0.1f, 0.0f);
        glVertex3f(0.03f, -0.1f, 0.0f);

        glVertex3f(0.03f, 0.2f, 0.0f);
        glVertex3f(-0.03f, 0.2f, 0.0f);
        glEnd();
        
        for (int i = 0; i < 3; i++) {
            glColor3f(0.0f, 0.4f + (i * 0.1f), 0.0f);
            glBegin(GL_TRIANGLE_FAN);
                glVertex3f(0.0f, 0.15f + 0.3f + (i * 0.15f), 0.0f); 
                glVertex3f(-0.15f + (i * 0.03f), 0.15f + (i * 0.15f), 0.0f);
                glVertex3f(0.15f - (i * 0.03f), 0.15f + (i * 0.15f), 0.0f);
            glEnd();
        }
    glPopMatrix();
}

void Tanah(void) {
    glPushMatrix();    
        glBegin(GL_QUAD_STRIP);
        for (float x = -1.0f; x <= 1.1f; x += 0.05f) {
            glColor3f(0.2f, 0.6f, 0.2f); 
            glVertex3f(x, 0.15f + sin(x * 4.0f) * 0.07f, 0.0f);
            glColor3f(0.05f, 0.35f, 0.05f); 
            glVertex3f(x, -1.0f, 0.0f);
        }
        glEnd();
    glPopMatrix();
}

void Langit(void){
    glPushMatrix();
        glBegin(GL_QUADS);
            glColor3f(0.2f, 0.5f, 1.0f); 
            glVertex2f(-1.0f, 1.0f); 
            glVertex2f(1.0f, 1.0f);

            glColor3f(0.7f, 0.9f, 1.0f); 
            glVertex2f(1.0f, 0.0f); 
            glVertex2f(-1.0f, 0.0f);
        glEnd();
    glPopMatrix();
}

void AwanCircle(float r) {
    glColor3f(0.98f, 0.98f, 0.98f);
    glBegin(GL_POLYGON);
        for(int i = 0; i < 360; i++) {
            float rad = i * 3.14159f / 180.0f;
            glVertex2f(cos(rad) * r, sin(rad) * r);
        }
    glEnd();
}

void Awan(float x, float y, float skala) {
    glPushMatrix();
        glTranslatef(x, y, 0);       
        glScalef(skala, skala, 1.0f); 

        glPushMatrix();
            AwanCircle(0.12f);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-0.1f, -0.02f, 0);
            AwanCircle(0.08f);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.1f, -0.02f, 0);
            AwanCircle(0.08f);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-0.05f, 0.05f, 0);
            AwanCircle(0.07f);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.05f, 0.05f, 0);
            AwanCircle(0.07f);
        glPopMatrix();

    glPopMatrix();
}

void Burung(float x, float y){
    glPushMatrix();
        glTranslatef(x, y, 0);  
        glScalef(0.05f, 0.05f, 1.0f);
        glLineWidth(2.0f);
        glColor3f(0.0, 0.0, 0.0); 
        glBegin(GL_LINE_STRIP);
            glVertex3f(-0.5f,  0.0f, 0.0f); 
            glVertex3f(-0.25f, 0.5f, 0.0f); 
            glVertex3f( 0.0f,  0.0f, 0.0f); 
            glVertex3f( 0.25f, 0.5f, 0.0f); 
            glVertex3f( 0.5f,  0.0f, 0.0f); 
        glEnd();

        glBegin(GL_LINE_STRIP);
            glVertex3f(-0.2f, 0.0f, 0.0f); 
            glVertex3f(0.2f, 0.0f, 0.0f); 
        glEnd();
    glPopMatrix();
}

void Air() {
    glPushMatrix();
        glBegin(GL_QUADS);
            glColor3f(0.0f, 0.3f, 0.6f); 
            glVertex3f(-1.0f, -0.85f, 0.0f);
            glVertex3f(1.0f, -0.85f, 0.0f);
            
            glColor3f(0.1f, 0.5f, 0.8f); 
            glVertex3f(1.0f, -1.0f, 0.0f);
            glVertex3f(-1.0f, -1.0f, 0.0f);
        glEnd();

        glColor3f(0.8f, 0.9f, 1.0f);
        glBegin(GL_LINES);
        for (float x = -0.9f; x <= 1.0f; x += 0.3f) {
            glVertex2f(x, -0.9f); glVertex2f(x + 0.15f, -0.9f);
            glVertex2f(x - 0.15f, -0.95f); glVertex2f(x, -0.95f);
        }
        glEnd();
    glPopMatrix();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    Langit();
    Tanah();
    Air();
    Jalan();
    
    Burung(-0.1f, 0.8f);
    Burung(0.1f, 0.85f);
    Burung(-0.25f, 0.9f);
    Burung(0.85f, 0.65f);
    Burung(-0.9f, 0.7f);

	Awan(-0.6f, 0.7f, 1.2f);
    Awan(0.0f, 0.6f, 0.7f);   
    Awan(0.5f, 0.8f, 1.2f);
    
    Pohon(0.0f);
    Pohon(0.3f);
    Pohon(0.6f);
    Pohon(0.9f);
    Pohon(-0.3f);
    Pohon(-0.6f);
    Pohon(-0.9f);
    
    Mobil(0.5f, -0.2f, 1.0f, 0.0f, 0.0f, 1.0f);
    Mobil(-0.2f, -0.2f, 0.0f, 0.0f, 1.0f, 1.0f);
    Mobil(-0.5f, -0.5f, 0.0f, 1.0f, 0.0f, -1.0f);
    Mobil(0.2f, -0.5f, 1.0f, 1.0f, 0.0f, -1.0f);

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("A Day in the Road");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
