#include "Entity.hpp"

Entity::Entity(char *path)
{
    texture.loadFromFile(path);
    sprite.setTexture(texture, true);
    position = {0.0, 0.0};
}

Entity::~Entity()
{

}

int Entity::Update()
{
    
}

int Entity::Draw()
{

}