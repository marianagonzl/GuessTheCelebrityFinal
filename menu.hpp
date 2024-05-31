#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

#define maximo 3

class Menu
{
    public:
    Menu(float width , float height, string nom1, string nom2, string nom3);
    //void RespuestaTaylor(float ancho, float alto);
    Menu();

    void draw(RenderWindow &window);
    void MoveUp();
    void Movedown();
    int SeleccionarRespuesta() {return seleccionado;}

    
    Font font;
    Text texto[maximo];
    int seleccionado;
};
