#include <GL/glut.h>
#include <cmath>

const int   WIN_W   = 900;
const int   WIN_H   = 550;
const float PI      = 3.14159265f;

void setColor(int r, int g, int b)
{
    glColor3f(r / 255.f, g / 255.f, b / 255.f);
}

void drawRect(float cx, float cy, float w, float h)
{
    float hw = w / 2.f, hh = h / 2.f;
    glBegin(GL_QUADS);
        glVertex2f(cx - hw, cy - hh);
        glVertex2f(cx + hw, cy - hh);
        glVertex2f(cx + hw, cy + hh);
        glVertex2f(cx - hw, cy + hh);
    glEnd();
}

void drawCircle(float cx, float cy, float r, int seg = 64)
{
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(cx, cy);
        for (int i = 0; i <= seg; ++i) {
            float a = 2.f * PI * i / seg;
            glVertex2f(cx + r * cosf(a), cy + r * sinf(a));
        }
    glEnd();
}

void drawCircleOutline(float cx, float cy, float r, int seg = 64)
{
    glBegin(GL_LINE_LOOP);
        for (int i = 0; i < seg; ++i) {
            float a = 2.f * PI * i / seg;
            glVertex2f(cx + r * cosf(a), cy + r * sinf(a));
        }
    glEnd();
}

void drawTrapezoid(float cx, float cy, float topW, float botW, float h)
{
    float htw = topW / 2.f, hbw = botW / 2.f, hh = h / 2.f;
    glBegin(GL_QUADS);
        glVertex2f(cx - hbw, cy - hh);
        glVertex2f(cx + hbw, cy - hh);
        glVertex2f(cx + htw, cy + hh);
        glVertex2f(cx - htw, cy + hh);
    glEnd();
}

void drawWheel(float cx, float cy, float R)
{
    glPushMatrix();
    glTranslatef(cx, cy, 0.f);

    setColor(30, 30, 30);
    drawCircle(0, 0, R);

    float rimR = R * 0.68f;
    setColor(180, 180, 185);
    drawCircle(0, 0, rimR);

    setColor(130, 130, 135);
    glLineWidth(3.f);
    for (int i = 0; i < 5; ++i) {
        glPushMatrix();
        glRotatef(i * 72.f, 0, 0, 1);
        glBegin(GL_LINES);
            glVertex2f(0, 0);
            glVertex2f(0, rimR * 0.85f);
        glEnd();
        glPopMatrix();
    }

    setColor(80, 80, 85);
    drawCircle(0, 0, R * 0.18f);

    setColor(15, 15, 15);
    glLineWidth(2.f);
    drawCircleOutline(0, 0, R);

    glPopMatrix();
}

void drawHeadlight(float cx, float cy, float r)
{
    glPushMatrix();
    glTranslatef(cx, cy, 0.f);
    setColor(255, 250, 200);
    drawCircle(0, 0, r);
    setColor(200, 180, 50);
    glLineWidth(1.5f);
    drawCircleOutline(0, 0, r);
    glPopMatrix();
}

void drawTaillight(float cx, float cy, float r)
{
    glPushMatrix();
    glTranslatef(cx, cy, 0.f);
    setColor(200, 30, 20);
    drawCircle(0, 0, r);
    setColor(140, 20, 10);
    glLineWidth(1.5f);
    drawCircleOutline(0, 0, r);
    glPopMatrix();
}

void drawWindow(float cx, float cy, float w, float h)
{
    glPushMatrix();
    glTranslatef(cx, cy, 0.f);
    setColor(160, 210, 240);
    drawRect(0, 0, w, h);
    setColor(50, 55, 65);
    glLineWidth(2.f);
    float hw = w / 2.f, hh = h / 2.f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(-hw, -hh);
        glVertex2f( hw, -hh);
        glVertex2f( hw,  hh);
        glVertex2f(-hw,  hh);
    glEnd();
    glPopMatrix();
}

void drawBackground()
{
    setColor(135, 196, 250);
    drawRect(WIN_W / 2.f, WIN_H / 2.f + 60.f, (float)WIN_W, (float)WIN_H - 120.f);

    setColor(80, 160, 60);
    drawRect(WIN_W / 2.f, 60.f, (float)WIN_W, 120.f);

    setColor(90, 90, 95);
    drawRect(WIN_W / 2.f, 90.f, (float)WIN_W, 70.f);

    setColor(255, 255, 200);
    glLineWidth(3.f);
    glBegin(GL_LINES);
    for (int x = 0; x < WIN_W; x += 80) {
        glVertex2f((float)x,        90.f);
        glVertex2f((float)x + 40.f, 90.f);
    }
    glEnd();

    glPushMatrix();
    glTranslatef(820.f, 460.f, 0.f);
    setColor(255, 220, 50);
    drawCircle(0, 0, 45);
    setColor(255, 230, 80);
    glLineWidth(2.5f);
    for (int i = 0; i < 8; ++i) {
        glPushMatrix();
        glRotatef(i * 45.f, 0, 0, 1);
        glBegin(GL_LINES);
            glVertex2f(0, 50.f);
            glVertex2f(0, 70.f);
        glEnd();
        glPopMatrix();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150.f, 470.f, 0.f);
    setColor(240, 240, 245);
    drawCircle(-30, 0, 28);
    drawCircle(  0, 8, 36);
    drawCircle( 30, 0, 28);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(550.f, 490.f, 0.f);
    setColor(240, 240, 245);
    drawCircle(-25, 0, 22);
    drawCircle(  0, 7, 30);
    drawCircle( 25, 0, 22);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(60.f, 125.f, 0.f);
    setColor(100, 65, 30);
    drawRect(0, 0, 14, 50);
    setColor(40, 130, 50);
    drawCircle(0, 35, 32);
    drawCircle(0, 55, 25);
    drawCircle(0, 72, 18);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(840.f, 125.f, 0.f);
    setColor(100, 65, 30);
    drawRect(0, 0, 14, 50);
    setColor(40, 130, 50);
    drawCircle(0, 35, 32);
    drawCircle(0, 55, 25);
    drawCircle(0, 72, 18);
    glPopMatrix();
}

void drawCar(float carX, float carY)
{
    const float bodyW  = 320.f;
    const float bodyH  =  90.f;
    const float cabinW = 210.f;
    const float cabinH =  80.f;
    const float wheelR =  38.f;
    const float wheelY = carY - bodyH / 2.f;

    glPushMatrix();
    glTranslatef(carX, carY, 0.f);

    setColor(50, 55, 65);
    glPushMatrix();
    glTranslatef(bodyW / 2.f - 10.f, -10.f, 0.f);
    drawRect(0, 0, 20.f, 30.f);
    glPopMatrix();

    setColor(50, 55, 65);
    glPushMatrix();
    glTranslatef(-bodyW / 2.f + 10.f, -10.f, 0.f);
    drawRect(0, 0, 20.f, 30.f);
    glPopMatrix();

    setColor(220, 50, 50);
    drawRect(0.f, 0.f, bodyW, bodyH);

    glPushMatrix();
    glTranslatef(0.f, bodyH / 2.f + cabinH / 2.f, 0.f);
    setColor(210, 45, 45);
    drawTrapezoid(0.f, 0.f, cabinW * 0.85f, cabinW, cabinH);
    drawWindow( 55.f, 5.f, 70.f, 55.f);
    drawWindow(-55.f, 5.f, 70.f, 55.f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(bodyW / 2.f - 15.f, 15.f, 0.f);
    drawHeadlight(0, 0, 12.f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-bodyW / 2.f + 15.f, 15.f, 0.f);
    drawTaillight(0, 0, 12.f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(bodyW / 2.f * 0.6f, bodyH / 2.f + 2.f, 0.f);
    setColor(180, 40, 40);
    drawRect(0, 0, 22.f, 10.f);
    setColor(160, 210, 240);
    drawRect(0, 0, 16.f, 7.f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-bodyW / 2.f * 0.6f, bodyH / 2.f + 2.f, 0.f);
    setColor(180, 40, 40);
    drawRect(0, 0, 22.f, 10.f);
    setColor(160, 210, 240);
    drawRect(0, 0, 16.f, 7.f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-bodyW / 2.f, -bodyH / 2.f + 12.f, 0.f);
    setColor(120, 120, 125);
    drawRect(-8.f, 0, 20.f, 8.f);
    setColor(90, 90, 95);
    drawCircle(-18.f, 0, 5.f);
    glPopMatrix();

    glPopMatrix();

    float frontX = carX + 95.f;
    float rearX  = carX - 95.f;
    drawWheel(frontX, wheelY, wheelR);
    drawWheel(rearX,  wheelY, wheelR);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawBackground();
    drawCar(440.f, 163.f);
    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (double)WIN_W, 0.0, (double)WIN_H);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(WIN_W, WIN_H);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Mobil 2D");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}


