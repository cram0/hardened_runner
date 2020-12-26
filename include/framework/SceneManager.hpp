#ifndef SCENEMANAGER_HPP_
#define SCENEMANAGER_HPP_

#include "Scene.hpp"

#include "json.hpp"
#include <iostream>

class SceneManager {
    public:
        SceneManager();

        int     UpdateCurrentScene(float deltaTime);
        int     DrawCurrentScene();

        int     ParseScenes(char *scenesPath);

        Scene     GetSceneTest();
    protected:

    private:
        Scene   myScene;

};

#endif /* !SCENEMANAGER_HPP_ */
