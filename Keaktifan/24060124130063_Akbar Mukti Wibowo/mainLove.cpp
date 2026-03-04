// Nama File : mainLove.cpp
// Deskripsi : berisi fungsi dan main untuk menampilkan 10 segi empat persegi panjang yg digabung membentuk love
// Pembuat : Akbar Mukti Wibowo
// Tanggal : 4 Maret 2026

#include <GL/glut.h>

void Love(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);

    // baris atas
    glRectf(-0.3, 0.3, -0.1, 0.1);
    glRectf(0.1, 0.3, 0.3, 0.1);

    // baris kedua
    glRectf(-0.4, 0.1, -0.2, -0.1);
    glRectf(-0.2, 0.1, 0.0, -0.1);
    glRectf(0.0, 0.1, 0.2, -0.1);
    glRectf(0.2, 0.1, 0.4, -0.1);

    // baris ketiga
    glRectf(-0.3, -0.1, -0.1, -0.3);
    glRectf(-0.1, -0.1, 0.1, -0.3);
    glRectf(0.1, -0.1, 0.3, -0.3);

    // baris bawah
    glRectf(-0.1, -0.3, 0.1, -0.5);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Aku buat love kak");
    glutDisplayFunc(Love);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
