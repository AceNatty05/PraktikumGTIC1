#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void BuatLingkaran(float xc, float yc, float radius, float r, float g, float b) {
    float PI = 3.14159265f;
    int circle_points = 50;
    glColor3f(r, g, b);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc, yc);
    for (int i = 0; i <= circle_points; i++) {
        float angle = (2.0f * PI * i) / circle_points;
        glVertex2f(xc + (cos(angle) * radius), yc + (sin(angle) * radius));
    }
    glEnd();
}

void awan(float x, float y, float skala) {
    BuatLingkaran(x, y, 0.08f * skala, 0.95f, 0.95f, 0.95f);
    BuatLingkaran(x + (0.05f * skala), y + (0.02f * skala), 0.07f * skala, 1.0f, 1.0f, 1.0f);
    BuatLingkaran(x - (0.05f * skala), y + (0.01f * skala), 0.06f * skala, 1.0f, 1.0f, 1.0f);
    BuatLingkaran(x + (0.10f * skala), y - (0.01f * skala), 0.05f * skala, 0.98f, 0.98f, 0.98f);
    BuatLingkaran(x - (0.02f * skala), y + (0.04f * skala), 0.06f * skala, 1.0f, 1.0f, 1.0f);
}

void latarBelakang() {
    // Langit
    glBegin(GL_QUADS);
    glColor3f(0.52f, 0.8f, 0.92f);
    glVertex2f(-1.0, 1.0);  glVertex2f(1.0, 1.0);
    glVertex2f(1.0, 0.2);   glVertex2f(-1.0, 0.2);
    glEnd();

    // Rumput
    glBegin(GL_QUADS);
    glColor3f(0.56f, 0.73f, 0.56f);
    glVertex2f(-1.0, 0.2);   glVertex2f(1.0, 0.2);
    glVertex2f(1.0, -1.0);  glVertex2f(-1.0, -1.0);
    glEnd();

    // Matahari
    BuatLingkaran(0.8f, 0.8f, 0.12f, 1.0f, 0.84f, 0.0f);
    awan(-0.7f, 0.75f, 1.6f);
    awan(0.1f, 0.76f, 1.5f);
    awan(0.7f, 0.70f, 1.3f);
}

void gambarJalan(float y_atas, float y_bawah) {
    float tengah = (y_atas + y_bawah) / 2.0f;

    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0, y_atas); glVertex2f(1.0, y_atas);
    glVertex2f(1.0, y_bawah); glVertex2f(-1.0, y_bawah);
    glEnd();

    glColor3f(0.98f, 0.88f, 0.40f);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(-1.0f, y_atas);  glVertex2f(1.0f, y_atas);
    glVertex2f(-1.0f, y_bawah); glVertex2f(1.0f, y_bawah);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    for(float i = -1.0f; i < 1.0f; i += 0.4f) {
        glBegin(GL_QUADS);
        glVertex2f(i + 0.05f, tengah + 0.01f); glVertex2f(i + 0.25f, tengah + 0.01f);
        glVertex2f(i + 0.25f, tengah - 0.01f); glVertex2f(i + 0.05f, tengah - 0.01f);
        glEnd();
    }
}

void pohon(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);

    glColor3f(0.4f, 0.2f, 0.1f);
    glBegin(GL_QUADS);
    glVertex2f(-0.02f, 0.05f);  glVertex2f(0.02f, 0.05f);
    glVertex2f(0.02f, -0.1f); glVertex2f(-0.02f, -0.1f);
    glEnd();

    glColor3f(0.1f, 0.45f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.4f); glVertex2f(-0.1f, 0.05f); glVertex2f(0.1f, 0.05f);
    glEnd();

    glPopMatrix();
}

void gambarRoda(float x, float y, float radius) {
    BuatLingkaran(x, y, radius, 0.1f, 0.1f, 0.1f);
    BuatLingkaran(x, y, radius * 0.6f, 0.75f, 0.75f, 0.75f);
    BuatLingkaran(x, y, radius * 0.2f, 0.3f, 0.3f, 0.3f);
}

void mobil(float x, float y, float r, float g, float b, bool keKiri) {
    float arah = keKiri ? -1.0f : 1.0f;
    float lb = 0.35f * arah;

    glPushMatrix();
    glTranslatef(x, y, 0.0f);

    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(0, 0); glVertex2f(lb, 0);
    glVertex2f(lb, 0.12f); glVertex2f(0, 0.12f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.05f * arah, 0.12f); glVertex2f(0.30f * arah, 0.12f);
    glVertex2f(0.25f * arah, 0.20f); glVertex2f(0.10f * arah, 0.20f);
    glEnd();

    // Kaca jendela kiri
    glColor3f(0.7f, 0.9f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.11f * arah, 0.13f); glVertex2f(0.19f * arah, 0.13f);
    glVertex2f(0.18f * arah, 0.18f); glVertex2f(0.12f * arah, 0.18f);
    glEnd();

    // Kaca jendela kanan
    glBegin(GL_QUADS);
    glVertex2f(0.21f * arah, 0.13f); glVertex2f(0.28f * arah, 0.13f);
    glVertex2f(0.24f * arah, 0.18f); glVertex2f(0.22f * arah, 0.18f);
    glEnd();

    // Pintu mobil
    glColor3f(r * 0.78f, g * 0.78f, b * 0.78f);
    glLineWidth(1.5f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.08f * arah, 0.01f);
    glVertex2f(0.27f * arah, 0.01f);
    glVertex2f(0.27f * arah, 0.11f);
    glVertex2f(0.08f * arah, 0.11f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.16f * arah, 0.055f);
    glVertex2f(0.20f * arah, 0.055f);
    glEnd();

    // Lampu depan (lingkaran kuning)
    float posLampuDepan = keKiri ? 0.01f * arah : 0.34f * arah;
    BuatLingkaran(posLampuDepan, 0.08f, 0.015f, 1.0f, 1.0f, 0.0f);

    // Lampu belakang (lingkaran merah)
    float posLampuBlkg = keKiri ? 0.34f * arah : 0.01f * arah;
    BuatLingkaran(posLampuBlkg, 0.08f, 0.012f, 1.0f, 0.0f, 0.0f);

    // Roda
    gambarRoda(0.08f * arah, 0, 0.045f);
    gambarRoda(0.27f * arah, 0, 0.045f);

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    latarBelakang();
    pohon(-0.75f, 0.15f);
    pohon(-0.25f, 0.15f);
    pohon( 0.25f, 0.15f);
    pohon( 0.75f, 0.15f);

    gambarJalan(0.1f, -0.3f);
    mobil(-0.3f, -0.25f, 0.1f, 0.4f, 0.8f, true);  // Mobil biru
    mobil(0.4f, -0.22f, 1.0f, 0.85f, 0.0f, true);  // Mobil kuning
    
    pohon(-0.75f, -0.35f);
    pohon(-0.25f, -0.35f);
    pohon( 0.25f, -0.35f);
    pohon( 0.75f, -0.35f);

    gambarJalan(-0.4f, -0.8f);
    mobil(0.1f, -0.75f, 0.9f, 0.1f, 0.1f, true);  // Mobil merah
    mobil(0.6f, -0.75f, 0.2f, 0.6f, 0.2f, true);  // Mobil hijau

    pohon(-0.7f, -0.95f);
    pohon(-0.2f, -0.95f);
    pohon( 0.3f, -0.95f);
    pohon( 0.8f, -0.95f);

    glutSwapBuffers();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("Mobil - Aswalila Adha Putri");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
