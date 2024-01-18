#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <cmath>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;

struct calculatorView{
    
};

struct button{
    int widht{0};
    int height{0};
    int x{0}, y{x};
    sf::Color Color;
    sf::RectangleShape body;

    button(int widht, int height, int x, int y, sf::Color Color) : widht(widht), height(height), x(x), y(y), Color(Color){
        body.setSize(sf::Vector2f(widht, height));
        body.setPosition(sf::Vector2f(x, y));
    };

    void eventChecker(){
        sf::Event event;
        
    }
};

struct calculator{
    sf::RenderWindow window;
    vector<button> buttons; 

    calculator() : window(sf::VideoMode(400, 600), "Calculadora"){
        window.setFramerateLimit(60);
        createButtons();
    }

    void createButtons(){
        for(int i = 0; i < 9; i++){
            buttons.push_back(button(110, 90, (i%3)*120 + 25, 250 + (100 * ceil(i / 3) + 25), sf::Color::White));
        }
    }

    void draw(){
        window.clear();
        for(const auto& button : buttons){
            window.draw(button.body);
        }
        window.display();
    }

    void process(){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed)
                window.close();
            
        }
    }

    void main_loop(){
        while(window.isOpen()){
            process();
            draw();
        }
    }

};

int main () {
    calculator Calculadora;
    Calculadora.main_loop();
    return 0;
}