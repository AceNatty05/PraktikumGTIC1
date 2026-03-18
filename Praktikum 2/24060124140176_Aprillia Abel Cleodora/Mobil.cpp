#include <GL/glut.h>
#include <math.h>

// Lingkaran
void lingkaran(float x, float y, float r){
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++){
        float sudut = 2*3.1416*i/100;
        glVertex2f(x + r*cos(sudut), y + r*sin(sudut));
    }
    glEnd();
}

// Setengah Lingkaran 
void setengahLingkaran(float x, float y, float r){
    glBegin(GL_POLYGON);
    for(int i=0;i<=50;i++){
        float sudut = -1.0 + (3.1416 * i / 50); 
        glVertex2f(x + r*cos(sudut), y + r*sin(sudut));
    }
    glEnd();
}

// Mobil
void mobil(float r, float g, float b){
    glPushMatrix();

    // body utama 
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
       glVertex2f(-0.20,0);
	   glVertex2f(0.20,0);
	   glVertex2f(0.20,0.12);
	   glVertex2f(-0.20,0.12);
    glEnd();

    // atap mobil
    glBegin(GL_POLYGON);
        glVertex2f(-0.12,0.12);
        glVertex2f(0.12,0.12);
        glVertex2f(0.08,0.22);
        glVertex2f(-0.08,0.22);
    glEnd();

    // kaca
    glColor3f(0.8,0.9,1);
    glBegin(GL_POLYGON);
        glVertex2f(-0.08,0.13);
		glVertex2f(0.08,0.13);
		glVertex2f(0.06,0.19);
		glVertex2f(-0.06,0.19);
    glEnd();

    // pintu 
    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(0,0.12);
        glVertex2f(0,0);
    glEnd();

    // handle pintu
    lingkaran(0.05,0.06,0.01);
    
    // lampu depan
	glColor3f(1,1,0);
	glBegin(GL_POLYGON);
    	glVertex2f(0.20,0.08);
    	glVertex2f(0.215,0.06);
    	glVertex2f(0.215,0.035);
    	glVertex2f(0.20,0.025);
	glEnd();
	
    // roda
    glColor3f(0,0,0);
    lingkaran(-0.12,-0.03,0.05);
	lingkaran(0.12,-0.03,0.05);

    // velg
    glColor3f(0.8,0.8,0.8);
    lingkaran(-0.12,-0.03,0.02);
	lingkaran(0.12,-0.03,0.02);

    glPopMatrix();
}

// Pohon 
void pohon(){
    glPushMatrix();

    // batang
    glColor3f(0.55,0.27,0.07);
    glBegin(GL_POLYGON);
        glVertex2f(-0.03,-0.3);
        glVertex2f(0.03,-0.3);
        glVertex2f(0.03,0);
        glVertex2f(-0.03,0);
    glEnd();

    // daun (bulat-bulat)
    glColor3f(0,0.7,0);
    lingkaran(0,0.1,0.12);
    lingkaran(-0.08,0.05,0.1);
    lingkaran(0.08,0.05,0.1);

    glPopMatrix();
}

// Gedung
void gedung(float r, float g, float b){
    glPushMatrix();

    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
        glVertex2f(-0.1,-0.3);
        glVertex2f(0.1,-0.3);
        glVertex2f(0.1,0.7);
        glVertex2f(-0.1,0.7);
    glEnd();

    glColor3f(0.85,0.92,1);
    for(float y=-0.2; y<0.6; y+=0.15){
        for(float x=-0.07; x<0.07; x+=0.07){
            glBegin(GL_POLYGON);
                glVertex2f(x,y);
                glVertex2f(x+0.04,y);
                glVertex2f(x+0.04,y+0.1);
                glVertex2f(x,y+0.1);
            glEnd();
        }
    }

    glPopMatrix();
}

// Awan
void awan(){
    glPushMatrix();
    glColor3f(1,1,1);

    lingkaran(-0.06,0,0.1);
    lingkaran(0.06,0,0.1);
    lingkaran(0,0.06,0.1);

    glPopMatrix();
}

// Display
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    // langit 
    glBegin(GL_POLYGON);
        glColor3f(0.4,0.7,1);
        glVertex2f(-1,1);
        glVertex2f(1,1);

        glColor3f(0.75,0.9,1);
        glVertex2f(1,-0.3);
        glVertex2f(-1,-0.3);
    glEnd();

    // jalan
    glColor3f(0.2,0.2,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);
        glVertex2f(1,-0.3);
        glVertex2f(-1,-0.3);
    glEnd();

    // garis jalan
    glColor3f(1,1,1);
    for(float x=-0.9; x<1; x+=0.3){
        glBegin(GL_POLYGON);
            glVertex2f(x,-0.65);
            glVertex2f(x+0.1,-0.65);
            glVertex2f(x+0.1,-0.6);
            glVertex2f(x,-0.6);
        glEnd();
    }

    // gedung
    for(float x=-0.8; x<1; x+=0.3){
        glPushMatrix();
        glTranslatef(x,0,0);
        gedung(0.3 + x/2, 0.5, 0.8);
        glPopMatrix();
    }

    // pohon
    for(float x=-0.7; x<1; x+=0.4){
        glPushMatrix();
        glTranslatef(x,0,0);
        pohon();
        glPopMatrix();
    }

	// matahari 
	glColor3f(1, 0.9, 0); 
	lingkaran(0.85, 0.85, 0.07);
	
    // awan
    glPushMatrix();
    glTranslatef(-0.5,0.7,0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,0.7,0);
    awan();
    glPopMatrix();

    // mobil
    glPushMatrix();
    glTranslatef(-0.7,-0.5,0);
    mobil(1,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-0.5,0);
    mobil(0,0,1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,-0.5,0);
    mobil(0,0.8,0);
    glPopMatrix();

    glFlush();
}

void init(){
    glClearColor(1,1,1,1);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutCreateWindow("Mobil 2D Alebbyoooo");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
