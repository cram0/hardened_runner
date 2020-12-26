#include "CoreClock.hpp"

CoreClock::CoreClock()
{

}

sf::Clock CoreClock::getClock()
{
    return (this->coreClock);
}