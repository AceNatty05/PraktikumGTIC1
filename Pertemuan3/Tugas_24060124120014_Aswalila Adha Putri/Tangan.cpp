#include <GL/glut.h>
#include <stdlib.h>

// sudut rotasi tiap sendi
static int shoulder=0, elbow=0, wrist=0;
static int finger1a=0,finger1b=0,finger1c=0;
static int finger2a=0,finger2b=0,finger2c=0;
static int finger3a=0,finger3b=0,finger3c=0;
static int finger4a=0,finger4b=0,finger4c=0;
static int thumbA=0,thumbB=0; // ibu jari hanya 2 ruas

// inisialisasi warna latar & shading
void init(){
    glClearColor(0,0,0,0);
    glShadeModel(GL_FLAT);
}

// prosedur untuk menggambar jari dengan 3 ruas
void drawFinger(float y, int a, int b, int c){
    glPushMatrix();
        glTranslatef(0.0,y,0.0);

        // ruas 1
        glRotatef(a,0,0,1);
        glTranslatef(0.25,0,0);
        glPushMatrix();
            glScalef(0.5,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();

        // ruas 2
        glTranslatef(0.25,0,0);
        glRotatef(b,0,0,1);
        glTranslatef(0.25,0,0);
        glPushMatrix();
            glScalef(0.5,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();

        // ruas 3
        glTranslatef(0.25,0,0);
        glRotatef(c,0,0,1);
        glTranslatef(0.25,0,0);
        glPushMatrix();
            glScalef(0.5,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix();
}

// prosedur untuk menggambar ibu jari dengan 2 ruas
void drawThumb(int a, int b){
    glPushMatrix();
        // ruas 1
        glRotatef(a,0,0,1);
        glTranslatef(0.25,0,0);
        glPushMatrix();
            glScalef(0.5,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();

        // ruas 2
        glTranslatef(0.25,0,0);
        glRotatef(b,0,0,1);
        glTranslatef(0.25,0,0);
        glPushMatrix();
            glScalef(0.5,0.1,0.1);
            glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix();
}

// prosedur untuk menggambar seluruh lengan
// strukturnya itu ada bahu -> siku -> pergelangan -> telapak -> jari
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

        // Bahu
        glTranslatef(-1,0,0);
        glRotatef(shoulder,0,0,1);
        glTranslatef(1,0,0);
        glPushMatrix();
            glScalef(2,0.4,1);
            glutWireCube(1);
        glPopMatrix();

        // Siku
        glTranslatef(1,0,0);
        glRotatef(elbow,0,0,1);
        glTranslatef(1,0,0);
        glPushMatrix();
            glScalef(2,0.4,1);
            glutWireCube(1);
        glPopMatrix();

        // Pergelangan
        glTranslatef(1,0,0);
        glRotatef(wrist,0,0,1);

        // Telapak
        glPushMatrix();
            glScalef(0.8,0.6,0.3);
            glutWireCube(1);
        glPopMatrix();
        glTranslatef(0.5,0,0);

        // Jari-jari (3 ruas)
        drawFinger( 0.25, finger1a,finger1b,finger1c);
        drawFinger( 0.10, finger2a,finger2b,finger2c);
        drawFinger(-0.10, finger3a,finger3b,finger3c);
        drawFinger(-0.25, finger4a,finger4b,finger4c);

        // Ibu jari (2 ruas)
        glPushMatrix();
            glTranslatef(0,-0.35,0);
            glRotatef(-40,0,0,1);
            drawThumb(thumbA, thumbB);
        glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

// prosedur reshape untuk mengatur viewport & proyeksi
void reshape(int w,int h){
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0,(GLfloat)w/(GLfloat)h,1.0,20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0,0,-5);
}

// prosedur keyboard handler untuk menangani input tombol, setiap tombol mengubah sudut rotasi sendi/jari
void keyboard(unsigned char key,int x,int y){
    switch(key){
        // untuk bahu, siku, pergelangan
        case 's': shoulder+=5; break;
        case 'S': shoulder-=5; break;
        case 'e': elbow+=5; break;
        case 'E': elbow-=5; break;
        case 'w': wrist+=5; break;
        case 'W': wrist-=5; break;

        // jari telunjuk (3 ruas)
        case '1': finger1a+=5; break;
        case '!': finger1b+=5; break;
        case 'q': finger1c+=5; break;

        // jari tengah (3 ruas)
        case '2': finger2a+=5; break;
        case '@': finger2b+=5; break;
        case 'a': finger2c+=5; break;

        // jari manis (3 ruas)
        case '3': finger3a+=5; break;
        case '#': finger3b+=5; break;
        case 'z': finger3c+=5; break;

        // jari kelingking (3 ruas)
        case '4': finger4a+=5; break;
        case '$': finger4b+=5; break;
        case 'x': finger4c+=5; break;

        // ibu jari (2 ruas)
        case '5': thumbA+=5; break;
        case '%': thumbB+=5; break;

        case 27: exit(0); break; 
        default: break;
    }
    glutPostRedisplay();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(900,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Aswalila Adha Putri");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
