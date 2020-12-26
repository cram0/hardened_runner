#include "SceneManager.hpp"

#include <fstream>


using json = nlohmann::json;


SceneManager::SceneManager()
{

}

int SceneManager::UpdateCurrentScene(float deltaTime)
{

}

int SceneManager::DrawCurrentScene()
{

}

Scene SceneManager::GetSceneTest()
{
    return (this->myScene);
}

int SceneManager::ParseScenes(char *scenesPath)
{
    std::ifstream streamData(scenesPath, std::ifstream::binary);
    json scenesData;
    streamData >> scenesData;
    std::cout << scenesData.dump() << std::endl;
}
