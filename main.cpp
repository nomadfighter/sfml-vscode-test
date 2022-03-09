
#include <SFML/Window.hpp>

int main(int argc, char** argv)
{
    sf::Window Window(sf::VideoMode(800, 600), L"test");
    while (Window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (Window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                Window.close();
        }
    }

    return 0;
}