#include <GL/glut.h>

void Jendela(void)
{
   // membersihkan layar dan men-set dalam format warna
   glClear(GL_COLOR_BUFFER_BIT);
   // memastikan seluruh perintah tereksekusi
   glFlush();
}

int main(int argc, char* argv[])
{
   glutInit(&argc, argv);
   glutInitWindowSize(640, 480);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Mengubah GLUT_RGBA menjadi GLUT_RGB
   glutCreateWindow("biru");
   glutDisplayFunc(Jendela);
   glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
   glutMainLoop();
   return 0;
}
