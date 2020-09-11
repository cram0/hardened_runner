#ifndef SCENEMANAGER_HPP_
#define SCENEMANAGER_HPP_

#include "Scene.hpp"

class SceneManager {
    public:
        SceneManager();
        ~SceneManager();

    protected:

    private:
        int     UpdateCurrentScene();
        int     DrawCurrentScene();

        Scene   myScene;
};

#endif /* !SCENEMANAGER_HPP_ */
