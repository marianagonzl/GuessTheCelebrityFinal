#include "menu.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace sf;
using namespace std;

Menu::Menu(float ancho, float alto, string nom1, string nom2, string nom3)
{
    if (!font.loadFromFile("Lettering.ttf"))
    {
        // handle error
    }
    texto[0].setFont(font);
    texto[0].setColor(Color::Red);
    texto[0].setString(nom1);
    texto[0].setPosition(550, 200);

    texto[1].setFont(font);
    texto[1].setColor(Color::White);
    texto[1].setString(nom2);
    texto[1].setPosition(550, 300);

    texto[2].setFont(font);
    texto[2].setColor(Color::White);
    texto[2].setString(nom3);
    texto[2].setPosition(550, 400);

    seleccionado = 0;
}

Menu::Menu()
{
}

void Menu::draw(RenderWindow &window)
{
    for (int i = 0; i < maximo; i++)
    {
        window.draw(texto[i]);
    }
}

void Menu::MoveUp()
{
    if (seleccionado - 1 >= 0)
    {
        texto[seleccionado].setColor(Color::White);
        seleccionado--;
        texto[seleccionado].setColor(Color::Red);
    }
}

void Menu::Movedown()
{
    if (seleccionado + 1 < maximo)
    {
        texto[seleccionado].setColor(Color::White);
        seleccionado++;
        texto[seleccionado].setColor(Color::Red);
    }
}

