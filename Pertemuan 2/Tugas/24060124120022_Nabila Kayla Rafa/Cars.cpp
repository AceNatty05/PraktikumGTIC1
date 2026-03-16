#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159

float awan_x[3] = {-1.00f, -0.30f, 0.40f};
float awan_y[3] = {0.80f, 0.72f, 0.65f};
float kecepatan = 0.002f;

float bintang_x[50];
float bintang_y[50];

float mobil_x[3] = {0.0f, 1.0f, 2.0f};
float kecepatan_mobil = -0.005f;
float rotasiRoda = 0.0f;

void Lingkaran(float cx, float cy, float radius) {
    float aspect = 960.0f / 540.0f; 
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++) {
        float angle = i * 2 * PI / 360;
        float x = cx + (radius * cos(angle)) / aspect; 
        float y = cy + radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void Langit(void) {
    glBegin(GL_QUADS);
    glColor3f(0.83f, 0.04f, 0.54f);
    glVertex2f(-1.00f, 1.00f);
    glVertex2f(1.00f, 1.00f);
    glColor3f(0.78f, 0.83f, 0.92f);
    glVertex2f(1.00f, -0.45f);
    glVertex2f(-1.00f, -0.45f);
    glEnd();
}

void Bulan(void) {
	glColor3f(1.00f, 1.00f, 1.00f); 
	Lingkaran(0.00f, 0.00f, 0.60f);
}

void Bintang(void) {
    srand(100); 
    glPointSize(2.0f);
    glBegin(GL_POINTS);
    glColor3f(1.00f, 1.00f, 1.00f);
    for (int i = 0; i < 250; i++) {
        float x = (float)(rand() % 300) / 100.0f - 1.00f;
        float y = (float)(rand() % 300) / 100.0f - 0.45f;
        glVertex2f(x, y);
    }
    glEnd();
}

void Awan(void) {
    glColor3f(0.93f, 0.53f, 0.86f);
    for(int i = 0; i < 3; i++) {
        glPushMatrix();
        	glTranslatef(awan_x[i], awan_y[i], 0.00f);
        	Lingkaran(0.00f, 0.00f, 0.10f);
        	Lingkaran(-0.06f, -0.02f, 0.06f);
        	Lingkaran(0.06f, -0.02f, 0.06f); 
        glPopMatrix();
    }
}

void Jalan(void) {
	//trotoar
    glColor3f(0.52f, 0.41f, 0.31f);
    glRectf(-1.00, -0.45, 1.00, -0.50);
    //jalan
    glColor3f(0.18f, 0.13f, 0.12f);
    glRectf(-1.00, -0.50, 1.00, -1.00);
    //marka jalan
    glColor3f(1.00f, 1.00f, 1.00f);
    for(int i = 0; i < 5; i++) {
    	float x_awal = -1.00f + (i * 0.60f);
    	glRectf(x_awal, -0.72, x_awal + 0.30f, -0.75);
    }
}

void Gedung(void) {
	glColor3f(0.15f, 0.06f, 0.20f);
    glRectf(1.00, -0.35, -1.00, -0.45);
	//gedung 1
	glColor3f(0.15f, 0.06f, 0.20f);
    glRectf(0.95, 0.25, 0.65, -0.45);
    glRectf(0.90, 0.30, 0.85, 0.25);
    glColor3f(0.95f, 0.86f, 0.13f);
    for(int baris = 0; baris < 4; baris++) {
        for(int kolom = 0; kolom < 4; kolom++) {
            float x_kiri = 0.92f - (kolom * 0.07f);
            float y_atas = 0.18f - (baris * 0.09f);
            float x_kanan = x_kiri - 0.04f;
            float y_bawah = y_atas - 0.04f;
            glRectf(x_kiri, y_atas, x_kanan, y_bawah);
        }
    }
	//gedung 2
    glColor3f(0.15f, 0.06f, 0.20f);
    glBegin(GL_QUADS);
    	glVertex2f(0.25f, 0.10f);
    	glVertex2f(0.45f, 0.10f);
    	glVertex2f(0.60f, -0.45f);
    	glVertex2f(0.25f, -0.45f);
    glEnd();
    glColor3f(0.95f, 0.86f, 0.13f);
	for(int baris = 0; baris < 3; baris++) {
    	for(int kolom = 0; kolom < 3; kolom++) {
        	float x_kiri = 0.27f + (kolom * 0.06f);
        	float y_atas = 0.05f - (baris * 0.08f);
        	float x_kanan = x_kiri + 0.04f;
        	float y_bawah = y_atas - 0.04f;
        	glRectf(x_kiri, y_atas, x_kanan, y_bawah);
    	}
	}
	//gedung 3
	glColor3f(0.15f, 0.06f, 0.20f);
	glRectf(0.20, -0.25, -0.20, -0.45);
	glBegin(GL_TRIANGLES);
    	glVertex2f(-0.20f, -0.25f);
    	glVertex2f(0.20f, -0.25f);  
    	glVertex2f(0.0f, -0.10f);
	glEnd();
	glColor3f(0.95f, 0.86f, 0.13f);
	glRectf(0.15, -0.28, 0.02, -0.32);
	glRectf(-0.02, -0.28, -0.15, -0.32);
	//gedung 4
	glColor3f(0.15f, 0.06f, 0.20f);
    glRectf(-0.35, 0.05, -0.55, -0.45);
    glBegin(GL_TRIANGLES);
    	glVertex2f(-0.55f, 0.05f);
    	glVertex2f(-0.35f, 0.05f); 
    	glVertex2f(-0.55f, 0.30f);
	glEnd();
	glColor3f(0.95f, 0.86f, 0.13f);
	for(int baris = 0; baris < 4; baris++) {
    	for(int kolom = 0; kolom < 2; kolom++) {
        	float x_kiri = -0.52f + (kolom * 0.06f);
        	float y_atas = 0.05f - (baris * 0.08f);
        	float x_kanan = x_kiri + 0.04f;
        	float y_bawah = y_atas - 0.04f;
        	glRectf(x_kiri, y_atas, x_kanan, y_bawah);
		}	
	}
	//gedung 5
	glColor3f(0.15f, 0.06f, 0.20f);
    glRectf(-0.70, -0.10, -0.95, -0.45);
    glColor3f(0.95f, 0.86f, 0.13f);
	for(int baris = 0; baris < 3; baris++) {
    for(int kolom = 0; kolom < 4; kolom++) {
        float x_kiri = -0.92f + (kolom * 0.05f);
        float y_atas = -0.15f - (baris * 0.06f);
        float x_kanan = x_kiri + 0.04f;
        float y_bawah = y_atas - 0.04f;
        glRectf(x_kiri, y_atas, x_kanan, y_bawah);
    	}
	}
}

void Pohon(void) {
	//daun
	glColor3f(0.99f, 0.36f, 0.42f); 
	Lingkaran(0.71f, -0.15f, 0.15f);
	//batang
	glColor3f(0.10f, 0.05f, 0.00f);
    glRectf(0.70, -0.15, 0.72, -0.45);
    //ranting kanan
    glPushMatrix();
    	glTranslatef(0.71f, -0.25f, 0.00f);
    	glRotatef(150.0f, 0.00f, 0.00f, 1.00f);
    	glColor3f(0.10f, 0.05f, 0.00f);
    	glRectf(-0.015f, 0.00f, 0.005f, -0.08f);
    glPopMatrix();
    //ranting kiri
    glPushMatrix();
    	glTranslatef(0.71f, -0.25f, 0.00f);
    	glRotatef(-145.0f, 0.00f, 0.00f, 1.00f);
    	glColor3f(0.10f, 0.05f, 0.00f);
    	glRectf(-0.015f, 0.0f, 0.005f, -0.08f);
    glPopMatrix();
}

void PohonLain(void) {
	//pohon 1
    glPushMatrix();
    	glTranslatef(-1.35f, 0.00f, 0.00f);
    	Pohon();
    glPopMatrix();
    //pohon 2
    glPushMatrix();
    	glTranslatef(-0.50f, 0.00f, 0.00f);
    	Pohon();
    glPopMatrix();
}

void LingkaranRoda(float r) {
    glBegin(GL_POLYGON);
    for(int i = 0; i < 100; i++) {
        float angle = 2 * PI * i / 100;
        glVertex2f(cos(angle) * r, sin(angle) * r);
    }
    glEnd();
}

void Mobil(float r, float g, float b) {
    glPushMatrix();
    	glScalef(0.35, 0.60, 1.0);
    	//body mobil
    	glColor3f(r, g, b);
    	glRectf(0.75, 0.05, -0.80, -0.20);
	    glRectf(0.85, 0.05, 0.75, -0.15);
	    glRectf(-0.80, -0.05, -0.90, -0.20);
	    glRectf(-0.75, 0.00, -0.85, -0.10);
	    //atap mobil
	    glColor3f(0.00f, 0.00f, 0.00f);
	    glRectf(0.55, 0.10, -0.45, 0.05);
	    glRectf(0.45, 0.15, -0.35, 0.10);
	    glRectf(0.35, 0.20, -0.25, 0.15);
	    //wing mobil
	    glColor3f(0.00f, 0.00f, 0.00f);
	    glRectf(0.80, 0.15, 0.70, 0.05);
	    glRectf(0.85, 0.15, 0.80, 0.10);
	    //jendela mobil
	    glColor3f(0.85f, 0.91f, 0.99f);
	    glRectf(0.30, 0.10, -0.30, 0.05);
	    glRectf(0.20, 0.15, -0.20, 0.10);
	    //detail mobil
	    glColor3f(0.00f, 0.00f, 0.00f);
	    glRectf(-0.85, -0.10, -0.90, -0.20);
	    glRectf(-0.75, -0.15, -0.85, -0.20);
	    glRectf(0.75, 0.00, 0.70, -0.10);
	    glRectf(0.70, -0.05, 0.65, -0.15);
	    glRectf(-0.15, 0.00, -0.45, -0.05);
	    glRectf(0.30, -0.05, -0.40, -0.10);
	    glRectf(0.00, -0.10, -0.35, -0.15);
		//roda depan
		glPushMatrix();
		    glTranslatef(-0.55, -0.18, 0.00);
		    glRotatef(rotasiRoda, 0.00, 0.00, 1.00);
		    //ban
		   	glColor3f(0.00f, 0.00f, 0.00f);
		   	LingkaranRoda(0.12);
		   	//velg
		   	glColor3f(0.70f, 0.70f, 0.70f);
	    	LingkaranRoda(0.07);
	    	//jari-jari velg
			glColor3f(0.20f, 0.20f, 0.20f); 
	    	glLineWidth(2.00f);
	    	glBegin(GL_LINES);
		   	for(int i = 0; i < 8; i++) {
		   		float angle = i * (2 * PI / 8);
		    	glVertex2f(0.00f, 0.00f);
		    	glVertex2f(cos(angle) * 0.07f, sin(angle) * 0.07f);
		    }
		    glEnd();
		glPopMatrix();
    	//roda belakang
	    glPushMatrix();
	    	glTranslatef(0.45, -0.18, 0.00);
	    	glRotatef(rotasiRoda, 0.00, 0.00, 1.00);
			//ban
		    glColor3f(0.00f, 0.00f, 0.00f);
		    LingkaranRoda(0.12);
		    //velg
		    glColor3f(0.70f, 0.70f, 0.70f);
		    LingkaranRoda(0.07);
			//jari-jari velg
			glColor3f(0.20f, 0.20f, 0.20f); 
		    glLineWidth(2.00f);
		    glBegin(GL_LINES);
		    for(int i = 0; i < 8; i++) {
		    	float angle = i * (2 * PI / 8);
		    	glVertex2f(0.00f, 0.00f);
		   		glVertex2f(cos(angle) * 0.07f, sin(angle) * 0.07f);
		   	}
		   	glEnd();
	    glPopMatrix();
    glPopMatrix();
}

void MobilLain(void) {
    for(int i = 0; i < 3; i++) {
        glPushMatrix();
        	glTranslatef(mobil_x[i], -0.75f, 0.00f);
        	if (i == 0) {
        		//warna orange
            	Mobil(0.88f, 0.36f, 0.00f); 
        	} else if (i == 1) {
        		//warna biru
            	Mobil(0.16f, 0.54f, 0.88f); 
        	} else {
        		//warna pink
            	Mobil(1.00f, 0.46f, 0.80f); 
        	}
        glPopMatrix();
    }
}

void UpdateAnimasi(int value) {
	//awan
    for(int i = 0; i < 3; i++) {
        awan_x[i] += kecepatan;
        if (awan_x[i] > 1.2f) {
			awan_x[i] = -1.0f;	
        }
    }
    //mobil
    for(int i = 0; i < 3; i++) {
    	mobil_x[i] += kecepatan_mobil;
    	if (mobil_x[i] < -1.5f) {
        	mobil_x[i] = 1.5f;
    	}
	}	
	rotasiRoda += 8.0f;

    glutPostRedisplay();
    glutTimerFunc(33, UpdateAnimasi, 0); 
}

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	Langit();
	Bulan();
	Bintang();
	Awan();
	Jalan();
	Gedung();
	Pohon();
	PohonLain();
	MobilLain();
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(960, 540);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Driving Through the City Under a Pink Night Sky");
    glutDisplayFunc(Display);
    glutTimerFunc(0, UpdateAnimasi, 0);
    glClearColor(1.00f, 1.00f, 1.00f, 1.00f);
    glutMainLoop();
    return 0;
}
