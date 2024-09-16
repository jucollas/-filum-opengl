#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h>
#include "utilities.h"


class Scene
{
private:
	GLMmodel* magician, * house, * mountain, *cart;
	GLuint montain_texture;


	void Magician();
	void House();
	void Mountain();
	void Cart();

public:
	Scene();
	void drawNoTexture();
	void drawWithTexture();

};

