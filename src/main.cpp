#include <SFML/Graphics.hpp>
#include "Node.h"
#include "bubble.h"

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    enum mode{
        PUSH,
        POP,
        APPEND,
    };
    bubble b;

    mode currentMode = PUSH;
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.draw(b);
        window.display();
    }
}
