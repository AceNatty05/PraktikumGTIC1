#include <gl/glut.h>
void grid(){
    GLfloat i;
    for(i=-1.00;i<1;i = i + 0.10){
        glLineWidth(1.0f);
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,1.0f); //warna
        glVertex3f(0.00 + i, 1.00, 0.0);
        glVertex3f(0.00 + i, -1.00, 0.0);
        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,1.0f); //warna
        glVertex3f(1.00, i, 0.0);
        glVertex3f(-1.00, i, 0.0);
        glEnd();
        glFlush();
    }
}
void square1(GLfloat x, GLfloat y,GLfloat size,GLfloat R, GLfloat G, GLfloat B){
    glColor3f(R/255,G/255,B/255);
    glRectf(-size + x/10,size + y/10,size + x/10,-size + y/10);
    glEnd();
}
void Jendela(void){
    GLfloat i;
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan layar dan set dalam format warna
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
    square1(0,0,1, 45,29,56); //cover1
    
    square1(0,0,0.55, 54,37,71); //mata0
//    for(i=-10;i<=11;i = i + 7){
//        square1(i,0,0.3, 54,37,71); //cermin0
//    }
//    for(i=-10;i<=11;i = i + 4){
//        square1(i,0,0.25, 54,37,71); //cermin0
//    }
    
    square1(0,0,0.5, 111,34,96); //mata1
//    for(i=-10;i<=10;i = i + 5){
//        square1(i,0,0.2, 111,34,96); //cermin1
//    }
//    for(i=-10;i<=10;i = i + 3){
//        square1(i,0,0.15, 111,34,96); //cermin1
//    }
    
    square1(0,0,0.45, 164,49,97); //mata2
//    for(i=-10;i<=11;i = i + 3){
//        square1(i,0,0.1, 164,49,97); //cermin2
//    }
//    for(i=-10;i<=11;i = i + 1.5){
//        square1(i,0,0.07, 164,49,97); //cermin2
//    }
    
    square1(0,0,0.4, 230,52,60); //mata3
//    for(i=-10;i<=11;i = i + 1.7){
//        square1(i,0,0.05, 230,52,60); //cermin3
//    }
//    for(i=-10;i<=11;i = i + 0.6){
//        square1(i,0,0.03, 230,52,60); //cermin3
//    }
//    
    square1(0,0,0.3, 239,103,81); //mata4
//    for(i=-7;i<=7;i = i + 0.75){
//        square1(i,0,0.020, 239,103,81); //cermin4
//    }
//    for(i=-8;i<=8;i = i + 0.1){
//        square1(i,0,0.010, 239,103,81); //cermin4
//    }
    square1(0,0,0.2, 249,209,113); //mata5
    //square1(0,-10,1, 45,29,56); //cover2
//    square1(0,7,0.2, 239,103,81); //awan
//    square1(3,5,0.1, 239,103,81); //awan
//    square1(-3,5.5,0.15, 239,103,81); //awan
    square1(0,0,0.05, 45,29,56);
    square1(0.25,0,0.007, 254,254,254);
    square1(0.2,0,0.007, 254,254,254);
    square1(-0.25,0,0.007, 254,254,254);
    square1(-0.2,0,0.007, 254,254,254);
    square1(0,-1,0.05, 45,29,56);
    square1(0,-2,0.05, 45,29,56);
    square1(0.5,-1,0.05, 45,29,56);
    square1(0.5,-1.5,0.05, 45,29,56);
    square1(-0.5,-1,0.05, 45,29,56);
    square1(-0.5,-1.5,0.05, 45,29,56);
    square1(0,-3,0.05, 45,29,56);
    square1(0,-4,0.05, 111,34,96);
    square1(0,-4.5,0.05, 54,37,71);
    square1(0.5,-5,0.05, 45,29,56);
    square1(-0.5,-5,0.05, 45,29,56);
    //grid();
    glFlush(); //pastikan seluruh perintah eksekusi
}
int main(int argc, char * argv[]){
    glutInit(&argc,argv);
    glutInitWindowSize(480,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("main"); //tulisan atas window
    glutDisplayFunc(Jendela); //panggil
    glutMainLoop();
    return 0;
}
