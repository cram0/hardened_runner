#ifndef SCENEMANAGER_HPP_
#define SCENEMANAGER_HPP_

#include "Scene.hpp"

class SceneManager {
    public:
        SceneManager();

        int     UpdateCurrentScene(float deltaTime);
        int     DrawCurrentScene();

        Scene     GetSceneTest();
    protected:

    private:
        Scene   myScene;
};

#endif /* !SCENEMANAGER_HPP_ */
