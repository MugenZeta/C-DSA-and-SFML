//
// Created by hgarn on 3/5/2025.
//
#include "bubble.h"
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