#include "Cars.h"
#include "ColourMenu.h"


 CarConfig VazBuilder :: CreateCar(){

 int choice;

 cout << endl << "      VAZ Configuration... ";


 cout << endl << endl << " > Choose Model : ";
 cout << endl << "                    1) Kalina ";
 cout << endl << "                    2) Priora ";
 cout << endl << "                    3) X-ray  ";
 cout << endl << "                    4) Vesta  ";
 cout << endl << "                    "; cin >> choice;

    switch(choice){
                    case 1 : cfg.model = "Kalina";
                             cfg.car_size = "3893mm x 1700mm x 1604mm";
                             cfg.trunk = 260;
                             break;

                    case 2 : cfg.model = "Priora" ;
                             cfg.car_size = "4350mm x 1680mm x 1420mm";
                             cfg.trunk = 360;
                             break;

                    case 3 : cfg.model = "X-ray";
                             cfg.car_size = "4165mm x 1764mm x 1570mm";
                             cfg.trunk = 361;
                             break;

                    case 4 : cfg.model = "Vesta";
                             cfg.car_size = "4410mm x 1764mm x 1520mm";
                             cfg.trunk = 480;
                             break;
                  }

     cfg.doors = 5;
     cfg.additions ="NO";

 cout << endl << endl << " > Type Color : ";
 cin >> cfg.color;


 cout << endl << " > Choose Engine's Type : ";
 cout << endl << "                          1) Petrol ";
 cout << endl << "                          2) Diesel ";
 cout << endl << "                          "; cin >> choice;

    switch(choice){
                    case 1 : cfg.engine_type  = "Petrol";    break;
                    case 2 : cfg.engine_type  = "Diesel" ;   break;
                  }



 cout << endl << " > Choose Engine's Capacity : ";
 cout << endl << "                              1) 1.6 ";
 cout << endl << "                              2) 1.8 ";
 cout << endl << "                              3) 2.0  ";
 cout << endl << "                              "; cin >> choice;

    switch(choice){
                    case 1 : cfg.engine_capacity = 1.6;    break;
                    case 2 : cfg.engine_capacity = 1.8;    break;
                    case 3 : cfg.engine_capacity = 2.0;    break;
                  }


 cout << endl << " > Choose Year of Manufacture : ";
 cout << endl << "                                1) 2018 ";
 cout << endl << "                                2) 2017 ";
 cout << endl << "                                "; cin >> choice;

    switch(choice){
                    case 1 : cfg.year = 2018;    break;
                    case 2 : cfg.year = 2017;    break;
                  }


 cout << endl << " > Choose Tires : ";
 cout << endl << "                  1) Pirelli 210/30 R16 ";
 cout << endl << "                  2) Michelin 215/20 R18 ";
 cout << endl << "                  "; cin >> choice;

    switch(choice){
                    case 1 : cfg.tires_label = "Pirelli 210/30 R16";     break;
                    case 2 : cfg.tires_label = "Michelin 215/20 R18";    break;
                  }

 cout << endl << endl << " > Doors : " << cfg.doors;


 cout << endl << endl << " > Car Dimensions : " << cfg.car_size;


 cout << endl << endl << " > Trunk's Capacity : " << cfg.trunk;
 cout << endl << endl << " > Additions : " << cfg.additions;

 cout << endl << endl << "-------------------------------------------------------------" << endl;
 cout << "                   ! Vaz Config saved in vaz.txt !  " << endl << endl;

 return cfg;
 }



 void VazBuilder :: CreateFile(){

 fstream fpout("vaz.txt");


fpout << "     " << cfg.model << " " << cfg.color << " " << cfg.engine_capacity << " " << cfg.engine_type << " " << cfg.year << endl;
 fpout << "-------------------------------------------------------------" << endl;
 fpout << " > Model : " << cfg.model << endl;
 fpout << " > Color : " << cfg.color << endl;
 fpout << " > Year of Manufacture : " << cfg.year << endl;
 fpout << " > Engine Capacity : " << cfg.engine_capacity << endl;
 fpout << " > Engine Type : " << cfg.engine_type << endl;
 fpout << " > Car Dimensions : " << cfg.car_size << endl;
 fpout << " > Quantity of Doors : " << cfg.doors << endl;
 fpout << " > Trunk Capacity : " << cfg.trunk << endl;
 fpout << " > Tires Label : " << cfg.tires_label << endl;
 fpout << " > Additions : " << cfg.additions << endl;


 }
