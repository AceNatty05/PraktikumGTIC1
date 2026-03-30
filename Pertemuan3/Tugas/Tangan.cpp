#include <GLUT/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0, pergelangan1 = 0;
static int pergelangan2 = 0;

static int jempol[3]    = {0, 0, 0};
static int telunjuk[3]  = {0, 0, 0};
static int tengah[3]    = {0, 0, 0};
static int manis[3]     = {0, 0, 0};
static int kelingking[3]= {0, 0, 0};

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}

void drawSegment(GLfloat length, GLfloat height, GLfloat depth) {
    glPushMatrix();
        glTranslatef(length / 2.0f, 0.0f, 0.0f);
        glScalef(length, height, depth);
        glutWireCube(1.0f);
    glPopMatrix();
}

void Jarilain(GLfloat baseX, GLfloat baseY, GLfloat baseZ,
              int a1, int a2, int a3,
              GLfloat l1, GLfloat l2, GLfloat l3) {
    glPushMatrix();
        glTranslatef(baseX, baseY, baseZ);

        glRotatef((GLfloat)a1, 0.0f, 1.0f, 0.0f);
        drawSegment(l1, 0.22f, 0.18f);

        glTranslatef(l1, 0.0f, 0.0f);
        glRotatef((GLfloat)a2, 0.0f, 1.0f, 0.0f);
        drawSegment(l2, 0.20f, 0.16f);

        glTranslatef(l2, 0.0f, 0.0f);
        glRotatef((GLfloat)a3, 0.0f, 1.0f, 0.0f);
        drawSegment(l3, 0.18f, 0.14f);
    glPopMatrix();
}

void jariJempol(GLfloat baseX, GLfloat baseY, GLfloat baseZ,
                int a1, int a2, int a3,
                GLfloat l1, GLfloat l2, GLfloat l3) {
    glPushMatrix();
        glTranslatef(baseX, baseY, baseZ);

        glRotatef(90.0f, 0.0f, 0.0f, 1.0f);

        glRotatef((GLfloat)a1, 0.0f, 1.0f, 0.0f);
        drawSegment(l1, 0.22f, 0.18f);

        glTranslatef(l1, 0.0f, 0.0f);
        glRotatef((GLfloat)a2, 0.0f, 1.0f, 0.0f);
        drawSegment(l2, 0.20f, 0.16f);

        glTranslatef(l2, 0.0f, 0.0f);
        glRotatef((GLfloat)a3, 0.0f, 1.0f, 0.0f);
        drawSegment(l3, 0.16f, 0.13f);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(-2.8f, 0.0f, -10.5f);

    glPushMatrix();

        /* shoulder */
        glTranslatef(-1.5f, 0.0f, 0.0f);
        glRotatef((GLfloat)shoulder, 0.0f, 0.0f, 1.0f);
        glTranslatef(1.5f, 0.0f, 0.0f);
        drawSegment(3.0f, 0.85f, 0.5f);

        /* elbow */
        glTranslatef(3.0f, 0.0f, 0.0f);
        glRotatef((GLfloat)elbow, 0.0f, 0.0f, 1.0f);
        drawSegment(1.5f, 0.85f, 0.5f);

        /* pergelangan 1 */
        glTranslatef(1.5f, 0.0f, 0.0f);
        glRotatef((GLfloat)pergelangan1, 0.0f, 0.0f, 1.0f);

        /* pergelangan 2 */
        glRotatef((GLfloat)pergelangan2, 0.0f, 1.0f, 0.0f);

        /* telapak */
        drawSegment(1.4f, 1.5f, 0.5f);

        /* jempol */
        jariJempol(0.4f, 0.74f, 0.35f,
                   jempol[0], jempol[1], jempol[2],
                   0.45f, 0.37f, 0.25f);

        /* 4 jari utama */
        Jarilain(1.5f,  0.50f, 0.00f,
                 telunjuk[0], telunjuk[1], telunjuk[2],
                 0.47f, 0.37f, 0.25f);

        Jarilain(1.5f,  0.20f, 0.00f,
                 tengah[0], tengah[1], tengah[2],
                 0.53f, 0.41f, 0.27f);

        Jarilain(1.5f, -0.10f, 0.00f,
                 manis[0], manis[1], manis[2],
                 0.50f, 0.39f, 0.26f);

        Jarilain(1.5f, -0.40f, 0.00f,
                 kelingking[0], kelingking[1], kelingking[2],
                 0.43f, 0.35f, 0.23f);

    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0) h = 1;

    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 25.0);

    glMatrixMode(GL_MODELVIEW);
}

void incline(int *a) {
    if (*a < 90) *a += 5;
}

void decline(int *a) {
    if (*a > -90) *a -= 5;
}

void declineElbow(int *a) {
    if (*a > 0) *a -= 5;
}

void inclinePergelangan2Kiri(int *a) {
    if (*a < 0) *a += 5;
}

void inclinePergelangan1Atas(int *a) {
    if (*a < +45) *a += 5;
}

void declinePergelangan1Bawah(int *a) {
    if (*a > -45) *a -= 5;
}

void inclineJari(int *a) {
    if (*a < 90) *a += 5;
}

void declineJari(int *a) {
    if (*a > 0) *a -= 5;
}

int parentMasihBisaGerak(int parent) {
    return (parent > -90 && parent < 90);
}

void reset(int f[3]) {
    f[0] = 0;
    f[1] = 0;
    f[2] = 0;
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        /* SHOULDER */
        case 's':
            incline(&shoulder);
            break;
        case 'S':
            decline(&shoulder);
            break;

        /* ELBOW */
        case 'e':
            if (parentMasihBisaGerak(shoulder))
                incline(&elbow);
            break;
        case 'E':
            if (parentMasihBisaGerak(shoulder))
                declineElbow(&elbow);
            break;

        /* PERGELANGAN 1 */
        case 'w':
            if (parentMasihBisaGerak(elbow))
                inclinePergelangan1Atas(&pergelangan1);
            break;
        case 'W':
            if (parentMasihBisaGerak(elbow))
                declinePergelangan1Bawah(&pergelangan1);
            break;

        /* PERGELANGAN 2 */
        case 'p':
            if (parentMasihBisaGerak(pergelangan1))
                inclinePergelangan2Kiri(&pergelangan2);
            break;
        case 'P':
            if (parentMasihBisaGerak(pergelangan1))
                decline(&pergelangan2);
            break;

        /* JEMPOL */
        case 't':
            if (parentMasihBisaGerak(pergelangan2))
                inclineJari(&jempol[0]);
            break;
        case 'T':
            if (parentMasihBisaGerak(pergelangan2))
                declineJari(&jempol[0]);
            break;

        case 'y':
            if (parentMasihBisaGerak(jempol[0]))
                inclineJari(&jempol[1]);
            break;
        case 'Y':
            if (parentMasihBisaGerak(jempol[0]))
                declineJari(&jempol[1]);
            break;

        case 'u':
            if (parentMasihBisaGerak(jempol[1]))
                inclineJari(&jempol[2]);
            break;
        case 'U':
            if (parentMasihBisaGerak(jempol[1]))
                declineJari(&jempol[2]);
            break;

        /* TELUNJUK */
        case '1':
            if (parentMasihBisaGerak(pergelangan2))
                inclineJari(&telunjuk[0]);
            break;
        case '!':
            if (parentMasihBisaGerak(pergelangan2))
                declineJari(&telunjuk[0]);
            break;

        case '2':
            if (parentMasihBisaGerak(telunjuk[0]))
                inclineJari(&telunjuk[1]);
            break;
        case '@':
            if (parentMasihBisaGerak(telunjuk[0]))
                declineJari(&telunjuk[1]);
            break;

        case '3':
            if (parentMasihBisaGerak(telunjuk[1]))
                inclineJari(&telunjuk[2]);
            break;
        case '#':
            if (parentMasihBisaGerak(telunjuk[1]))
                declineJari(&telunjuk[2]);
            break;

        /* TENGAH */
        case '4':
            if (parentMasihBisaGerak(pergelangan2))
                inclineJari(&tengah[0]);
            break;
        case '$':
            if (parentMasihBisaGerak(pergelangan2))
                declineJari(&tengah[0]);
            break;

        case '5':
            if (parentMasihBisaGerak(tengah[0]))
                inclineJari(&tengah[1]);
            break;
        case '%':
            if (parentMasihBisaGerak(tengah[0]))
                declineJari(&tengah[1]);
            break;

        case '6':
            if (parentMasihBisaGerak(tengah[1]))
                inclineJari(&tengah[2]);
            break;
        case '^':
            if (parentMasihBisaGerak(tengah[1]))
                declineJari(&tengah[2]);
            break;

        /* MANIS */
        case '7':
            if (parentMasihBisaGerak(pergelangan2))
                inclineJari(&manis[0]);
            break;
        case '&':
            if (parentMasihBisaGerak(pergelangan2))
                declineJari(&manis[0]);
            break;

        case '8':
            if (parentMasihBisaGerak(manis[0]))
                inclineJari(&manis[1]);
            break;
        case '*':
            if (parentMasihBisaGerak(manis[0]))
                declineJari(&manis[1]);
            break;

        case '9':
            if (parentMasihBisaGerak(manis[1]))
                inclineJari(&manis[2]);
            break;
        case '(':
            if (parentMasihBisaGerak(manis[1]))
                declineJari(&manis[2]);
            break;

        /* KELINGKING */
        case 'z':
            if (parentMasihBisaGerak(pergelangan2))
                inclineJari(&kelingking[0]);
            break;
        case 'Z':
            if (parentMasihBisaGerak(pergelangan2))
                declineJari(&kelingking[0]);
            break;

        case 'x':
            if (parentMasihBisaGerak(kelingking[0]))
                inclineJari(&kelingking[1]);
            break;
        case 'X':
            if (parentMasihBisaGerak(kelingking[0]))
                declineJari(&kelingking[1]);
            break;

        case 'c':
            if (parentMasihBisaGerak(kelingking[1]))
                inclineJari(&kelingking[2]);
            break;
        case 'C':
            if (parentMasihBisaGerak(kelingking[1]))
                declineJari(&kelingking[2]);
            break;

        case '0':
            shoulder = elbow = pergelangan1 = 0;
            pergelangan2 = 0;
            reset(jempol);
            reset(telunjuk);
            reset(tengah);
            reset(manis);
            reset(kelingking);
            break;

        case 27:
            exit(0);
            break;

        default:
            return;
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tangan");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}