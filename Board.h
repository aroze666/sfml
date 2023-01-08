#ifndef __BOARD__
#define __BOARD__
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Board : public sf::Drawable{
    public:
    Board();
    void BoardUpdate(sf::Event event);
    private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


#endif
