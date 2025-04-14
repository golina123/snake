#include <iostream>
#include <stdio.h>
//#include <sys/ioctl.h>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics.hpp>

using namespace std;


int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000),  "SFML works!", sf::Style::Close);
	 sf::CircleShape shape(10.f);
         shape.setFillColor(sf::Color::Green);
         window.setVerticalSyncEnabled(true);
        
	while (window.isOpen())
	{
		sf::Event event;
                while(window.pollEvent(event))
                {
                        if (event.type == sf::Event::Closed)
                                window.close();
                }

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        	{
                        shape.setFillColor(sf::Color::Green);
			shape.move(-1.f, 0.f);
       			// left key is pressed: move our character
               		//snake.turn(left);
       		}
       		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
      		 {
        		// right key is pressed: move our character
       	        	//snake.turn(right);
                        shape.setFillColor(sf::Color::Red);
			shape.move(1.f, 0.f);
      		 }
			 
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                        shape.setFillColor(sf::Color::Green);
                        shape.move(0.f, -1.f);
                        // left key is pressed: move our character
                        //snake.turn(left);
                }
	    
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                        shape.setFillColor(sf::Color::Green);
                        shape.move(0.f, 1.f);
                        // left key is pressed: move our character
                        //snake.turn(left);
                }
	    window.clear();
	    window.draw(shape);
            window.display();

	}

	return 0;
}

