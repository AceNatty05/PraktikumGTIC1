// 4. Menggambar lingkaran di tengah

// bikin snowflake
#include <GL/glut.h>

int sisi = 8;   // jumlah sisi (minimal 4)

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix(); // stack utama

    for(int i = 0; i < sisi; i++) {

        glPushMatrix();                 // stack rotasi
        glRotatef(i * (360.0/sisi),0,0,1);  // rotasi terhadap pusat

        // satu garis dari pusat
        glBegin(GL_LINES);
            glVertex2f(0.0,0.0);
            glVertex2f(0.8,0.0);
        glEnd();

        glPopMatrix();
    }

    glPopMatrix();

    glutSwapBuffers();
}

void init() {
    glClearColor(1,1,1,1);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1,1,-1,1);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Snowflake / Spider Web");

    init();

    glutDisplayFunc(display);

    glutMainLoop();
}
