#include "GameCore.hpp"

GameCore::GameCore()
{
    gameWindow.create((sf::VideoMode){800, 600, 32}, "Hello World", sf::Style::Default);
}

int GameCore::Update(CoreClock *coreClock)
{
    sceneManager.GetSceneTest().Update(coreClock->getClock().restart().asMilliseconds());
}

int GameCore::Draw(sf::RenderWindow *gameWindow)
{
    sceneManager.GetSceneTest().Draw(gameWindow);
    gameWindow->display();
}

int GameCore::Run()
{
    sceneManager.ParseScenes("src/scenes/Scenes.json");
    while (this->gameWindow.isOpen()) {
        while (this->gameWindow.pollEvent(this->gameEvent)) {
            if (gameEvent.type == sf::Event::Closed) {
                gameWindow.close();
            }
            Update(&this->coreClock);
            Draw(&this->gameWindow);
        }
    }
}