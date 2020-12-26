#ifndef GAMECORE_HPP_
#define GAMECORE_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include "SceneManager.hpp"
#include "CoreClock.hpp"

class GameCore {
    public:
        GameCore();

        int                 Update(CoreClock *coreClock);
        int                 Draw(sf::RenderWindow *gameWindow);
        int                 Run();

    protected:

    private:
        sf::RenderWindow    gameWindow;
        sf::Event           gameEvent;
        SceneManager        sceneManager;
        CoreClock           coreClock;
};

#endif /* !GAMECORE_HPP_ */
