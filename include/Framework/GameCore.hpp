#ifndef GAMECORE_HPP_
#define GAMECORE_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "SceneManager.hpp"

class GameCore {
    public:
        GameCore();
        ~GameCore();

    protected:

    private:
        int                 Update();
        int                 Draw();

        sf::RenderWindow    gameWindow;
        sf::Event           gameEvent;
        SceneManager        sceneManager;

};

#endif /* !GAMECORE_HPP_ */
