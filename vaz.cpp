#include "Cars.h"
#include "ColourMenu.h"




 VazBuilder :: VazBuilder(){

 isCreated = false;

   try{ ifstream fpin("vaz.txt", ios_base::in);
      if(!fpin.is_open())  throw 300;

   } catch(int error){ ofstream fpout("vaz.txt");  }
 }


 void  VazBuilder :: setModel(){

   ColourMenu object;
   int choice;

   object.Colour_Green_Light();
   cout << endl << "      VAZ Configuration... ";
   object.Colour_White();

   object.Colour_Green_Light();
   cout << endl << endl << " > Choose Model : ";
   object.Colour_White();

   cout << endl << "                    1) Kalina ";
   cout << endl << "                    2) Priora ";
   cout << endl << "                    3) X-ray  ";
   cout << endl << "                    4) Vesta  ";
   cout << endl << "                    "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> model = "Kalina";
                               someCar -> car_size = "3893mm x 1700mm x 1604mm";
                               someCar -> trunk = "260";
                               break;

                      case 2 : someCar -> model = "Priora" ;
                               someCar -> car_size = "4350mm x 1680mm x 1420mm";
                               someCar -> trunk = "360";
                               break;

                      case 3 : someCar -> model = "X-ray";
                               someCar -> car_size = "4165mm x 1764mm x 1570mm";
                               someCar -> trunk = "361";
                               break;

                      case 4 : someCar -> model = "Vesta";
                               someCar -> car_size = "4410mm x 1764mm x 1520mm";
                               someCar -> trunk = "480";
                               break;

                      default : throw 100;   break;
                    }
 }

 void  VazBuilder :: setColor(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Type Color : ";
   object.Colour_White();

   cin >> someCar -> color;
     if(someCar -> color.size() > 50) throw 600;
 }


 void  VazBuilder :: setEngine_type(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Engine's Type : ";
   object.Colour_White();

   cout << endl << "                          1) Petrol ";
   cout << endl << "                          2) Diesel ";
   cout << endl << "                          "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> engine_type  = "petrol";    break;
                      case 2 : someCar -> engine_type  = "diesel" ;   break;
                      default : throw 100;   break;
                    }
 }


 void  VazBuilder :: setEngine_capacity(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Engine's Capacity : ";
   object.Colour_White();

   cout << endl << "                              1) 1.6 ";
   cout << endl << "                              2) 1.8 ";
   cout << endl << "                              3) 2.0 ";
   cout << endl << "                              "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> engine_capacity = "1.6";    break;
                      case 2 : someCar -> engine_capacity = "1.8";    break;
                      case 3 : someCar -> engine_capacity = "2.0";    break;
                      default : throw 100;   break;
                    }
 }


 void  VazBuilder :: setYear(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Year of Manufacture : ";
   object.Colour_White();

   cout << endl << "                                1) 2018 ";
   cout << endl << "                                2) 2017 ";
   cout << endl << "                                "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> year = "2018";    break;
                      case 2 : someCar -> year = "2017";    break;
                      default : throw 100;   break;
                    }
 }


 void  VazBuilder :: setTires_label(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Tires : ";
   object.Colour_White();

   cout << endl << "                  1) Pirelli 210/30 R16 ";
   cout << endl << "                  2) Michelin 215/20 R18 ";
   cout << endl << "                  "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> tires_label = "Pirelli 210/30 R16";     break;
                      case 2 : someCar -> tires_label = "Michelin 215/20 R18";    break;
                      default : throw 100;   break;
                    }
 }

 void  VazBuilder :: setRoofTrunk(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Set Roof Trunk ? : ";
   object.Colour_White();

   cout << endl << "                      1) Yes ";
   cout << endl << "                      2) No ";
   cout << endl << "                      "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> roof_trunk = "Yes";   break;
                      case 2 : someCar -> roof_trunk = "No";    break;
                      default : throw 100;   break;
                    }
 }


 void  VazBuilder :: setDoors(){

   ColourMenu object;

   someCar -> doors = "5";

   object.Colour_Green_Light();
   cout << endl << endl << " > Doors : ";
   object.Colour_White();
   cout << someCar -> doors;
 }


 void  VazBuilder :: setCar_size(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Car Dimensions : ";
   object.Colour_White();
   cout << someCar -> car_size;
 }


 void  VazBuilder :: setTrunk(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Trunk's Capacity : ";
   object.Colour_White();
   cout << someCar -> trunk;

   object.Colour_Purple();
   cout << endl << endl << "-------------------------------------------------------------" << endl;
   cout << "                    Vaz Config CREARED ! Press '2' to Save it in 'vaz.txt'  " << endl << endl;

   object.Colour_White();

   isCreated = true;
 }


 void VazBuilder :: addToFile(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("vaz.txt", ios_base::app);
   if(!fpout.is_open())  throw 300;

 fpout << "    "<< someCar->model << " " << someCar->color << " " << someCar->engine_capacity  \
 << " " << someCar->engine_type << " " << someCar->year << endl;

 fpout << "-----------------------------------------------------" << endl;
 fpout << " > Model : " << someCar->model << endl;
 fpout << " > Color : " << someCar->color << endl;
 fpout << " > Year of Manufacture : " << someCar->year << endl;
 fpout << " > Engine Capacity : " << someCar->engine_capacity << endl;
 fpout << " > Engine Type : " << someCar->engine_type << endl;
 fpout << " > Car Dimensions : " << someCar->car_size << endl;
 fpout << " > Quantity of Doors : " << someCar->doors << endl;
 fpout << " > Trunk Capacity : " << someCar->trunk << endl;
 fpout << " > Tires Label : " << someCar->tires_label << endl;
 fpout << " > Roof Trunk : " << someCar->roof_trunk << endl;
 fpout << endl;

 fpout.close();

 object.Colour_Purple();
 cout << endl << "   !  Vaz's Config was Saved in 'vaz.txt  !";
 object.Colour_White();
 }


 int VazBuilder :: showCars(){

 ColourMenu object;

 char file_string[100];
 int file_size = 0;

 ifstream fpin("vaz.txt");
   if(!fpin.is_open())  throw 300;

      for(int i = 0 ;; i++ ){

        fpin.getline(file_string,100);


        if(fpin.eof() == true)
          break;

        file_size++;
      }

 fpin.close();

   if(file_size < 3) throw 400;

 string cars[file_size/13];
 int tmp = 0;
 int counter = 0;
 bool check = true;
 int choice;

 fpin.open("vaz.txt");
   if(!fpin.is_open())  throw 300;

      for(int i = 0 ; i < file_size; i++ ){

          fpin.getline(file_string,100);

              if(check == true)
              {
                  cars[tmp] = file_string;
                  tmp++;
              }

          check = false;
          counter++;

              if(counter == 13)
              {
                  check = true;
                  counter = 0;
              }
      }

 fpin.close();

 object.Colour_Blue();
 cout << endl << "  Cars in Stock : " << endl;
 object.Colour_White();

      for(int i = 0 ; i < file_size/13; i++ ){

            cout << endl << i+1 << "." << cars[i];
      }

 cout << endl << endl << " > Choose Car : ";
 cin >> choice;

 if(choice > file_size / 13) throw 100;

 fpin.open("vaz.txt");
   if(!fpin.is_open())  throw 300;

      for(int i = 0 ; i < file_size; i++ ){

          fpin.getline(file_string,100);

              if(choice == 1){
                     for(int i = 0 ; i < 13; i++ ){
                            cout << endl << file_string;
                            fpin.getline(file_string,100);
                     }
              break;
              }

              if(i == (choice - 1) * 13 - 1){
                     for(int i = 0 ; i < 13; i++ ){
                            fpin.getline(file_string,100);
                            cout << endl << file_string;
                     }
              break;
              }
      }

 fpin.close();

 return choice;
}




 void VazBuilder :: showLastCar(){

 if(isCreated == false) throw 500;

 cout << "    "<< someCar->model << " " << someCar->color << " " << someCar->engine_capacity \
 << " " << someCar->engine_type << " " << someCar->year << endl;

 cout << "-----------------------------------------------------" << endl;
 cout << " > Model : " << someCar->model << endl;
 cout << " > Color : " << someCar->color << endl;
 cout << " > Year of Manufacture : " << someCar->year << endl;
 cout << " > Engine Capacity : " << someCar->engine_capacity << endl;
 cout << " > Engine Type : " << someCar->engine_type << endl;
 cout << " > Car Dimensions : " << someCar->car_size << endl;
 cout << " > Quantity of Doors : " << someCar->doors << endl;
 cout << " > Trunk Capacity : " << someCar->trunk << endl;
 cout << " > Tires Label : " << someCar->tires_label << endl;
 cout << " > Roof Trunk : " << someCar->roof_trunk << endl;
 cout << endl;

 }





 void VazBuilder :: deleteOneCar(){

 if(isCreated == false) throw 500;

 int file_size = 0;
 int choice = showCars();

 ColourMenu object;


 ifstream fpin;
 fpin.open("vaz.txt");
   if(!fpin.is_open())  throw 300;

 ofstream fpaste("copyFile.txt");
   if(!fpaste.is_open())  throw 300;

 ifstream fcopy("copyFile.txt");
   if(!fcopy.is_open())  throw 300;

 char file_string[100];

 cout << endl << endl;

      for(int i = 0 ; ; i++ ){

          fpin.getline(file_string,100);
          fpaste << file_string << endl;

          if(fpin.eof() == true)
          break;

          file_size++;
      }

 if(file_size <= 13){
    deleteAllCars();
    return;
 }

 ofstream fpout;
 fpout.open("vaz.txt", ios_base :: trunc);
   if(!fpout.is_open())  throw 300;

 if(choice == 1) file_size = file_size - 14;
 else file_size = file_size - 13;

      for(int i = 0 ; i < file_size; i++ )
      {

          fcopy.getline(file_string,100);

          if(i != (choice - 1) * 13)
            fpout << file_string << endl;

          if(i == (choice - 1) * 13)
          {
              if(choice == 1)
              {
                 for(int j = 0 ; j < 13 ; j++)
                 fcopy.getline(file_string,100);
              }
              else
              {
                 for(int j = 0 ; j < 12 ; j++)
                 fcopy.getline(file_string,100);
              }
          }

          if(i == 0 && choice == 1)
            fpout << file_string << endl;
      }

 fpout << endl;

 fpin.close();
 fpout.close();
 fpaste.close();
 fcopy.close();

 object.Colour_Purple();
 cout << endl << "----------------------------------------------";
 cout << endl << "            ! Car DELETED !";
 object.Colour_White();
 }





 void VazBuilder :: deleteAllCars(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("vaz.txt");
   if(!fpout.is_open())  throw 300;

 fpout.clear();

 object.Colour_Purple();
 cout << endl << "  >  Cars DELETED !";
 object.Colour_White();
}

