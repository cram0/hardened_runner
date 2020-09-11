#ifndef SCENE_HPP_
#define SCENE_HPP_

#include "Entity.hpp"

class Scene {
    public:
        Scene();

        int     Update(float deltaTime);

        int     Draw(sf::RenderWindow *gameWindow);

    protected:

    private:
        Entity  myEntity;

};

#endif /* !SCENE_HPP_ */
