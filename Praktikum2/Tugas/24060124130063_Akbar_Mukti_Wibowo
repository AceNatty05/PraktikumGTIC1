/* Nama File : mainMobil.cpp
   Pembuat : Akbar Mukti Wibowo/24060124130063
   Tanggal : 11 Maret 2026
*/

#include <GL/glut.h>
#include <math.h>

float putarRoda = 0;

/* LINGKARAN*/
void lingkaran(float r)
{
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        float sudut = i * 3.1416 / 180;
        glVertex2f(cos(sudut)*r, sin(sudut)*r);
    }
    glEnd();
}

/* BINTANG (dari 2 persegi)*/
void bintang(float x,float y)
{
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(1,1,1);

    glBegin(GL_POLYGON);
        glVertex2f(-5,5);
        glVertex2f(5,5);
        glVertex2f(5,-5);
        glVertex2f(-5,-5);
    glEnd();

    glPushMatrix();
    glRotatef(45,0,0,1);

    glBegin(GL_POLYGON);
        glVertex2f(-5,5);
        glVertex2f(5,5);
        glVertex2f(5,-5);
        glVertex2f(-5,-5);
    glEnd();

    glPopMatrix();
    glPopMatrix();
}

/* AWAN (dari kumpulan lingkaran)*/
void awan(float x,float y)
{
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(1,1,1);

    glPushMatrix();
    glTranslatef(0,0,0);
    lingkaran(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,10,0);
    lingkaran(25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,10,0);
    lingkaran(25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,0,0);
    lingkaran(20);
    glPopMatrix();

    glPopMatrix();
}

/* BULAN*/
void bulan()
{
    glPushMatrix();
    glTranslatef(800,550,0);
    glColor3f(0.9,0.9,0.9);
    lingkaran(40);

    // crater bulan
    glColor3f(0.5,0.5,0.5);

    glPushMatrix();
    glTranslatef(-10,10,0);
    lingkaran(6);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(12,-5,0);
    lingkaran(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,15,0);
    lingkaran(4);
    glPopMatrix();

    glPopMatrix();
}

/* POHON*/
void pohon(float x)
{
    glPushMatrix();
    glTranslatef(x,0,0);
    glColor3f(0.55,0.27,0.07);

    glBegin(GL_POLYGON);
    glVertex2f(-10,120);
    glVertex2f(10,120);
    glVertex2f(10,220);
    glVertex2f(-10,220);
    glEnd();

    glColor3f(0,0.5,0);

    glPushMatrix();
    glTranslatef(0,250,0);
    lingkaran(40);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,230,0);
    lingkaran(35);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,230,0);
    lingkaran(35);
    glPopMatrix();

    glPopMatrix();
}

/* JALAN*/
void jalan()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(1000,0);
    glVertex2f(1000,120);
    glVertex2f(0,120);
    glEnd();

    glColor3f(1,1,1);

    for(int i=0;i<1000;i+=120)
    {
        glBegin(GL_POLYGON);
        glVertex2f(i+20,60);
        glVertex2f(i+80,60);
        glVertex2f(i+80,70);
        glVertex2f(i+20,70);
        glEnd();
    }
}

/* RODA*/
void roda()
{
    glColor3f(0,0,0);
    lingkaran(20);

    glColor3f(0.8,0.8,0.8);
    lingkaran(10);

    glBegin(GL_LINES);
    for(int i=0;i<4;i++)
    {
        float sudut = i*90 * 3.1416/180;
        glVertex2f(0,0);
        glVertex2f(cos(sudut)*20,sin(sudut)*20);
    }
    glEnd();
}

/* MOBIL*/
void mobil(float r,float g,float b,float posisiX)
{
    glPushMatrix();
    glTranslatef(posisiX,120,0);
    glColor3f(r,g,b);

    // body
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(180,0);
    glVertex2f(180,50);
    glVertex2f(0,50);
    glEnd();

    // kabin
    glBegin(GL_POLYGON);
    glVertex2f(40,50);
    glVertex2f(120,50);
    glVertex2f(100,90);
    glVertex2f(60,90);
    glEnd();

    // jendela
    glColor3f(0.6,0.9,1);

    glBegin(GL_POLYGON);
    glVertex2f(65,55);
    glVertex2f(115,55);
    glVertex2f(100,85);
    glVertex2f(70,85);
    glEnd();

    // lampu
    glPushMatrix();
    glTranslatef(180,25,0);
    glColor3f(1,1,0);
    lingkaran(5);
    glPopMatrix();

    // roda kiri
    glPushMatrix();
    glTranslatef(50,-5,0);
    glRotatef(putarRoda,0,0,1);
    roda();
    glPopMatrix();

    // roda kanan
    glPushMatrix();
    glTranslatef(140,-5,0);
    glRotatef(putarRoda,0,0,1);
    roda();
    glPopMatrix();

    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    // langit malam
    glColor3f(0.05,0.05,0.2);

    glBegin(GL_POLYGON);
    glVertex2f(0,120);
    glVertex2f(1000,120);
    glVertex2f(1000,700);
    glVertex2f(0,700);
    glEnd();

    bulan();

    // bintang
    bintang(100,600);
    bintang(200,650);
    bintang(300,620);
    bintang(450,660);
    bintang(600,630);
    bintang(750,640);
    bintang(900,610);

    // awan
    awan(150,520);
    awan(400,560);
    awan(650,530);

    pohon(150);
    pohon(350);
    pohon(550);
    pohon(750);

    jalan();

    mobil(1,0,0,150);
    mobil(1,1,0,400);
    mobil(0,1,0,650);

    glutSwapBuffers();
}

/* ROTASI RODA*/
void update(int value)
{
    putarRoda -= 5;
    glutPostRedisplay();
    glutTimerFunc(16,update,0);
}

void init()
{
    glClearColor(0.05,0.05,0.2,1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,1000,0,700);
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000,700);
    glutCreateWindow("Jalan-jalan pake mobil malem malem");

    init();
    glutDisplayFunc(display);
    glutTimerFunc(0,update,0);
    glutMainLoop();
}
