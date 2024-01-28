#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Circle Example");

    sf::CircleShape circle(50); // Radius of the circle
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(175, 175); // Position of the circle in the window

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
