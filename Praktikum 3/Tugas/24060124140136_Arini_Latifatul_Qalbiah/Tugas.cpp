#include <GL/glut.h> 
#include <stdlib.h> 
 
// Rotasi utama 
static int shoulder = 0, elbow = 0, wrist = 0; 
 
// Jari 2 ruas 
static int fingerBase = 0; // ruas pertama 
static int fingerTip  = 0; // ruas kedua 
 
void init(void) { 
    glClearColor(0.0, 0.0, 0.0, 0.0); 
    glShadeModel(GL_FLAT); 
} 
 
void display(void) { 
    glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix(); 
 
    // ===== SHOULDER ===== 
    glTranslatef(-1.0, 0.0, 0.0); 
    glRotatef((GLfloat) shoulder, 0.0, 0.0, 1.0); 
    glTranslatef(1.0, 0.0, 0.0); 
 
    // Lengan atas 
    glPushMatrix(); 
    glScalef(2.0, 0.4, 1.0); 
    glutWireCube(1.0); 
    glPopMatrix(); 
 
    // ===== ELBOW ===== 
    glTranslatef(1.0, 0.0, 0.0); 
    glRotatef((GLfloat) elbow, 0.0, 0.0, 1.0); 
    glTranslatef(1.0, 0.0, 0.0); 
 
    // Lengan bawah 
    glPushMatrix(); 
    glScalef(2.0, 0.4, 1.0); 
    glutWireCube(1.0); 
    glPopMatrix(); 
 
    // ===== WRIST ===== 
    glTranslatef(1.0, 0.0, 0.0); 
    glRotatef((GLfloat) wrist, 0.0, 0.0, 1.0); 
 
    // ===== TELAPAK ===== 
    glPushMatrix(); 
    glScalef(0.8, 0.4, 0.3); 
    glutWireCube(1.0); 
    glPopMatrix(); 
 
    // Geser ke ujung telapak (tempat jari) 
    glTranslatef(0.4, 0.0, 0.0); 
 
    // ===== JARI (2 RUAS) ===== 
    for (int i = -2; i <= 2; i++) { 
        glPushMatrix(); 
 
        // posisi jari 
        glTranslatef(0.0, i * 0.15, 0.0); 
 
        // ===== RUAS 1 ===== 
        glRotatef((GLfloat) fingerBase, 0.0, 0.0, 
1.0); 
        glTranslatef(0.25, 0.0, 0.0); 
 
        glPushMatrix(); 
        glScalef(0.5, 0.1, 0.1); 
        glutWireCube(1.0); 
        glPopMatrix(); 
 
        // ===== RUAS 2 ===== 
        glTranslatef(0.25, 0.0, 0.0); 
        glRotatef((GLfloat) fingerTip, 0.0, 0.0, 
1.0); 
        glTranslatef(0.2, 0.0, 0.0); 
 
        glPushMatrix(); 
        glScalef(0.4, 0.08, 0.08); 
        glutWireCube(1.0); 
        glPopMatrix(); 
 
        glPopMatrix(); 
    } 
 
    glPopMatrix(); 
    glutSwapBuffers(); 
} 
 
void reshape(int w, int h) { 
    if (w == 0 || h == 0) return; 
 
    glViewport(0, 0, (GLsizei) w, (GLsizei) h); 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
 
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 
1.0, 20.0); 
 
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity(); 
    glTranslatef(0.0, 0.0, -5.0); 
} 
void keyboard(unsigned char key, int x, int y) { 
    switch (key) { 
        // Shoulder 
        case 's': shoulder = (shoulder + 5) % 360; 
break; 
        case 'S': shoulder = (shoulder - 5) % 360; 
break; 
 
        // Elbow 
        case 'e': elbow = (elbow + 5) % 360; break; 
        case 'E': elbow = (elbow - 5) % 360; break; 
 
        // Wrist 
        case 'w': wrist = (wrist + 5) % 360; break; 
        case 'W': wrist = (wrist - 5) % 360; break; 
 
        // Jari ruas 1 
        case 'f': fingerBase = (fingerBase + 5) % 
360; break; 
        case 'F': fingerBase = (fingerBase - 5) % 
360; break; 
 
        // Jari ruas 2 
        case 'g': fingerTip = (fingerTip + 5) % 360; 
break; 
        case 'G': fingerTip = (fingerTip - 5) % 360; 
break; 
 
        case 27: exit(0); break; // ESC 
    } 
    glutPostRedisplay(); 
} 
 
int main(int argc, char** argv) { 
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
    glutInitWindowSize(700, 600); 
    glutInitWindowPosition(100, 100); 
    glutCreateWindow("Lengan + Telapak + Jari 2 Ruas"); 
 
    init(); 
    glutDisplayFunc(display); 
    glutReshapeFunc(reshape); 
    glutKeyboardFunc(keyboard); 
 
    glutMainLoop(); 
    return 0; 
} 

