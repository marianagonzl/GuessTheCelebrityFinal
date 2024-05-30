#include "imagen.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
int main()
{
    RenderWindow window(VideoMode(700, 700), "Ohaio onichan!");
    window.setFramerateLimit(60);

    Imagen taylor("imagenes/Taylor.jpg", "Taylor");
    Imagen meryl("imagenes/Meryl.jpg", "Meryl");
    Imagen olivia("imagenes/Olivia.jpg", "Olivia");
    Imagen rihana("imagenes/Rihana.jpg", "Rihana");
    Imagen sebastian("imagenes/Sebastian.jpg", "Sebastian");
    Imagen selena("imagenes/Selena.jpg", "Selena");
    Imagen tomh("imagenes/TomH.jpg", "TomH");
    Imagen walker("imagenes/Walker.jpg", "Walker");
    Imagen adam("imagenes/Adam.jpg", "Adam");
    Imagen cilian("imagenes/Cilian.jpg", "Cilian");
    Imagen emmaw("imagenes/EmmaW.jpg", "EmmaW");
    Imagen henryc("imagenes/HenryC.jpg", "HenryC");
    Imagen kanye("imagenes/Adam.jpg", "Adam");
    Imagen leo("imagenes/Leo.jpg", "Leo");

    vector<Imagen> imagenes;

    imagenes.push_back(taylor);
    imagenes.push_back(meryl);
    imagenes.push_back(olivia);
    imagenes.push_back(rihana);
    imagenes.push_back(sebastian);
    imagenes.push_back(selena);
    imagenes.push_back(tomh);
    imagenes.push_back(walker);
    imagenes.push_back(adam);
    imagenes.push_back(cilian);
    imagenes.push_back(emmaw);
    imagenes.push_back(henryc);
    imagenes.push_back(leo);
    imagenes.push_back(kanye);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        for (int i = 0; i <imagenes.size(); i++)
        {
            imagenes[i].drawTo(window);
            imagenes[i].sprite.setPosition(100, 100);
        }
        window.display();
        window.clear();
    }

    return 0;
}
