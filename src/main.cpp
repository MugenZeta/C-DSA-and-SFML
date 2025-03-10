#include <SFML/Graphics.hpp>

//bubble class
class bubble : public sf::Drawable{
public:
    bubble();
    ~bubble();
    sf::CircleShape bubbleGraphic;

private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

bubble::bubble() {
    bubbleGraphic.setPosition({100, 100});
    bubbleGraphic.move({100, 100});
    bubbleGraphic.setRadius(10);
    bubbleGraphic.setFillColor(sf::Color::Red);
    bubbleGraphic.setOutlineColor(sf::Color::Black);
    bubbleGraphic.setOutlineThickness(2);
}

bubble::~bubble() {}

void bubble::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(bubbleGraphic, states);
}





//Node Class
class Node {
public:
    int currentNode;
    Node* nextNode;
};

//Main Program
int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    enum mode{
        PUSH,
        POP,
        APPEND,
    };

    int posX = sf::Mouse::getPosition(window).x;
    int posY = sf::Mouse::getPosition(window).y;
    sf::Font debugFont;
    debugFont.openFromFile("font.ttf");
    sf::Text text(debugFont);
    text.setFillColor(sf::Color::Blue);
    text.setPosition({200,200});
    text.setCharacterSize(120);

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
        window.draw(text);
        window.display();
    }
}
