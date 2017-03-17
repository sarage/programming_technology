#include <glut.h>

/*GLvoid InitGL(GLsizei Width, GLsizei Height)    // ������� ����� �������� ���� GL
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);   // ������� ������ � ������ ����
	glClearDepth(1.0);                      // ��������� ������� ������ �������
	glDepthFunc(GL_LESS);                   // ��� ����� �������
	glEnable(GL_DEPTH_TEST);                // ��������� ���� �������
	glShadeModel(GL_SMOOTH);        // ��������� ������� �������� �����������
	glMatrixMode(GL_PROJECTION);    // ����� ������� ��������
	glLoadIdentity();               // ����� ������� ��������
	gluPerspective(45.0f, (GLfloat)Width / (GLfloat)Height, 0.1f, 100.0f);
	// ��������� ����������� �������������� �������� ��� ����
	glMatrixMode(GL_MODELVIEW);     // ����� ������� ��������� ������
}

GLvoid ReSizeGLScene(GLsizei Width, GLsizei Height)
{
	if (Height == 0)          // �������������� ������� �� ����, ���� ���� ������� ����
		Height = 1;

	glViewport(0, 0, Width, Height);
	// ����� ������� ������� ������ � ������������� ��������������

	glMatrixMode(GL_PROJECTION);            // ����� ������� ��������
	glLoadIdentity();                       // ����� ������� ��������

	gluPerspective(45.0f, (GLfloat)Width / (GLfloat)Height, 0.1f, 100.0f);
	// ���������� ����������� �������������� �������� ��� ����
	glMatrixMode(GL_MODELVIEW);     // ����� ������� ��������� ������
}*/



GLvoid DrawGLScene(GLvoid)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(-1.5f, 0.0f, -6.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);      // ������� ����
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);      // �������� ����
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);      // ����� ����
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();

	glTranslatef(3.0f, 0.0f, 0.0f);
	glColor3f(0.5f, 0.5f, 1.0f);      // ��������� ����� ���� ������ ���� ���
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();

	glutSwapBuffers();
}

/*void renderScene(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0f, 1.0f, 0.0f);  // �����
	glVertex3f(-1.0f, -1.0f, 0.0f);  // ����� �����
	glVertex3f(1.0f, -1.0f, 0.0f);  // ������ �����
	glEnd();
	glutSwapBuffers();
}*/

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("MY");
	glutDisplayFunc(DrawGLScene);
	glutMainLoop();
	return 1;
}
