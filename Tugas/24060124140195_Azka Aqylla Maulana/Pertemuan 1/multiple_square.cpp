#include <GLUT/glut.h>

void drawGrid() {
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    
    for (float i = -1.0f; i <= 1.0f; i += 0.1f) {
        int check = (int)(i * 10.5f); 
        if (check % 2 == 0) {
            glColor3f(0.8f, 0.8f, 0.8f); 
        } else {
            glColor3f(0.9f, 0.9f, 0.9f); 
        }

        glVertex2f(i, -1.0f);
        glVertex2f(i, 1.0f);

        glVertex2f(-1.0f, i);
        glVertex2f(1.0f, i);
    }
    
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f); glVertex2f(1.0f, 0.0f); // x axis
    glVertex2f(0.0f, -1.0f); glVertex2f(0.0f, 1.0f); // y axis
    glEnd();
}


void drawSquare(float x, float y, float size, float red, float green, float blue){
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
        glVertex2f(x - size, y - size); // bottome left
        glVertex2f(x + size, y - size); // bottom right
        glVertex2f(x + size, y + size); // top right
        glVertex2f(x - size, y + size); // top left
    glEnd();
}

void drawRectangle(float x, float y, float width, float height, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
        glVertex2f(x - width, y - height); // bottom Left
        glVertex2f(x + width, y - height); // bottom Right
        glVertex2f(x + width, y + height); // top Right
        glVertex2f(x - width, y + height); // top Left
    glEnd();
}

void drawRightAngledTriangle(float x, float y, float size, float red, float green, float blue){
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLES);
        glVertex2f(x, y); // corner _|
        glVertex2f(x, y + size); // top i think
        glVertex2f(x + size, y); // the last point or side or whatnot
    glEnd();
}

// make a slime creature
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    // grid helper
    // drawGrid();

    // skin colour of the slime
    drawSquare(0.0f, 0.0f, 0.6f, 0.678f, 0.847f, 0.901f); 

    // some shaping of the head
    drawSquare(-0.5f, 0.5f, 0.1f, 1, 1, 1);
    drawSquare(0.4f, 0.5f, 0.1f, 1, 1, 1);
    drawSquare(0.44f, 0.5f, 0.1f, 1, 1, 1);
    drawSquare(0.46f, 0.5f, 0.1f, 1, 1, 1);
    drawSquare(0.48f, 0.5f, 0.1f, 1, 1, 1);
    drawSquare(0.46f, 0.3f, 0.1f, 1, 1, 1);
    drawSquare(0.8f, 0.3f, 0.3f, 1, 1, 1);
    drawSquare(0.6f, -0.1f, 0.1f, 1, 1, 1);
    drawSquare(-0.6f, 0.3f, 0.1f, 1, 1, 1);
    drawSquare(0.5f, 0.2f, 0.1f, 1, 1, 1);
    drawSquare(0.3f, 0.6f, 0.1f, 1, 1, 1);

    // left eye
    drawSquare(0.03f, 0.2f, 0.1f, 0.36f, 0.25f, 0.20f); 
    // white part of the left eye
    drawSquare(0.09f, 0.2f, 0.04f, 1, 1, 1); 
    drawSquare(0.09f, 0.27f, 0.04f, 1, 1, 1); 
    drawSquare(0.09f, 0.13f, 0.04f, 1, 1, 1); 

    // right eye
    drawSquare(-0.35f, 0.2f, 0.1f, 0.36f, 0.25f, 0.20f); 
    // white part of the righteye
    drawSquare(-0.41f, 0.2f, 0.04f, 1, 1, 1); 
    drawSquare(-0.41f, 0.27f, 0.04f, 1, 1, 1); 
    drawSquare(-0.41f, 0.13f, 0.04f, 1, 1, 1); 

    // mouth
    drawSquare(-0.15f, -0.3f, 0.09f, 0.36f, 0.25f, 0.20f); 
    drawSquare(-0.15f, -0.26f, 0.03f, 0.678f, 0.847f, 0.901f); 
    drawSquare(-0.15f, -0.23f, 0.03f, 0.678f, 0.847f, 0.901f); 

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Slime");
    glutDisplayFunc(display); 
    glClearColor(1.0, 1.0, 1.0, 1.0); 
    glutMainLoop(); 
    return 0;
}