#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Seleccion
{
public:
    Sprite respuestas;
    Texture textura;
    //bool seleccionado(Vector2f posicionMouse);
    void menu();
};