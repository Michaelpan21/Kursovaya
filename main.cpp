#include <iostream>

#include "Cars.h"
#include "Menu.h"


int main()
{
    VazBuilder vaz;

    ShowMenu menu;


    int choice;

    do{

        menu.LocalMenu();

        cin >> choice;
        cout <<"\n\n";


        switch(choice){

            case 1 : vaz.CreateCar();      break;

            case 2 : vaz.CreateFile();     break;

            case 3 : vaz.ShowCars();       break;

            case 4 : vaz.ShowLastCar();    break;

            case 5 : vaz.DeleteOneCar();   break;

            case 6 : vaz.DeleteAllCars();  break;

            default : choice = -1;

        }

     if(choice == -1)  break;


    }
  while(choice);



    return 0;
}
