#include <iostream>

#include "Cars.h"
#include "Menu.h"
#include "exc.h"


int main()
{
    Director dir;

    VazBuilder vaz_builder;
    NissanBuilder nissan_builder;
    KiaBuilder kia_builder;
    ToyotaBuilder toyota_builder;

    CarConfig* vaz;
    CarConfig* nissan;
    CarConfig* kia;
    CarConfig* toyota;

    ShowMenu menu;
    ColourMenu object;
    Exceptions catchError;


    int choice_car;
    int choice_in_menu;


    do{

        object.Colour_Blue();
        menu.mainMenu();
        object.Colour_White();

        cin >> choice_car;
        cout <<"\n\n";

         try
         {

           switch(choice_car)
           {

             case 1 :

                do
                {
                  try
                  {
                    object.Colour_Blue_Light();
                    menu._show(choice_car);
                    menu.localMenu();
                    object.Colour_White();

                    cin >> choice_in_menu;
                    cout <<"\n\n";

                    switch(choice_in_menu){

                      case 1 : vaz = dir.createCar(vaz_builder);      break;

                      case 2 : vaz_builder.addToFile();               break;

                      case 3 : vaz_builder.showCars();                break;

                      case 4 : vaz_builder.showLastCar();             break;

                      case 5 : vaz_builder.deleteOneCar();            break;

                      case 6 : vaz_builder.deleteAllCars();           break;

                      case 0 : choice_in_menu = 0;                    break;

                      default : throw 100;                            break;
                    }

                  }catch(int error){
                     catchError._errors(error);
                   }
                }
                while(choice_in_menu != 0);
                break;

            case 2 :

               do
                {
                  try
                  {
                    object.Colour_Blue_Light();
                    menu._show(choice_car);
                    menu.localMenu();
                    object.Colour_White();

                    cin >> choice_in_menu;
                    cout <<"\n\n";

                    switch(choice_in_menu){

                      case 1 : nissan = dir.createCar(nissan_builder);   break;

                      case 2 : nissan_builder.addToFile();               break;

                      case 3 : nissan_builder.showCars();                break;

                      case 4 : nissan_builder.showLastCar();             break;

                      case 5 : nissan_builder.deleteOneCar();            break;

                      case 6 : nissan_builder.deleteAllCars();           break;

                      case 0 : choice_in_menu = 0;                       break;

                      default : throw 100;                               break;
                    }

                  }catch(int error){
                     catchError._errors(error);
                   }
                }
                while(choice_in_menu != 0);
                break;

           case 3 :

               do
                {
                  try
                  {
                    object.Colour_Blue_Light();
                    menu._show(choice_car);
                    menu.localMenu();
                    object.Colour_White();

                    cin >> choice_in_menu;
                    cout <<"\n\n";

                    switch(choice_in_menu){

                      case 1 : kia = dir.createCar(kia_builder);      break;

                      case 2 : kia_builder.addToFile();               break;

                      case 3 : kia_builder.showCars();                break;

                      case 4 : kia_builder.showLastCar();             break;

                      case 5 : kia_builder.deleteOneCar();            break;

                      case 6 : kia_builder.deleteAllCars();           break;

                      case 0 : choice_in_menu = 0;                    break;

                      default : throw 100;                            break;
                    }

                  }catch(int error){
                     catchError._errors(error);
                   }
                }
                while(choice_in_menu != 0);
                break;

           case 4 :

               do
                {
                  try
                  {
                    object.Colour_Blue_Light();
                    menu._show(choice_car);
                    menu.localMenu();
                    object.Colour_White();

                    cin >> choice_in_menu;
                    cout <<"\n\n";

                    switch(choice_in_menu){

                      case 1 : toyota = dir.createCar(toyota_builder);   break;

                      case 2 : toyota_builder.addToFile();               break;

                      case 3 : toyota_builder.showCars();                break;

                      case 4 : toyota_builder.showLastCar();             break;

                      case 5 : toyota_builder.deleteOneCar();            break;

                      case 6 : toyota_builder.deleteAllCars();           break;

                      case 0 : choice_in_menu = 0;                       break;

                      default : throw 100;                               break;
                    }

                  }catch(int error){
                     catchError._errors(error);
                   }
                }
                while(choice_in_menu != 0);
                break;


            case 0: choice_car = 0; break;

            default : throw 100;
           }
        }
        catch(int error){

           catchError._errors(error);

        }

  }
  while(choice_car != 0);



    return 0;
}
