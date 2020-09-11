#ifndef SCENE_HPP_
#define SCENE_HPP_

#include "Entity.hpp"

class Scene {
    public:
        Scene();
        ~Scene();

    protected:
        int     Update();
        int     Draw();

    private:
        Entity  myEntity;

};

#endif /* !SCENE_HPP_ */
