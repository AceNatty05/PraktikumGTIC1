#include <GLUT/glut.h>

void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT); // clear the canvas and replace with a new clear canvas
    glLineWidth(2.0f);  // make a two pixel thick line
    glBegin(GL_LINES); // start of the drawing
    glColor3f(0.0f, 0.0f, 0.0f); // set the colour of the line. red = 1, green = 1, blue = 1 to create the colour white
    glVertex3f(0, 0, 0); // the coordinates of point one
    glVertex3f(0.1, -0.2, 0); // the coordinates of point two
    glEnd(); // end of the drawing
    glFlush(); // send the shape. forces OpenGL to execute all commands immediately 
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv); // initialize the GLUT library
    glutInitWindowSize(640, 480); // set the window size. it's currentlt at 640 x 480 pixel
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // GLUT_SING  LE means one buffer (draws the line straight to the screen). GLUT_RGBA is the colour channel so red, green, blue
    glutCreateWindow("Membuat Garis");
    glutDisplayFunc(Garis); // to get the actual line, we need to run the Garis function
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // this is the colout of the background that's mentioned at the start
    glutMainLoop(); // keeps the window open all the time until ctrl + c is pressed in the terminal to terminate
    return 0;
}