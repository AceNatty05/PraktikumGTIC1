/* 
 * File        : Emoticon.cpp
 * Deskripsi   : Program OpenGL untuk menampilkan model tangan 3D sederhana
 *               dengan beberapa pose emoticon dan kontrol rotasi tampilan
 * Pembuat     : Aprillia Abel Cleodora
 * Tanggal     : 22 Maret 2026
 */

#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

// Variabel sudut
static int shoulder1 = 0, shoulder2 = 0, shoulder3 = 0;
static int elbow = 0, hand = 0;
static int arm1 = 0, arm2 = 0, arm3 = 0, arm4 = 0, arm5 = 0;

// Rotasi 
int rotateX = 0, rotateY = 0;

// POSE 
void poseOpenHand(){
    arm1 = 0;
    arm2 = 0;
    arm3 = 0;
    arm4 = 0;
    arm5 = 0;
}

void poseThumbsUp(){
    arm1 = 90;
    arm2 = 90;
    arm3 = 90;
    arm4 = 90;
    arm5 = -60;
}

void posePeace(){
    arm1 = 90;
    arm2 = 90;
    arm3 = 0;
    arm4 = 0;
    arm5 = 20;
}

void poseFist(){
    arm1 = 90;
    arm2 = 90;
    arm3 = 90;
    arm4 = 90;
    arm5 = 60;
}

// INIT 
void init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

// DISPLAY
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glScalef(0.45, 0.45, 0.45);

    // ROTASI 
    glRotatef((GLfloat)rotateX, 1.0, 0.0, 0.0);
    glRotatef((GLfloat)rotateY, 0.0, 1.0, 0.0);

    // Shoulder
    glRotatef((GLfloat)shoulder1, 0.0, 1.0, 0.0);
    glRotatef((GLfloat)shoulder2, 1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder3, 0.0, 0.0, 1.0);

    // Lengan atas
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    // Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);

    // Lengan bawah
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    // Pergelangan tangan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)hand, 0.0, 0.0, 1.0);

    // Telapak tangan
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    // JARI 

    // Kelingking
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.4);
    glRotatef((GLfloat)arm1, 0.0, 0.0, 1.0);
    glTranslatef(0.35, 0.0, 0.0);
    glScalef(0.7, 0.4, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

    // Jari manis
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.125);
    glRotatef((GLfloat)arm2, 0.0, 0.0, 1.0);
    glTranslatef(0.4, 0.0, 0.0);
    glScalef(0.8, 0.4, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

    // Jari tengah
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.125);
    glRotatef((GLfloat)arm3, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glScalef(1.0, 0.4, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

    // Telunjuk
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.4);
    glRotatef((GLfloat)arm4, 0.0, 0.0, 1.0);
    glTranslatef(0.4, 0.0, 0.0);
    glScalef(0.8, 0.4, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

    // Ibu jari
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.5);
    glRotatef((GLfloat)arm5, 1.0, 0.0, 0.0);
    glTranslatef(0.0, 0.0, 0.25);
    glScalef(0.4, 0.2, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

// RESHAPE 
	void reshape(int w, int h){
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w/(GLfloat)h, 1.0, 20.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

// KEYBOARD 
void keyboard(unsigned char key, int x, int y){
    switch(key){

        // POSE
        case '1': poseFist(); break;
        case '2': poseThumbsUp(); break;
        case '3': posePeace(); break;
        case '4': poseOpenHand(); break;

        // ROTASI
        case 'j': rotateY -= 5; break;
        case 'l': rotateY += 5; break;
        case 'i': rotateX -= 5; break;
        case 'k': rotateX += 5; break;

        // EXIT
        case 27: exit(0); break;
    }
    glutPostRedisplay();
}

// MAIN 
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Emoticon Alebbyoooo");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
