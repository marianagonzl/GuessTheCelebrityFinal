#include "imagen.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.hpp"
#include <cstdlib>
#include <ctime>
using namespace sf;
using namespace std;

int oportunidades = 2;

int main()
{

cout<<"  ________                              ___________.__             _________        .__        ___.         .__  __               " << endl;
cout<<" /  _____/ __ __   ____   ______ ______ \\__    ___/|  |__   ____   \\_   ___ \\  ____ |  |   ____\\_ |_________|__|/  |_ ___.__.     " << endl;
cout<<"/   \\  ___|  |  \\_/ __ \\ /  ___//  ___/   |    |   |  |  \\_/ __ \\  /    \\  \\/_/ __ \\|  | _/ __ \\| __ \\_  __ \\  \\   __<   |  |     " << endl;
cout<<"\\    \\_\\  \\  |  /\\  ___/ \\___ \\ \\___ \\    |    |   |   Y  \\  ___/  \\     \\___\\  ___/|  |_\\  ___/| \\_\\ \\  | \\/  ||  |  \\___  |     " << endl;
cout<<" \\______  /____/  \\___  >____  >____  >   |____|   |___|  /\\___  >  \\______  /\\___  >____/\\___  >___  /__|  |__||__|  / ____|     " << endl;
cout<<"        \\/            \\/     \\/     \\/                  \\/     \\/          \\/     \\/          \\/    \\/                \\/          " << endl;

    RenderWindow window(VideoMode(800, 710), "Ohaio onichan!");
    window.setFramerateLimit(60);
    /*
         Texture portadaTexture;

        portadaTexture.loadFromFile("imagenes/portada.jpg"))
        {
            cout << "Error al cargar imagen" << endl;
        }

        portadaTexture.setRepeated(true);

        Sprite portada;
        portada.setTexture(portadaTexture);
        portada.setTextureRect(IntRect(255,255,255));

          window.clear(Color(51,51,51));
            window.draw(portada);
            window.display();
            window.clear();*/

    Menu lol(100, 100, "Taylor Swift", "Sabrina Carpenter", "Jennifer Lawrence");
    Menu lol1(100, 100, "Caitlyn Jenner", "Meryl Streep", "Julie Walters");
    Menu lol2(100, 100, "Olivia Rodrigo", "Jenna Ortega", "Jojo Siwa");
    Menu lol3(100, 100, "Beyonce", "Jennifer Lopez", "Rihanna");
    Menu lol4(100, 100, "Chris Evans", "Sebastian Stan", "Chris Hemsworth");
    Menu lol5(100, 100, "Karen Polinesia", "Selena Gomez", "Rosalia");
    Menu lol6(100, 100, "Tom Hiddleston", "Harry Styles", "Ryan Gosling");
    Menu lol7(100, 100, "Jacob Tremblay", "Walker Scobell", "Jaden Walton");
    Menu lol8(100, 100, "David Schwimmer", "Pete Davidson", "Adam Sandler");
    Menu lol9(100, 100, "Tom Hardy", "Rami Malek", "Cillian Murphy");
    Menu lol10(100, 100, "Emma Watson", "Eiza Gonzalez", "Elizabeth Olsen");
    Menu lol11(100, 100, "Ben Affleck", "Henry Cavill", "Christian Bale");
    Menu lol12(100, 100, "Kanye West", "Travis Scott", "Kendrick Lamar");
    Menu lol13(100, 100, "Brad Pitt", "Johnny Depp", "Leonardo DiCaprio");

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
                   // if (flechas == 1)
                        lol1.MoveUp();
                   // if (flechas == 2)
                        lol2.MoveUp();
                 //   if (flechas == 3)
                        lol3.MoveUp();
                  //  if (flechas == 4)
                        lol4.MoveUp();
                 //   if (flechas == 5)
                        lol5.MoveUp();
                 //   if (flechas == 6)
                        lol6.MoveUp();
                 //   if (flechas == 7)
                        lol7.MoveUp();
                //    if (flechas == 8)
                        lol8.MoveUp();
                //    if (flechas == 9)
                        lol9.MoveUp();
               //     if (flechas == 10)
                        lol10.MoveUp();
             //       if (flechas == 11)
                        lol11.MoveUp();
                //    if (flechas == 12)
                        lol12.MoveUp();
               //     if (flechas == 13)
                        lol13.MoveUp();
                    break;

                case Keyboard::Down:
                lol.Movedown();
                    //if (flechas == 1)
                        lol1.Movedown();
                    //if (flechas == 2)
                        lol2.Movedown();
                    //if (flechas == 3)
                        lol3.Movedown();
                   // if (flechas == 4)
                        lol4.Movedown();
                   // if (flechas == 5)
                        lol5.Movedown();
                   // if (flechas == 6)
                        lol6.Movedown();
                   // if (flechas == 7)
                        lol7.Movedown();
                    //if (flechas == 8)
                        lol8.Movedown();
                  //  if (flechas == 9)
                        lol9.Movedown();
                   // if (flechas == 10)
                        lol10.Movedown();
                   // if (flechas == 11)
                        lol11.Movedown();
                  //  if (flechas == 12)
                        lol12.Movedown();
                  //  if (flechas == 13)
                        lol13.Movedown();

                    break;

                case Keyboard::Return:
                    switch (lol.SeleccionarRespuesta()) // Taylor
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;

                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;                
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                       
                        break;
                    }
                    break;

                    switch (lol1.SeleccionarRespuesta()) // Meryl
                    {
                    case 0:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol2.SeleccionarRespuesta()) // Olivia
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol3.SeleccionarRespuesta()) // Rihanna
                    {
                    case 0:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;
                    }
                    break;

                    switch (lol4.SeleccionarRespuesta()) // Sebastian
                    {
                    case 0:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol5.SeleccionarRespuesta()) // Selena
                    {
                    case 0:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol6.SeleccionarRespuesta()) // Tom H
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol7.SeleccionarRespuesta()) // Walker
                    {
                    case 0:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol8.SeleccionarRespuesta()) // Adam
                    {
                    case 0:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;
                    }
                    break;

                    switch (lol9.SeleccionarRespuesta()) // Cillian
                    {
                    case 0:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;
                    }
                    break;

                    switch (lol10.SeleccionarRespuesta()) // Emma W
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol11.SeleccionarRespuesta()) // Henry C
                    {
                    case 0:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "Correcto tilin eres un super papu kawaiiL" << endl;
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol12.SeleccionarRespuesta()) // Kanye
                    {
                    case 0:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;
                    }
                    break;

                    switch (lol13.SeleccionarRespuesta()) // leo
                    {
                    case 0:
                        cout << "Eres un looser te equivocaste" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades; 
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 1:
                        cout << "NOOOOOO MAAAALLLLL" << endl;
                        oportunidades--;
                        if(oportunidades<=0)
                        {
                            window.close();
                            cout << "Perdiste onichan. Te quedaste sin oportunidades" << endl;

                        }else{
                             cout << oportunidades;
                        cout << "Tienes: "<< oportunidades << " oportunidad" << endl;
                        }
                        break;

                    case 2:
                        cout << "Correcto tilin eres un super papu kawaii" << endl;
                        break;
                    }
                    break;
                }

                break;
            case Event::Closed:
                window.close();

                break;
            }
            // window.clear();
        }

        //int random = rand() % 15;
        imagenes[0].drawTo(window);
        imagenes[0].sprite.setPosition(25, 100);

        lol.draw(window);
        window.display();
        window.clear();
    }

    return 0;
}

/*
for (int i=0; i<imagenes.size(); i++){
if(//si le atino){
    i++
}
else{
//mensaje de que no y se reducen oportunidades

}
}

*/