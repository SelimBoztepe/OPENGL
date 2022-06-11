#include <GL/glut.h> 
#include <stdlib.h> 
void ayarlar(void) 
{ 
 glClearColor(0.0,0.0,0.0,0.0); 
glShadeModel(GL_FLAT); 
 glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0); 
} 
void gosterim(void) 
{ 
 glClear(GL_COLOR_BUFFER_BIT); 
 glColor3f(1.0, 1.0, 0.0); 
 
 glBegin(GL_POLYGON); 
 glVertex2f(-0.75, -0.75); 
 glVertex2f(-0.5, 0.5); 
 glVertex2f(0.75, 0.75); 
 glVertex2f(0.5, -0.5); 
 glEnd(); 
 glFlush(); 
} 
int main(int argc,char ** argv) 
{ 
 glutInit(&argc,argv); 
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB ); 
 glutInitWindowPosition(0,0); 
 glutInitWindowSize(300,300); 
 glutCreateWindow("OpenGL"); 
 ayarlar(); 
 glutDisplayFunc(gosterim); 
 glutMainLoop(); 
 return 0; 
}
