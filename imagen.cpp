#include "imagen.hpp"
#include <cstdlib>

Imagen::Imagen(string direccionImagen,string nombre){
    if(!texture.loadFromFile(direccionImagen)){
        cout<<"error"<<endl;
    }
    texture.setRepeated(true);
    this->sprite.setTexture(texture);
    
    this->sizeX=100;
    this->sizeY=100;
    this->x = rand() % 250 + 100;
    this->y= rand() % 250 + 100;
    this->sprite.setTextureRect(IntRect(this->x,this->y,this->sizeX,this->sizeY));
    this->sprite.setScale(5,5);
}

void Imagen::drawTo(RenderWindow &window){
    window.draw(this->sprite);
}

