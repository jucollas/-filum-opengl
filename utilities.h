#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h>

class Utilities
{
public:
	Utilities() = delete;
	static void InitModel(GLMmodel** model, char * model_path);
	static void InitializeTextures(GLuint* texid, char* texture_path);

	static void DrawModel(GLMmodel* model, float x, float y, float z);
	static void DrawModel(GLMmodel* model, float x, float y, float z, float angle, float Rx, float Ry, float Rz);
	static void DrawModel(GLMmodel* model, float x, float y, float z, GLuint texture);
	static void DrawModel(GLMmodel* model, float x, float y, float z, GLuint texture, float scale_x, float scale_y, float scale_z);
	//static void DrawModel(GLMmodel* model, float x, float y, float z, float scale, float angle, float Rx, float Ry, float Rz);
};

