#include "scene.h"

Scene::Scene()
{
	Utilities::InitModel(&mountain, "./Mallas/montana.obj");
	Utilities::InitModel(&magician, "./Mallas/magic.obj");
	Utilities::InitModel(&house, "./Mallas/house.obj");
	Utilities::InitModel(&cart, "./Mallas/cart.obj");


	Utilities::InitializeTextures(&montain_texture, "./Textures/terrain.jpg");
}

void Scene::drawNoTexture()
{
	Magician();
	House();
	Cart();
}

void Scene::drawWithTexture()
{

	Mountain();

}

void Scene::Mountain()
{

	Utilities::DrawModel(mountain, 0, -0.05f, 0.03f, montain_texture, 200, 200, 200);
}

void Scene::Magician()
{
	Utilities::DrawModel(magician, -3.5f, 1.15f, 0.0f, 180.0f, 0.0f, 1.0f, 0.0f);
}

void Scene::House()
{
	Utilities::DrawModel(house, 2.0f, -.5f, 0.0f);
}

void Scene::Cart()
{
	Utilities::DrawModel(cart, .0f, -.75f, 0.0f,  90.0f, 0.0f, 1.0f, 0.0f);
}



