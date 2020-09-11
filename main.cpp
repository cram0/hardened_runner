#include <SFML/Window.hpp>

#include "main.hpp"
#include "GameCore.hpp"
#include "run.hpp"

int main()
{
    GameCore gameCore;

    Run(&gameCore);

    return (0);
}