#ifndef CORECLOCK_HPP_
#define CORECLOCK_HPP_

#include <SFML/System.hpp>

class CoreClock {
    public:
        CoreClock();

        sf::Clock   getClock();
    protected:

    private:
        sf::Clock   coreClock;
};

#endif /* !CORECLOCK_HPP_ */
