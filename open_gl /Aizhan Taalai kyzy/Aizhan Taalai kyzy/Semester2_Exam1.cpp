#include <glut.h>
void Picture();
void Circle(int x,int y,int r);
void SetPixel();

int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Semester2_Exam1");

	glutDisplayFunc(Picture);
	glutMainLoop();

	return 1;
}

void Picture(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	Circle(160, 160,80);

	glLineWidth(3);

	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2d(-0.9, 0);
	glVertex2d(0.9, 0);
	glVertex2d(0, 0.9);
	glVertex2d(0, -0.9);

	glColor3d(1, 0, 0);
	glVertex2d(-0.5, 0.5);
	glVertex2d(-0.75, 0.25);
	glVertex2d(-0.25, 0.25);
	glVertex2d(-0.5, 0.5);
	glVertex2d(-0.75, 0.25);
	glVertex2d(-0.25, 0.25);

	glColor3d(0, 0, 0);
	glVertex2d(-0.5, 0.75);
	glVertex2d(-0.75, 0.5);
	glVertex2d(-0.25, 0.5);
	glVertex2d(-0.5, 0.75);
	glVertex2d(-0.75, 0.5);
	glVertex2d(-0.25, 0.5);
	glVertex2d(0.25, 1);
	glVertex2d(0.5, 0.75);
	glVertex2d(0.5, 0.75);
	glVertex2d(0.75, 1);

	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3d(1, 0, 0);
	glVertex3d(-0.5, 0.75, 0);
	glEnd();

	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3d(0, 0, 1);
	glVertex3d(-0.5, 0.85, 0);
	glEnd();

	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3d(0, 1, 0);
	glVertex3d(0.25, 0.25, 0);
	glEnd();

	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3d(1, 0, 0);
	glVertex3d(0.75, 0.25, 0);
	glEnd();

	glutSwapBuffers();
}
void SetPixel(int xp, int yp)
{
	double x = double(xp) / 320, y = double(yp) / 320;
	glBegin(GL_POINTS);
	glColor3d(0, 0, 1);
	glVertex2d(x, y);
	glEnd();
}

void Circle(int x, int y, int r)
{
	int x1 = 0, y1 = r, d = 3 - 2 * r;

	while (x1 <= y1) {
		SetPixel(x + x1, y + y1);
		SetPixel(x + y1, y + x1);
		SetPixel(x - y1, x + x1);
		SetPixel(x - x1, x + y1);
		SetPixel(x - x1, x - y1);
		SetPixel(x - y1, x - x1);
		SetPixel(x + y1, x - x1);
		SetPixel(x + x1, x - y1);
		if (d<0)
			d = d + 4 * x1 + 6;
		else {
			d = d + 4 * (x1 - y1) + 10;
			y1--;
		}
		x1++;
	}

}
