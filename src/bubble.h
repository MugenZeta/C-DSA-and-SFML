//
// Created by hgarn on 3/5/2025.
//

#ifndef CMAKESFMLPROJECT_BUBBLE_H
#define CMAKESFMLPROJECT_BUBBLE_H

#include "SFML/Graphics.hpp"

class bubble : public sf::Drawable{
public:
    bubble();
    ~bubble();
    sf::CircleShape bubbleGraphic;

private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif //CMAKESFMLPROJECT_BUBBLE_H
