#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Entity {
    public:
        Entity();
        Entity(char *path);

        int             Update(float deltaTime);

        sf::Sprite      GetSprite();

        sf::Texture     GetTexture();
        int             SetTexture(char *path);

        int             Draw(sf::RenderWindow *gameWindow);

    protected:

    private:
        sf::Sprite      sprite;
        sf::Texture     texture;
        sf::Vector2f    position;

        int             UpdateSpritePosition(float deltaTime);

};

#endif /* !ENTITY_HPP_ */
