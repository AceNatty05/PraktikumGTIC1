#include <GL/glut.h>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define PI 3.1415926535898

void drawCircle(float cx, float cy, float r, float red, float green, float blue)
{
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i=0;i<=100;i++)
    {
        float angle = 2 * PI * i / 100;
        float x = r * cos(angle);
        float y = r * sin(angle);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void mcqueen() {
	// body
	glColor3f(1,0,0);
    glBegin(GL_POLYGON);
	    glVertex2f(-9, -3);
	    glVertex2f(-7, -3);
	    glVertex2f(-3, -3);
	    glVertex2f(2, -3);
	    glVertex2f(6, -2.5);
	    glVertex2f(8.012387534657, -1.6625075854898); 
	    glVertex2f(8.5257216321791, -1.5036048144487);
	    glVertex2f(8.566421144447, -1.1769488085034);
	    glVertex2f(8, 0);
	    glVertex2f(8, 1);
	    glVertex2f(3.9906847815473, 0.9680071506307);
	    glVertex2f(3.4795892695232, 1.0704155483509);
	    glVertex2f(3.0238427941726, 1.1466205582852);
	    glVertex2f(2.441500075669, 1.2228255682195);
	    glVertex2f(1.9604343516879, 1.2881441481632);
	    glVertex2f(1.4793686277067, 1.3425762981163);
	    glVertex2f(0.9992924743218, 1.4558526672776);
	    glVertex2f(0.1862392162317, 1.4793299613032);
	    glVertex2f(-0.3867238893784, 1.4863686747313);
	    glVertex2f(-1, 1.5);
	    glVertex2f(-1.4841264182629, 1.4908241727679);
	    glVertex2f(-2.0306601891455, 1.3404297791009);
	    glVertex2f(-4, 0);
	    glVertex2f(-4.5003780977851, 0.0294610745006);
	    glVertex2f(-4.9896316147897, 0.0442753454121);
	    glVertex2f(-5.5064487102172, 0.0620524705059);
	    glVertex2f(-6.0094840164332, 0.0946438665111);
	    glVertex2f(-6.5043370648695, 0.0321134979886);
	    glVertex2f(-7.0020590715308, -0.0748884091249);
	    glVertex2f(-7.5089981523895, -0.1739642490448);
	    glVertex2f(-8.0067201590508, -0.2690770553679);
	    glVertex2f(-8.5044421657121, -0.3721159288846);
	    glVertex2f(-9, -0.5);
	    glVertex2f(-9.7203092529939, -2.0060446642174);
    glEnd();
    
    glBegin(GL_POLYGON);
    	glVertex2f(8, 1);
	    glVertex2f(9, 2);
	    glVertex2f(7.4959950102928, 1.6994498713157);
	    glVertex2f(7.0013507540275, 1.7815737920724);
	    glVertex2f(5.4899416651586, 0.8530645129335);
	    glVertex2f(4.4899416651586, 0.8530645129335);
	glEnd();
    
    // kaca
    glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
		glVertex2f(-0.3867238893784, 0);
		glVertex2f(0.6992924743218, 1.1558526672776);
		glVertex2f(0.2137607837683, 1.1793299613032);
		glVertex2f(-0.3867238893784, 1.1863686747313);
		glVertex2f(-1.0, 1.2);
		glVertex2f(-1.4841264182629, 1.1908241727679);
		glVertex2f(-2.0306601891455, 1.0404297791009);
		glVertex2f(-3.7, -0);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glVertex2f(0.1867238893784, 0);
		glVertex2f(1.6604343516879, 0.1);
		glVertex2f(3.6906847815473, 0.6680071506307);
		glVertex2f(3.1795892695232, 0.7704155483509);
		glVertex2f(2.7238427941726, 0.8466205582852);
		glVertex2f(2.1415000756690, 0.9228255682195);
		glVertex2f(1.6604343516879, 0.9881441481632);
		glVertex2f(1.0992924743218, 1.1);
	glEnd();
	
	
	// ban kiri
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(-6, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(0.8, 0.0, 0.0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
	
	// ban kanan
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(4, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(0.8, 0.0, 0.0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(-1, -1.2, 0.0);
		glRotated(30.0, 0.0, 0.0, 1.0);
		glScalef(0.4, 0.4, 1);
		glPushMatrix();
			glBegin(GL_TRIANGLES);
		
		        glColor3f(1.0, 1.0, 0.0);
		        glVertex2f(-7, 2);
		
		        glColor3f(1.0, 0.8, 0.0);
		        glVertex2f(3, 1);
		
		        glColor3f(1.0, 0.6, 0.0);
		        glVertex2f(1, -1);
		
		    glEnd();
		glPopMatrix();
	
	    glPushMatrix();
		    glTranslatef(1, 0.0, 0.0);
		    glBegin(GL_TRIANGLES);
		
		        glColor3f(1.0, 0.9, 0.0);
		        glVertex2f(-4, -2);
		
		        glColor3f(1.0, 0.7, 0.0);
		        glVertex2f(-2, 0);
		
		        glColor3f(1.0, 0.5, 0.0);
		        glVertex2f(6, -3);
		
		    glEnd();
		glPopMatrix();
	glPopMatrix();
	
}

void dinoco() {
	// body
	
    glBegin(GL_POLYGON);
    	glColor3f(0.7, 0.5, 0.3);
	    glVertex2f(-10.7203092529939, -3.0060446642174);
	    glVertex2f(-9, -3);
	    glVertex2f(-7, -3);
	    glVertex2f(-3, -3);
	    glVertex2f(2, -3);
	    glVertex2f(6, -2.5);
	    glColor3f(0.4, 0.6, 0.7);
	    glVertex2f(8.012387534657, -1.6625075854898); 
	    glVertex2f(8, 0);
	    glColor3f(0.00, 0.75, 1.00);
	    glVertex2f(8, 1);
	    glVertex2f(7.0013507540275, 1.7815737920724);
	    glVertex2f(4.4899416651586, 0.8530645129335);
	    glVertex2f(3.9906847815473, 0.9680071506307);
	    glVertex2f(3.4795892695232, 1.0704155483509);
	    glVertex2f(3.0238427941726, 1.1466205582852);
	    glVertex2f(2.441500075669, 1.2228255682195);
	    glVertex2f(1.9604343516879, 1.2881441481632);
	    glVertex2f(1.4793686277067, 1.3425762981163);
	    glVertex2f(0.9992924743218, 1.4558526672776);
	    glVertex2f(0.1862392162317, 1.4793299613032);
	    glVertex2f(-0.3867238893784, 1.4863686747313);
	    glVertex2f(-1, 1.5);
	    glVertex2f(-1.4841264182629, 1.4908241727679);
	    glVertex2f(-2.0306601891455, 1.3404297791009);
	    glVertex2f(-4, 0);
	    glVertex2f(-4.5003780977851, 0.0294610745006);
	    glVertex2f(-4.9896316147897, 0.0442753454121);
	    glVertex2f(-5.5064487102172, 0.0620524705059);
	    glVertex2f(-6.0094840164332, 0.0946438665111);
	    glVertex2f(-6.5043370648695, 0.0321134979886);
	    glVertex2f(-7.0020590715308, -0.0748884091249);
	    glVertex2f(-7.5089981523895, -0.1739642490448);
	    glVertex2f(-8.0067201590508, -0.2690770553679);
	    glVertex2f(-8.5044421657121, -0.3721159288846);
	    glVertex2f(-9, -0.5);
	    glVertex2f(-10.7203092529939, -1.0060446642174);
	    glVertex2f(-11.7203092529939, -2.0060446642174);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glVertex2f(7.5, 1);
	    glVertex2f(8, 5);
	    glVertex2f(7, 5);
	    glVertex2f(5.4899416651586, 0.8530645129335);
    glEnd();
    
    // kaca
    glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
		glVertex2f(-0.3867238893784, 0);
		glVertex2f(0.6992924743218, 1.1558526672776);
		glVertex2f(0.2137607837683, 1.1793299613032);
		glVertex2f(-0.3867238893784, 1.1863686747313);
		glVertex2f(-1.0, 1.2);
		glVertex2f(-1.4841264182629, 1.1908241727679);
		glVertex2f(-2.0306601891455, 1.0404297791009);
		glVertex2f(-3.7, -0);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glVertex2f(0.1867238893784, 0);
		glVertex2f(1.6604343516879, 0.1);
		glVertex2f(3.6906847815473, 0.6680071506307);
		glVertex2f(3.1795892695232, 0.7704155483509);
		glVertex2f(2.7238427941726, 0.8466205582852);
		glVertex2f(2.1415000756690, 0.9228255682195);
		glVertex2f(1.6604343516879, 0.9881441481632);
		glVertex2f(1.0992924743218, 1.1);
	glEnd();
	
	
	// ban kiri
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(-6, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(0.6, 0.6, 0.6);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
	
	// ban kanan
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(4, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(0.6, 0.6, 0.6);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
}

void chickhicks() {	
	// body
	glColor3f(0.4, 0.8, 0.2);
    glBegin(GL_POLYGON);
	    glVertex2f(-9.7203092529939, -3);
	    glVertex2f(-7, -3);
	    glVertex2f(-3, -3);
	    glVertex2f(2, -3);
	    glVertex2f(6, -3);
	    glVertex2f(8.012387534657, -2.5); 
	    glVertex2f(7, 0);
		glVertex2f(4, 0);
	    glVertex2f(3, 1.5);
	    glVertex2f(-1, 1.5);
	    glVertex2f(-1.4841264182629, 1.4908241727679);
	    glVertex2f(-2.0306601891455, 1.3404297791009);
	    glVertex2f(-4, 0);
	    glVertex2f(-9, 0);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glVertex2f(7, 0);
	    glVertex2f(7, 1);
	    glVertex2f(6.5, 1);
	    glVertex2f(6.3, -0.8530645129335);
    glEnd();
    
    // kaca
    glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
		glVertex2f(-0.3867238893784, 0);
		glVertex2f(0.6992924743218, 1.1558526672776);
		glVertex2f(0.2137607837683, 1.1793299613032);
		glVertex2f(-0.3867238893784, 1.1863686747313);
		glVertex2f(-1.0, 1.2);
		glVertex2f(-1.4841264182629, 1.1908241727679);
		glVertex2f(-2.0306601891455, 1.0404297791009);
		glVertex2f(-3.7, -0);
    glEnd();
    
    glBegin(GL_POLYGON);
	    glVertex2f(0.1867238893784, 0);
	    glVertex2f(1.0992924743218, 1.1);
	    glVertex2f(2.8, 1.1);
		glVertex2f(3.4, 0);
	glEnd();
	
	
	// ban kiri
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(-6, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(1, 1, 0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
	
	// ban kanan
	glPushMatrix();
		glPointSize(3.0f);
		glTranslatef(4, -2.3, 0);
		glColor3f(0,0,0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.8; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
		
		// velg
		glColor3f(1, 1, 0);
		glBegin(GL_POINTS);
			for(float radius = 0; radius <= 1.0; radius += 0.02)
			{
			    for(int i = 0; i < 360; i++)
			    {
			        float angle = 2 * PI * i / 360;
			
			        float x = radius * cos(angle);
			        float y = radius * sin(angle);
			
			        glVertex2f(x,y);
			    }
			}
		glEnd();
	glPopMatrix();
}

void initRandom() {
    srand(time(0));
}

void drawGridKotak() {
    float size = 0.5;

    for(float y = 0; y < 3; y += size){
        int col = 0;
        for(float x = -12; x < 12; x += size, col++){
            float r, g, b;
            if(col % 10 == 9){
                r = g = b = 0.7;
            } else {
                r = 0.2 + (float)rand() / RAND_MAX * 0.2;
                g = 0.2 + (float)rand() / RAND_MAX * 0.2;
                b = 0.2 + (float)rand() / RAND_MAX * 0.2;
            }

            glBegin(GL_QUADS);
                glColor3f(r, g, b);
                glVertex2f(x, y);

                glColor3f(r, g, b);
                glVertex2f(x + size, y);

                glColor3f(r, g, b);
                glVertex2f(x + size, y + size);

                glColor3f(r, g, b);
                glVertex2f(x, y + size);
            glEnd();
        }
    }
}

void background(){
	
	// langit
	glBegin(GL_QUADS);
	    glColor3f(0.53, 0.81, 0.98);
	    glVertex2f(-12, -0.5);
	    glColor3f(0.53, 0.81, 0.98);
	    glVertex2f(12, -0.5);
	    glColor3f(0.1, 0.4, 0.8);
	    glVertex2f(12, 5);
	    glColor3f(0.1, 0.4, 0.8);
	    glVertex2f(-12, 5);
	glEnd();
	
	
	// tanah & rumput
	glBegin(GL_QUADS);
	    glColor3f(0.4, 0.26, 0.13);
	    glVertex2f(-12, -5);
	    glColor3f(0.4, 0.26, 0.13);
	    glVertex2f(12, -5);
	    glColor3f(0.2, 0.5, 0.2);
	    glVertex2f(12, -4);
	    glColor3f(0.2, 0.5, 0.2);
	    glVertex2f(-12, -4);
	glEnd();
		
	// sirkuit
	glBegin(GL_QUADS);
		glColor3f(0.1, 0.1, 0.1);
		glVertex2f(-12, -4);
		glColor3f(0.1, 0.1, 0.1);
		glVertex2f(12, -4);
		glColor3f(0.3, 0.3, 0.3);
		glVertex2f(12, -0.5);
		glColor3f(0.3, 0.3, 0.3);
		glVertex2f(-12, -0.5);	
	glEnd();
	
	// finish line
	
	float startY = -4;
	float endY   = -0.5;
	float step   = 0.5;
	
	float xLeft  = -4;
	float xMid   = -3.5;
	float xRight = -3;
	
	bool toggle = false;
	
	for(float y = startY; y < endY; y += step)
	{
	    if(toggle)
	        glColor3f(1,1,1);
	    else
	        glColor3f(0,0,0);
	
	    glBegin(GL_QUADS);
	        glVertex2f(xLeft, y);
	        glVertex2f(xMid, y);
	        glVertex2f(xMid, y + step);
	        glVertex2f(xLeft, y + step);
	    glEnd();
	
	    if(toggle)
	        glColor3f(0,0,0);
	    else
	        glColor3f(1,1,1);
	
	    glBegin(GL_QUADS);
	        glVertex2f(xMid, y);
	        glVertex2f(xRight, y);
	        glVertex2f(xRight, y + step);
	        glVertex2f(xMid, y + step);
	    glEnd();
	
	    toggle = !toggle;
	}
	
	//penonton
	drawGridKotak();
	
	// pembatas bawah
	float startX2 = -13;
	float endX2   = 12;
	float yBottom2 = -0.5;
	float yTop2    = 0.25;
	
	float step2 = 0.8;
	float offset2 = 0.3;
	
	bool toggle2 = false;
	
	for(float x2 = startX2; x2 < endX2; x2 += step2)
	{
	    float rTop, gTop, bTop;
	    float rBottom, gBottom, bBottom;
	
	    if(toggle2){
	        rTop = gTop = bTop = 1.0;
	        rBottom = gBottom = bBottom = 0.5;
	    } else {
	        rTop = gTop = bTop = 0.6;
	        rBottom = gBottom = bBottom = 0.1;
	    }
	
	    glBegin(GL_QUADS);
	        glColor3f(rBottom, gBottom, bBottom);
	        glVertex2f(x2, yBottom2);
	        glColor3f(rBottom, gBottom, bBottom);
	        glVertex2f(x2 + step2, yBottom2);
	        glColor3f(rTop, gTop, bTop);
	        glVertex2f(x2 + step2 + offset2, yTop2);
	        glColor3f(rTop, gTop, bTop);
	        glVertex2f(x2 + offset2, yTop2);
	    glEnd();
	
	    toggle2 = !toggle2;
	}
	
	//pembatas atas
	glBegin(GL_QUADS);
	    glColor3f(0.8, 0.8, 0.8);
	    glVertex2f(-12, 3);
	    glVertex2f(12, 3);
	    glColor3f(0.5, 0.5, 0.5);
	    glVertex2f(12, 3.5);
	    glVertex2f(-12, 3.5);
	glEnd();
	
	//lampu tribun
	float size = 0.5;
	for(float x = -12; x <= 12; x += 2.0) // kelipatan 2
	{
	    glBegin(GL_QUADS);
	        glColor3f(0.0, 0.0, 0.0); // hitam
	
	        glVertex2f(x, 3.5);
	        glVertex2f(x + size, 3.5);
	        glVertex2f(x + size, 4.0);
	        glVertex2f(x, 4.0);
	
	    glEnd();
	}
	
	// pohon
	float baseY = 0.25;

	for(float x = -10; x <= 10; x += 10.0)
	{
	    // batang
	    glBegin(GL_QUADS);
	        glColor3f(0.6, 0.35, 0.1);
	        glVertex2f(x - 0.15, baseY);
	        glVertex2f(x + 0.15, baseY);
	
	        glColor3f(0.7, 0.4, 0.1);
	        glVertex2f(x + 0.15, baseY + 1.2);
	        glVertex2f(x - 0.15, baseY + 1.2);
	    glEnd();
	
	    drawCircle(x, baseY + 1.8, 0.6, 0.0, 0.5, 0.0);
	
	    // highlight
	    drawCircle(x, baseY + 1.85, 0.62, 0.2, 0.9, 0.2);
	
	    // daun kiri
	    drawCircle(x - 0.4, baseY + 1.7, 0.5, 0.0, 0.5, 0.0);
	    drawCircle(x - 0.4, baseY + 1.75, 0.52, 0.2, 0.9, 0.2);
	
	    // daun kanan
	    drawCircle(x + 0.4, baseY + 1.7, 0.5, 0.0, 0.5, 0.0);
	    drawCircle(x + 0.4, baseY + 1.75, 0.52, 0.2, 0.9, 0.2);
	}
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		background();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(2.0, -1.8, 0.0);
		glScalef(0.3, 0.3, 1);
		dinoco();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(7.2, -1.8, 0.0);
		glScalef(0.3, 0.3, 1);
		mcqueen();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(-8, -1.8, 0.0);
		glScalef(0.3, 0.3, 1);
		chickhicks();
	glPopMatrix();
	
	glFlush();
	
}

void init() {

    glClearColor(1,1,1,1);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(-12,12,-5,5);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900,450);
    glutInitWindowPosition(100,100);
    glutCreateWindow("KACHAW!!! I am Speed ");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
