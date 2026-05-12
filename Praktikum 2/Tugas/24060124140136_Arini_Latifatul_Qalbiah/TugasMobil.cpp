#include <GL/glut.h>
#include <cmath>

float posisi = -2.0;
float rot = 0;

// fungsi lingkaran (roda)
void drawCircle(float r){
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float rad = i * M_PI / 180;
        glVertex2f(r*cos(rad), r*sin(rad));
    }
    glEnd();
}

void drawCar(){

    // badan mobil (pink)
    glColor3f(1.0, 0.4, 0.7);
    glBegin(GL_QUADS);
        glVertex2f(-0.8,-0.2);
        glVertex2f(0.8,-0.2);
        glVertex2f(0.8,0.2);
        glVertex2f(-0.8,0.2);
    glEnd();

    // atap (pink muda)
    glColor3f(1.0, 0.6, 0.8);
    glBegin(GL_POLYGON);
        glVertex2f(-0.4,0.2);
        glVertex2f(0.4,0.2);
        glVertex2f(0.2,0.5);
        glVertex2f(-0.2,0.5);
    glEnd();

    // jendela (biru muda)
    glColor3f(0.7, 0.9, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.25,0.25);
        glVertex2f(0.25,0.25);
        glVertex2f(0.15,0.45);
        glVertex2f(-0.15,0.45);
    glEnd();

    // roda kiri
    glColor3f(0,0,0);
    glPushMatrix();
        glTranslatef(-0.5,-0.2,0);
        glRotatef(rot,0,0,1);
        drawCircle(0.2);
    glPopMatrix();

    // roda kanan
    glPushMatrix();
        glTranslatef(0.5,-0.2,0);
        glRotatef(rot,0,0,1);
        drawCircle(0.2);
    glPopMatrix();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // jalan (abu-abu)
    glColor3f(0.3,0.3,0.3);
    glBegin(GL_QUADS);
        glVertex2f(-2,-0.5);
        glVertex2f(2,-0.5);
        glVertex2f(2,-1);
        glVertex2f(-2,-1);
    glEnd();

    // garis jalan (putih)
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    for(float i=-2;i<2;i+=0.4){
        glVertex2f(i,-0.75);
        glVertex2f(i+0.2,-0.75);
    }
    glEnd();

    // mobil
    glPushMatrix();
        glTranslatef(posisi,0,0);
        drawCar();
    glPopMatrix();

    glutSwapBuffers();
}

void timer(int){
    posisi += 0.02;
    if(posisi > 2) posisi = -2;

    rot += 5;

    glutPostRedisplay();
    glutTimerFunc(16,timer,0);
}

void init(){
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-2,2,-2,2);
}

int main(int argc, char** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Mobil Pink 2D");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(16,timer,0);

    glutMainLoop();
}
