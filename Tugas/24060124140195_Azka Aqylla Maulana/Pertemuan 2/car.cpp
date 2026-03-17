// Nama     : Azka Aqylla Maulana
// NIM      : 24060124140195
// Lab      : C1

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

    glColor3f(red_gl, green_gl, blue_gl);
    
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

// triangle filled
void drawTriangleFilled(float x1, float y1, float x2, float y2, float x3, float y3, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_TRIANGLES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
    glEnd();
}

// triangle outline
void drawTriangleOutline(float x1, float y1, float x2, float y2, float x3, float y3, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_LINE_LOOP);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
    glEnd();
}

// curve filled with colour
void drawCurveFilled(float centre_x, float centre_y, float radius, float start_deg, float end_deg, int segments, float red, float green, float blue){
    float red_gl = red / 255.0f;

    float green_gl = green / 255.0f;

    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_POLYGON);
        glVertex2f(centre_x, centre_y); 
        for (int i = 0; i <= segments; i++){
            float progress = (float)i / (float)segments;
            
            float angle_deg = start_deg + (progress * (end_deg - start_deg));
            
            float theta = angle_deg * M_PI / 180.0f;

            glVertex2f(centre_x + (radius * cosf(theta)), centre_y + (radius * sinf(theta)));
        }
    glEnd();
}

// curve outline
void drawCurveOutline(float centre_x, float centre_y, float radius, float start_deg, float end_deg, int segments, float red, float green, float blue){
    float red_gl = red / 255.0f;
    
    float green_gl = green / 255.0f;
    
    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_LINE_STRIP);
        for (int i = 0; i <= segments; i++){
            float progress = (float)i / (float)segments;
    
            float angle_deg = start_deg + (progress * (end_deg - start_deg));
    
            float theta = angle_deg * M_PI / 180.0f;

            glVertex2f(centre_x + (radius * cosf(theta)), centre_y + (radius * sinf(theta)));
        }
    glEnd();
}

// custom quad filled (for slanted shapes)
void drawQuadFilled(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float red, float green, float blue){
    float red_gl = red / 255.0f;
    
    float green_gl = green / 255.0f;
    
    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);

    glBegin(GL_POLYGON);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
        glVertex2f(x4, y4);
    glEnd();
}

// line with thickness
void drawLine(float x1, float y1, float x2, float y2, float red, float green, float blue, float thickness){
    float red_gl = red / 255.0f;
    
    float green_gl = green / 255.0f;
    
    float blue_gl = blue / 255.0f;

    glColor3f(red_gl, green_gl, blue_gl);
    glLineWidth(thickness);

    glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    glEnd();
}

// clouds
void drawCloud(float x, float y) {
    // colour is set to white
    drawCircleFilled(x, y, 1.2, 30, 255, 255, 255);                 // centre puff
    drawCircleFilled(x - 1.0f, y - 0.3f, 0.8, 30, 255, 255, 255);   // left puff
    drawCircleFilled(x + 1.0f, y - 0.3f, 0.9, 30, 255, 255, 255);   // right puff
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

    // the sky
        
        // base sky
        drawRectangleFilled(-10, -3, 10, 10, 135, 206, 235);

        // cloud
        glPushMatrix();
        // it's gonna start from off the screen
            for (float x = -12.0f; x <= 12.0f; x += 6.0f) {
                float yOffset = 7.0f + (sinf(x) * 1.5f); 
                drawCloud(x, yOffset);
            }
        glPopMatrix();

    // road

        // just a slab of greyish matter for the road base
        drawRectangleFilled(-10, -10, 10, -3, 70, 70, 70);

        // road lining
        glPushMatrix();
            glTranslatef(-9.0f, -6.5f, 0.0f); 
            for (int i = 0; i < 5; i++) {
                drawRectangleFilled(0, 0, 2, 0.2, 255, 255, 255);
                glTranslatef(4.0f, 0.0f, 0.0f);
            }
        glPopMatrix();

    // trees
    glPushMatrix();
        glTranslatef(-8.0f, -3.0f, 0.0f); 
        drawRectangleFilled(-0.2, 0, 0.2, 6.0, 101, 67, 33); 
        drawCircleFilled(0, 6.0, 2.0, 30, 34, 139, 34);      
    glPopMatrix();

    glPushMatrix();
        glTranslatef(8.0f, -3.0f, 0.0f); 
        drawRectangleFilled(-0.2, 0, 0.2, 6.0, 101, 67, 33); 
        drawCircleFilled(0, 6.0, 2.0, 30, 34, 139, 34);      
    glPopMatrix();

    // car
    glPushMatrix();
        // changing the cra's posisint
        glTranslatef(0.0f, -4.0f, 0.0f); 

        // base car
        drawRectangleFilled(-7, 0, 4, 5, 220, 220, 220);
        drawTriangleFilled(4, 5, 4, 2, 7, 2, 220, 220, 220);
        drawRectangleFilled(4, 0, 7, 2, 220, 220, 220);
        drawCurveFilled(7, 1, 1, 90, -90, 100, 220, 220, 220);
        
        // wheels
        // front wheel
        drawCircleFilled(5, 0, 1, 100, 0, 0, 0); 

        // rear wheel
        drawCircleFilled(-4, 0, 1, 100, 0, 0, 0);

        // windows
        drawTriangleFilled(4, 4, 4, 2, 6, 2, 168, 204, 215);

    glPopMatrix();

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
