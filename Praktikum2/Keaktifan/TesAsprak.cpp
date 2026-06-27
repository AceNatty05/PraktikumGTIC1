/*Nama File : snowFlake.cpp
  Dibuat oleh : Akbar Mukti Wibowo
  Tanggal : 11 Maret 2026*/

#include <GL/glut.h>
#include <math.h>

void Hexagon() {
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 6; i++) {
        float angle = 2 * M_PI * i / 6;
        glVertex2f(0.1 * cos(angle), 0.1 * sin(angle));
    }
    glEnd();
}

void drawRanting() {
    glBegin(GL_LINES);

    glVertex2f(0,0);
    glVertex2f(0,0.6);

    glVertex2f(0,0.25);
    glVertex2f(0.12,0.35);

    glVertex2f(0,0.25);
    glVertex2f(-0.12,0.35);

    glVertex2f(0,0.45);
    glVertex2f(0.12,0.55);

    glVertex2f(0,0.45);
    glVertex2f(-0.12,0.55);

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    Hexagon();

    for(int i = 0; i < 6; i++) {
        drawRanting();
        glRotatef(60,0,0,1);
    }

    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutCreateWindow("Snowflake");

    glClearColor(1,1,1,1);
    glColor3f(0.5,0.8,0.7);
    glLineWidth(3);
    
    glutDisplayFunc(display);
    glutMainLoop();
}
