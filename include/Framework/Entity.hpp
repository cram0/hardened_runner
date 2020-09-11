#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Entity {
    public:
        Entity(char *path);
        ~Entity();

    protected:
        int             Update();
        int             Draw();

        sf::Sprite      sprite;
        sf::Texture     texture;
        sf::Vector2f    position;
        
    private:

};

#endif /* !ENTITY_HPP_ */
