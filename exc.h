#include <iostream>
#include <cstdlib>

#include "ColourMenu.h"

 class Exceptions{

 public:

     void _errors(int error)
     {

      ColourMenu object;

       switch(error)
          {
            case 100 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 100  !  CHOOSE AVAILABLE NUMBERS !  Try again..." \
                       << endl << endl;
                       object.Colour_White();
                       break;

            case 200 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 200  !  Nothing to Save !  Create car..." \
                       << endl << endl;
                       object.Colour_White();
                       break;

            case 300 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 300  !  File is not allowed..." \
                       << endl << endl;
                       object.Colour_White();
                       break;

            case 400 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 400  !  File is empty..." \
                       << endl << endl;
                       object.Colour_White();
                       break;

            case 500 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 500  !  Config is empty..." \
                       << endl << endl;
                       object.Colour_White();
                       break;

            case 600 : object.Colour_Red_Light();
                       cout << endl << endl << "  >   ERROR 600  !  Too many symbols for color..." \
                       << endl << endl;
                       object.Colour_White();
                       break;
          }
     }
 };
