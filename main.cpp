#include "imagen.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.hpp"
#include <cstdlib>
#include <ctime>
using namespace sf;
using namespace std;

int main()
{
    RenderWindow window(VideoMode(800, 800), "Ohaio onichan!");
    window.setFramerateLimit(60);

    Menu lol(100, 100, "Taylor Swift", "Sabrina Carpenter", "Jennifer Lawrence");
    Menu lol1(100, 100, "Caitlyn Jenner", "Meryl Streep", "Julie Walters");
    Menu lol2(100, 100, "Olivia Rodrigo", "Jenna Ortega", "Jojo Siwa");
    Menu lol3(100, 100, "Beyonce", "", "Rihanna");
    Menu lol4(100, 100, " ", "Sebastian Stan", "");
    Menu lol5(100, 100, "Taylor Swift", "Selena Gomez", "Jennifer");
    Menu lol6(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol7(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol8(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol9(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol10(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol11(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol12(100, 100, "Taylor Swift", "Sabrina", "Jennifer");
    Menu lol13(100, 100, "Taylor Swift", "Sabrina", "Jennifer");

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
            /*if (event.type == Event::Closed)
                window.close();*/
            switch (event.type)
            {
            case Event::KeyReleased:
                switch (event.key.code)
                {
                case Keyboard::Up:
                    lol.MoveUp();
                    break;

                case Keyboard::Down:
                    lol.Movedown();
                    break;

                case Keyboard::Return:
                    switch (lol.SeleccionarRespuesta())
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        break;
                    }
                    break;
                }
                break;
            case Event::Closed:
                window.close();

                break;
            }
        }
        /*
       srand(time(NULL));
       int random = rand() % 15;
        */
        imagenes[0].drawTo(window);
       /* imagenes[1].drawTo(window);
        imagenes[2].drawTo(window);
        imagenes[3].drawTo(window);
        imagenes[4].drawTo(window);
        imagenes[5].drawTo(window);
        imagenes[6].drawTo(window);
        imagenes[7].drawTo(window);
        imagenes[8].drawTo(window);
        imagenes[9].drawTo(window);
        imagenes[10].drawTo(window);
        imagenes[11].drawTo(window);
        imagenes[12].drawTo(window);
        imagenes[13].drawTo(window);*/

        imagenes[0].sprite.setPosition(25, 100);

        lol.draw(window);
        window.display();
        window.clear();
    }

    return 0;
}
