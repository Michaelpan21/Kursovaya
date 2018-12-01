#include "Cars.h"
#include "ColourMenu.h"




 ToyotaBuilder :: ToyotaBuilder(){

 isCreated = false;

 try{ ifstream fpin("toyota.txt", ios_base::in);
    if(!fpin.is_open())  throw 300;

 } catch(int error){ ofstream fpout("toyota.txt");  }

 }





  void  ToyotaBuilder :: setModel(){

   ColourMenu object;
   int choice;

   object.Colour_Green_Light();
   cout << endl << "      TOYOTA Configuration... ";
   object.Colour_White();

   object.Colour_Green_Light();
   cout << endl << endl << " > Choose Model : ";
   object.Colour_White();

   cout << endl << "                    1) Camry ";
   cout << endl << "                    2) Rav4 ";
   cout << endl << "                    3) Corolla  ";
   cout << endl << "                    4) Land Cruiser 200  ";
   cout << endl << "                    "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> model = "Camry";
                               someCar -> car_size = "4885mm x 1840mm x 1455mm";
                               someCar -> trunk = "350";
                               someCar -> doors = "5";
                               break;

                      case 2 : someCar -> model = "Rav4";
                               someCar -> car_size = "4605mm x 1845mm x 1690mm";
                               someCar -> trunk = "480";
                               someCar -> doors = "5";
                               break;

                      case 3 : someCar -> model = "Corolla";
                               someCar -> car_size = "4620mm x 1775mm x 1465mm";
                               someCar -> trunk = "289";
                               someCar -> doors = "5";
                               break;

                      case 4 : someCar -> model = "Land Cruiser 200";
                               someCar -> car_size = "4950mm x 1980mm x 1955mm";
                               someCar -> trunk = "550";
                               someCar -> doors = "5";
                               break;

                      default : throw 100;   break;
                    }
 }

 void  ToyotaBuilder :: setColor(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Type Color : ";
   object.Colour_White();

   cin >> someCar -> color;
     if(someCar -> color.size() > 50) throw 600;
 }


 void  ToyotaBuilder :: setEngine_type(){

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


 void  ToyotaBuilder :: setEngine_capacity(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Engine's Capacity : ";
   object.Colour_White();

   if(someCar -> model == "Camry" || someCar -> model == "Rav4")
   {
     cout << endl << "                              1) 2.0 ";
     cout << endl << "                              2) 2.5 ";
     cout << endl << "                              3) 3.5 ";
     cout << endl << "                              "; cin >> choice;

       switch(choice){
                      case 1 : someCar -> engine_capacity = "2.0";    break;
                      case 2 : someCar -> engine_capacity = "2.5";    break;
                      case 3 : someCar -> engine_capacity = "3.5";    break;
                      default : throw 100;   break;
                     }
   }

   if(someCar -> model == "Land Cruiser 200")
   {
     cout << endl << "                              1) 3.0 ";
     cout << endl << "                              2) 4.0 ";
     cout << endl << "                              3) 4.8 ";
     cout << endl << "                              4) 5.5 ";
     cout << endl << "                              "; cin >> choice;

       switch(choice){
                      case 1 : someCar -> engine_capacity = "3.0";     break;
                      case 2 : someCar -> engine_capacity = "4.0";     break;
                      case 3 : someCar -> engine_capacity = "4.8";     break;
                      case 4 : someCar -> engine_capacity = "5.5";     break;
                      default : throw 100;   break;
                     }
   }

   if(someCar -> model == "Corolla")
   {
     cout << endl << "                              1) 1.8 ";
     cout << endl << "                              2) 2.0 ";
     cout << endl << "                              "; cin >> choice;

       switch(choice){
                      case 1 : someCar -> engine_capacity = "1.8";    break;
                      case 2 : someCar -> engine_capacity = "2.0";    break;
                      default : throw 100;   break;
                     }
   }
 }


 void  ToyotaBuilder :: setYear(){

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


 void  ToyotaBuilder :: setTires_label(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Tires : ";
   object.Colour_White();

   if(someCar -> model == "Corolla" || someCar -> model == "Camry" )
   {
      cout << endl << "                  1) Pirelli 200/30 R16 ";
      cout << endl << "                  2) Michelin 215/30 R17 ";
      cout << endl << "                  "; cin >> choice;


      switch(choice){
                      case 1 : someCar -> tires_label = "Pirelli 200/30 R16";     break;
                      case 2 : someCar -> tires_label = "Michelin 215/30 R17";    break;
                      default : throw 100;   break;
                    }
   }
   else
   {
      cout << endl << "                  1) Nokian Nordman SX2 210/60 R17 ";
      cout << endl << "                  2) Nokian Nordman SX2 215/80 R17 ";
      cout << endl << "                  2) Cordiant Sport 2 215/55 R18 ";
      cout << endl << "                  2) Cordiant Sport 3 220/50 R20 ";
      cout << endl << "                  "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> tires_label = "Nokian Nordman SX2 210/60 R17";     break;
                      case 2 : someCar -> tires_label = "Nokian Nordman SX2 215/80 R17";     break;
                      case 3 : someCar -> tires_label = "Cordiant Sport 2 215/55 R18";       break;
                      case 4 : someCar -> tires_label = "Cordiant Sport 3 220/50 R20";       break;
                      default : throw 100;   break;
                    }
   }
 }

 void  ToyotaBuilder :: setATransmission(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Set Automatic Transmission ? : ";
   object.Colour_White();

   cout << endl << "                                  1) Yes ";
   cout << endl << "                                  2) No ";
   cout << endl << "                                  "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> aTransmission = "Yes";   break;
                      case 2 : someCar -> aTransmission = "No";    break;
                      default : throw 100;   break;
                    }
 }


 void  ToyotaBuilder :: setDoors(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Doors : ";
   object.Colour_White();
   cout << someCar -> doors;
 }


 void  ToyotaBuilder :: setCar_size(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Car Dimensions : ";
   object.Colour_White();
   cout << someCar -> car_size;
 }


 void  ToyotaBuilder :: setTrunk(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Trunk's Capacity : ";
   object.Colour_White();
   cout << someCar -> trunk;

   object.Colour_Purple();
   cout << endl << endl << "-------------------------------------------------------------" << endl;
   cout << "                  Toyota's Config CREARED ! Press '2' to Save it in 'toyota.txt'  " \
   << endl << endl;

   object.Colour_White();

   isCreated = true;
 }


 void ToyotaBuilder :: addToFile(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("toyota.txt", ios_base::app);
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
 fpout << " > Automatic Transmission : " << someCar->aTransmission << endl;
 fpout << endl;

 fpout.close();

 object.Colour_Purple();
 cout << endl << "   !  Toyota's Config was Saved in 'toyota.txt  !";
 object.Colour_White();
 }


 int ToyotaBuilder :: showCars(){

 ColourMenu object;

 char file_string[100];
 int file_size = 0;

 ifstream fpin("toyota.txt");
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

 fpin.open("toyota.txt");
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

 fpin.open("toyota.txt");
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




 void ToyotaBuilder :: showLastCar(){

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
 cout << " > Automatic Transmission : " << someCar->aTransmission << endl;
 cout << endl;

 }





 void ToyotaBuilder :: deleteOneCar(){

 if(isCreated == false) throw 500;

 int file_size = 0;
 int choice = showCars();

 ColourMenu object;


 ifstream fpin;
 fpin.open("toyota.txt");
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
 fpout.open("toyota.txt", ios_base :: trunc);
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





 void ToyotaBuilder :: deleteAllCars(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("toyota.txt");
   if(!fpout.is_open())  throw 300;

 fpout.clear();

 object.Colour_Purple();
 cout << endl << "  >  Cars DELETED !";
 object.Colour_White();
}
