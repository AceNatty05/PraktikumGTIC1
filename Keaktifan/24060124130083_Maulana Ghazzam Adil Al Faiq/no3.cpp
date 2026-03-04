#include <GL/glut.h>
#define WINDOW_X 600
#define WINDOW_Y 600
#define BITPOINTSIZE 0.05

void placeBit(float x, float y) {
    glColor3f(0, 0, 0);
    glRectf(x * BITPOINTSIZE - 1, 1 - y * BITPOINTSIZE, (x + 1) * BITPOINTSIZE - 1, 1 - (y + 1) * BITPOINTSIZE);
}

float floatRGB(int x) {
	return (float)x / 255;
}

void placeLineBit(float x_start, float x_end, float y) {
	for (int i = x_start; i <= x_end; i++) {placeBit(i, y);}
}

void displayFih(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	// y = 5
	placeLineBit(5, 14, 5);
	placeLineBit(23, 33, 5);

	// y = 6
	placeBit(5, 6);
	placeBit(14, 6);
	placeBit(15, 6);
	placeBit(22, 6);
	placeBit(23, 6);
	placeBit(33, 6);
	
	// y = 7
	placeBit(15, 7);
	placeBit(16, 7);
	placeBit(21, 7);
	placeBit(22, 7);
	placeBit(33, 7);
	
	// y = 7
	placeBit(15, 7);
	placeBit(16, 7);
	placeBit(21, 7);
	placeBit(22, 7);
	placeBit(33, 7);
	
	// y = 8
	placeBit(15, 8);
	placeBit(21, 8);
	
	// y = 9
	placeLineBit(8, 15, 9);
	placeBit(21, 9);
	placeLineBit(25, 32, 9);
	
	// y = 10
	placeBit(7, 10);
	placeBit(8, 10);
	placeBit(11, 10);
	placeBit(12, 10);
	placeBit(13, 10);
	placeBit(28, 10);
	placeBit(29, 10);
	placeBit(32, 10);
	
	// y = 11
	placeBit(7, 11);
	
	// y = 12 - 18 (sekalian ajalah jir)
	placeBit(22, 12);
	for (int i = 12; i <= 14; i++) {placeBit(23, i);}
	for (int i = 14; i <= 16; i++) {placeBit(24, i);}
	for (int i = 16; i <= 17; i++) {placeBit(25, i);}
	for (int i = 17; i <= 18; i++) {placeBit(26, i);}
	
	// y = 21
	placeLineBit(20, 26, 21);
	
	// y = 22
	placeLineBit(23, 27, 22);
	
	// y = 23
	placeBit(27, 23); 
	
	// y = 27
	placeLineBit(19, 27, 27);
	
	// y = 28
	placeLineBit(18, 28, 28);
	
	// y = 29
	placeLineBit(17, 19, 29);
	placeLineBit(28, 30, 29);
	
	// y = 30
	placeBit(17, 30);
	placeBit(18, 30);
	
	// y = 31
	placeBit(19, 31);
	placeBit(29, 31);
	placeBit(30, 31);
	
	// y = 32
	placeLineBit(20, 24, 32);
	placeBit(28, 32);
	placeBit(29, 32);
	
	// y = 33
	placeLineBit(21, 28, 33);
	
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(WINDOW_X, WINDOW_Y);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Chow Kow Wie");
    glutDisplayFunc(displayFih);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
