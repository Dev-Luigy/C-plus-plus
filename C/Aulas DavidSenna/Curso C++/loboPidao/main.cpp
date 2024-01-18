#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct Pencil {
    sf::Font font;

    Pencil() {
        if (!font.loadFromFile("sansation.ttf")) {
            std::cout << "Error";
        }
    }

    void write(sf::RenderWindow& window, std::string text, int size, sf::Color cor) {
        sf::Text texto;
        texto.setFont(font);
        texto.setCharacterSize(size);
        texto.setFillColor(cor);
        texto.setStyle(sf::Text::Regular);
        texto.setString(text);

        window.draw(texto);
    }
};

struct Game {
    sf::RenderWindow window;
    Pencil pencil;

    Game() : window(sf::VideoMode(800, 600), "Teste") {};

    void draw() {
        window.clear();
        pencil.write(window, "Iarinha", 40, sf::Color::White);
        window.display();
    }

    void process() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    void main_loop() {
        while (window.isOpen()) {
            process();
            draw();
        }
    }
};

int main() {
    Game game;
    game.main_loop();
    return 0;
}






