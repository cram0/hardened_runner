#include "Scene.hpp"

Scene::Scene()
{
    myEntity.SetTexture("assets/img/alucard/alucard_sheet.png");
}

int Scene::Update(float deltaTime)
{
    myEntity.Update(deltaTime);
}

int Scene::Draw(sf::RenderWindow *gameWindow)
{
    myEntity.Draw(gameWindow);
}