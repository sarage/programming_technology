#include <glut.h>
#include <windows.h>		// ������������ ���� ��� Windows
#include <gl\gl.h>		// ������������ ���� ��� OpenGL32 ����������
#include <gl\glu.h>		// ������������ ���� ��� GLu32 ����������
#include <glaux.h>		// ������������ ���� ��� GLaux ����������

static HGLRC hRC;		// ���������� �������� ����������
static HDC hDC;			// ��������� �������� ���������� GDI

BOOL	keys[256];		// ������ ��� ��������� ��������� ����������


GLfloat	xrot;			// �������� X
GLfloat	yrot;			// Y
GLfloat	zrot;			// Z

GLuint	texture[1];		// ����� ��� ����� ��������
void changeSize(int w, int h)
{
	if (h == 0)
		h = 1;
	float ratio = 1.0* w / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45, ratio, 1, 1000);
	glMatrixMode(GL_MODELVIEW);
}

GLvoid LoadGLTextures()
{
	// �������� ��������
	AUX_RGBImageRec *texture1;
	texture1 = auxDIBImageLoad("d://Happy.jpg");
	glGenTextures(1, &texture[0]);
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, texture1->sizeX, texture1->sizeY, 0,
		GL_RGB, GL_UNSIGNED_BYTE, texture1->data);
}

GLvoid InitGL(GLsizei Width, GLsizei Height)
{
	LoadGLTextures();			// �������� �������
	glEnable(GL_TEXTURE_2D);		// ���������� ��������� ��������
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0f, (GLfloat)Width / (GLfloat)Height, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
}


void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Texture");
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutMainLoop();
}