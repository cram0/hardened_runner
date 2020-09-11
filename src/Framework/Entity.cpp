#include "Entity.hpp"

Entity::Entity()
{
    position = {0.0, 0.0};
}

Entity::Entity(char *path)
{
    texture.loadFromFile(path);
    sprite.setTexture(texture, true);
    position = {0.0, 0.0};
}

int Entity::Update(float deltaTime)
{
    UpdateSpritePosition(deltaTime);
}

int Entity::UpdateSpritePosition(float deltaTime)
{
    sprite.setPosition(position);
}

int Entity::Draw(sf::RenderWindow *gameWindow)
{
    gameWindow->draw(GetSprite(), sf::RenderStates::Default);
}

sf::Texture Entity::GetTexture()
{
    return (texture);
}

int Entity::SetTexture(char *path)
{
    texture.loadFromFile(path, sf::IntRect());
    sprite.setTexture(texture, false);
}

sf::Sprite Entity::GetSprite()
{
    return (this->sprite);
}