#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class Imagen{
    public:
        int x;
        int y;
        int sizeX, sizeY;

        Texture texture;
        Sprite sprite;
        string nombre;
        Imagen(string direccionImagen, string nombre);
        void drawTo(RenderWindow &window);

    
};