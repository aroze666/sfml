#include "Board.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 1024), "Game");
    Board game;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            game.BoardUpdate(event);
        }
        window.clear();
        window.draw(game);
        window.display();
    }

    return 0;
}
