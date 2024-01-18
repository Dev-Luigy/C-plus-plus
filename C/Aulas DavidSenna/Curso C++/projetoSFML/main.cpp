#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/Window.hpp>
#include <iostream>

struct Game {
    sf::RenderWindow window;

    Game() : window(sf::VideoMode(1000, 600), "Teste"){};
    
    void main_loop(){
        while(window.isOpen()){
            process();
            draw();
        }
    }

    void process(){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
    }

    void draw(){
        window.clear();
        window.display(); 
    }
};

struct Pencil{
    sf::Font fonte;

    Pencil(){
        // fonte.loadFromFile("Ubuntu.ttf");
        if (fonte.loadFromFile("/usr/local/share/fonts/Anonymous-Pro-B.ttf")){
            std::cout << "Fonte carregada";
        }
        else {
            std::cout << "Fonte não carregada";
        }
    }
};

int main()
{
    Game game;
    Pencil pencil;
    game.main_loop();

    return 0;
}