#include <GLUT/glut.h>
#include <cmath>

// grid helper for drawing
void drawGrid() {
    glColor3ub(230, 230, 230); 
    glLineWidth(1.0f);
    glBegin(GL_LINES);
        for (int i = -10; i <= 10; i++) {
            // vertical lines
            glVertex2f((float)i, -10.0f);

            glVertex2f((float)i, 10.0f);
            
            // horizontal lines
            glVertex2f(-10.0f, (float)i);

            glVertex2f(10.0f, (float)i);
        }
    glEnd();

    glColor3ub(150, 150, 150);

    glBegin(GL_LINES);
        glVertex2f(0.0f, -10.0f); glVertex2f(0.0f, 10.0f);
        glVertex2f(-10.0f, 0.0f); glVertex2f(10.0f, 0.0f);
    glEnd();

    glPointSize(3.0f); 

    glColor3ub(100, 100, 100); 

    glBegin(GL_POINTS);
        for (int x = -10; x <= 10; x++) {
            for (int y = -10; y <= 10; y++) {
                glVertex2f((float)x, (float)y);
            }
        }
    glEnd();
}

// filled circles
void drawCircleFilled(float centre_x, float centre_y, float radius, float segments, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);
    
    glBegin(GL_POLYGON);
        for (int i = 0; i < segments; i++){
            float theta = 2.0f * M_PI * (float)i / (float)segments;

            float x_axis = centre_x + (radius * cosf(theta));

            float y_axis = centre_y + (radius * sinf(theta));

            glVertex2f(x_axis, y_axis);
        }
    glEnd();
}

// outline of circles
void drawCircleOutline(float centre_x, float centre_y, float radius, float segments, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);
    
    glBegin(GL_LINE_LOOP);
        for (int i = 0; i < segments; i++){
            float theta = 2.0f * M_PI * (float)i / (float)segments;

            float x_axis = centre_x + (radius * cosf(theta));

            float y_axis = centre_y + (radius * sinf(theta));

            glVertex2f(x_axis, y_axis);
        }
        
    glEnd();
}

// rectangle filled with colour
void drawRectangleFilled(float x_bottom_left, float y_bottom_left, float x_top_right, float y_top_right, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;
    
    glBegin(GL_POLYGON);
        glVertex2f(x_bottom_left, y_bottom_left);   // bottom left corner
        glVertex2f(x_bottom_left, y_top_right);     // top left corner
        glVertex2f(x_top_right, y_top_right);       // top right corner
        glVertex2f(x_top_right, y_bottom_left);     // bottom right corner
    glEnd();
}

// rectangle outline
void drawRectangleOutline(float x_bottom_left, float y_bottom_left, float x_top_right, float y_top_right, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_LINE_LOOP);
        glVertex2f(x_bottom_left, y_bottom_left);   // bottom left corner
        glVertex2f(x_bottom_left, y_top_right);     // top left corner
        glVertex2f(x_top_right, y_top_right);       // top right corner
        glVertex2f(x_top_right, y_bottom_left);     // bottom right corner
    glEnd();
}

// this is only for setting the canvas so that i can do the range from -10 to 10 since i dont want to do decimal point thingy
void init(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0);
}

// display
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    // just for helper that can be toggled off by removing it or //
    drawGrid();

    glFlush();
}

// main
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Car");
    init();
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
