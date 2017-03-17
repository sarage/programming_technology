#include <glut.h>
GLfloat rquad;

void changeSize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1, 1, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}
void renderScene(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLoadIdentity();
	glRotatef(rquad, 0.0f, 1.0f, 0.0f);        // �������� �� ��� X

	glBegin(GL_QUADS);                      // ������
	glColor3f(0.0f, 1.0f, 0.0f);              // �����
	glVertex3f(.5f, .5f, -.5f);          // ����� ���� �������� (����)
	glVertex3f(-.5f, .5f, -.5f);          // ���� ����
	glVertex3f(-.5f, .5f, .5f);          // ���� ���
	glVertex3f(.5f, .5f, .5f);          // ����� ���

	glColor3f(1.0f, 0.5f, 0.0f);              // ���������
	glVertex3f(0.5f, -.5f, 0.5f);          // ���� ����� �������� (���)
	glVertex3f(-.5f, -.5f, 0.5f);          // ���� ����
	glVertex3f(-.5f, -.5f, -0.5f);          // ��� ����
	glVertex3f(.5f, -.5f, -0.5f);          // ��� �����

	glColor3f(1.0f, 0.0f, 0.0f);              // �������
	glVertex3f(.5f, .5f, .5f);          // ���� ����� �������� (�����)
	glVertex3f(-.5f, .5f, .5f);          // ���� ����
	glVertex3f(-.5f, -.5f, .5f);          // ��� ����
	glVertex3f(.5f, -.5f, .5f);          // ��� �����

	glColor3f(1.0f, 1.0f, 0.0f);              // ������
	glVertex3f(.5f, -.5f, -.5f);          // ���� ����� �������� (���)
	glVertex3f(-.5f, -.5f, -.5f);          // ���� ����
	glVertex3f(-.5f, .5f, -.5f);          // ��� ����
	glVertex3f(.5f, .5f, -.5f);          // ��� �����

	glColor3f(0.0f, 1.0f, 0.0f);              // �����
	glVertex3f(-0.5f, 0.5f, .5f);          // ���� ����� �������� (����)
	glVertex3f(-0.5f, 0.5f, -.5f);          // ���� ����
	glVertex3f(-0.5f, -0.5f, -.5f);          // ��� ����
	glVertex3f(-0.5f, -0.5f, .5f);          // ��� �����

	glColor3f(1.0f, 0.0f, 1.0f);              // ����������
	glVertex3f(0.5f, 0.5f, -.5f);          // ���� ����� �������� (�����)
	glVertex3f(0.5f, 0.5f, .5f);          // ���� ����
	glVertex3f(0.5f, -0.5f, .5f);          // ��� ����
	glVertex3f(0.5f, -0.5f, -.5f);          // ��� �����
	glEnd();                                // �������
	rquad -= 0.15f;
	glutSwapBuffers();

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Quads");
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutMainLoop();
}