#include "Cars.h"
#include "ColourMenu.h"




 NissanBuilder :: NissanBuilder(){

 isCreated = false;

   try{ ifstream fpin("nissan.txt", ios_base::in);
      if(!fpin.is_open())  throw 300;

   } catch(int error){ ofstream fpout("nissan.txt");  }
 }


 void  NissanBuilder :: setModel(){

   ColourMenu object;
   int choice;

   object.Colour_Green_Light();
   cout << endl << "      NISSAN Configuration... ";
   object.Colour_White();

   object.Colour_Green_Light();
   cout << endl << endl << " > Choose Model : ";
   object.Colour_White();

   cout << endl << "                    1) Teana ";
   cout << endl << "                    2) Qashqai ";
   cout << endl << "                    3) X-trail  ";
   cout << endl << "                    4) GT-R  ";
   cout << endl << "                    5) Juke  ";
   cout << endl << "                    6) Murano  ";
   cout << endl << "                    "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> model = "Teana";
                               someCar -> car_size = "4770mm x 1805mm x 1475mm";
                               someCar -> trunk = "172";
                               someCar -> doors = "5";
                               break;

                      case 2 : someCar -> model = "Qashqai";
                               someCar -> car_size = "4377mm x 1806mm x 1590mm";
                               someCar -> trunk = "450";
                               someCar -> doors = "5";
                               break;

                      case 3 : someCar -> model = "X-trail";
                               someCar -> car_size = "4640mm x 1820mm x 1710mm";
                               someCar -> trunk = "603";
                               someCar -> doors = "5";
                               break;

                      case 4 : someCar -> model = "GT-R";
                               someCar -> car_size = "4710mm x 1895mm x 1370mm";
                               someCar -> trunk = "315";
                               someCar -> doors = "3";
                               break;

                      case 5 : someCar -> model = "Juke";
                               someCar -> car_size = "4135mm x 1765mm x 1565mm";
                               someCar -> trunk = "354";
                               someCar -> doors = "5";
                               break;

                      case 6 : someCar -> model = "Murano";
                               someCar -> car_size = "4898mm x 1915mm x 1691mm";
                               someCar -> trunk = "480";
                               someCar -> doors = "5";
                               break;

                      default : throw 100;   break;
                    }
 }

 void  NissanBuilder :: setColor(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Type Color : ";
   object.Colour_White();

   cin >> someCar -> color;
     if(someCar -> color.size() > 50) throw 600;
 }


 void  NissanBuilder :: setEngine_type(){

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


 void  NissanBuilder :: setEngine_capacity(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Engine's Capacity : ";
   object.Colour_White();

   if(someCar -> model == "GT-R")
   {
     cout << endl << "                              1) 2.0t ";
     cout << endl << "                              2) 2.5t ";
     cout << endl << "                              3) 3.5bt ";
     cout << endl << "                              "; cin >> choice;

       switch(choice){
                      case 1 : someCar -> engine_capacity = "2.0t";    break;
                      case 2 : someCar -> engine_capacity = "2.5t";    break;
                      case 3 : someCar -> engine_capacity = "3.5bt ";  break;
                      default : throw 100;   break;
                     }
   }
   else
   {
     cout << endl << "                              1) 1.2t ";
     cout << endl << "                              2) 1.8t ";
     cout << endl << "                              3) 2.0 ";
     cout << endl << "                              4) 2.5 ";
     cout << endl << "                              "; cin >> choice;

       switch(choice){
                      case 1 : someCar -> engine_capacity = "1.2t";    break;
                      case 2 : someCar -> engine_capacity = "1.8t";    break;
                      case 3 : someCar -> engine_capacity = "2.0";     break;
                      case 4 : someCar -> engine_capacity = "2.5";     break;
                      default : throw 100;   break;
                     }
   }
 }


 void  NissanBuilder :: setYear(){

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


 void  NissanBuilder :: setTires_label(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Choose Tires : ";
   object.Colour_White();

   if(someCar -> model == "GT-R")
   {
      cout << endl << "                  1) Pirelli 280/30 R19 ";
      cout << endl << "                  2) Michelin 285/25 R20 ";
      cout << endl << "                  "; cin >> choice;


      switch(choice){
                      case 1 : someCar -> tires_label = "Pirelli 280/30 R19";     break;
                      case 2 : someCar -> tires_label = "Michelin 285/25 R20";    break;
                      default : throw 100;   break;
                    }
   }
   else
   {
      cout << endl << "                  1) Nokian Nordman SX2 205/55 R16 ";
      cout << endl << "                  2) Nokian Nordman SX2 215/55 R18 ";
      cout << endl << "                  2) Cordiant Sport 2 215/55 R18 ";
      cout << endl << "                  2) Cordiant Sport 3 220/50 R20 ";
      cout << endl << "                  "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> tires_label = "Nokian Nordman SX2 205/55 R16";     break;
                      case 2 : someCar -> tires_label = "Nokian Nordman SX2 215/55 R18";     break;
                      case 3 : someCar -> tires_label = "Cordiant Sport 2 215/55 R18";       break;
                      case 4 : someCar -> tires_label = "Cordiant Sport 3 220/50 R20";       break;
                      default : throw 100;   break;
                    }
   }
 }

 void  NissanBuilder :: setChairHitter(){

   int choice;
   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << " > Set Hit of Chair ? : ";
   object.Colour_White();

   cout << endl << "                        1) Yes ";
   cout << endl << "                        2) No ";
   cout << endl << "                        "; cin >> choice;

      switch(choice){
                      case 1 : someCar -> chair_hitter = "Yes";   break;
                      case 2 : someCar -> chair_hitter = "No";    break;
                      default : throw 100;   break;
                    }
 }


 void  NissanBuilder :: setDoors(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Doors : ";
   object.Colour_White();
   cout << someCar -> doors;
 }


 void  NissanBuilder :: setCar_size(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Car Dimensions : ";
   object.Colour_White();
   cout << someCar -> car_size;
 }


 void  NissanBuilder :: setTrunk(){

   ColourMenu object;

   object.Colour_Green_Light();
   cout << endl << endl << " > Trunk's Capacity : ";
   object.Colour_White();
   cout << someCar -> trunk;

   object.Colour_Purple();
   cout << endl << endl << "-------------------------------------------------------------" << endl;
   cout << "                  Nissan's Config CREARED ! Press '2' to Save it in 'nissan.txt'  " \
   << endl << endl;

   object.Colour_White();

   isCreated = true;
 }


 void NissanBuilder :: addToFile(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("nissan.txt", ios_base::app);
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
 fpout << " > Chair Hitter : " << someCar->chair_hitter << endl;
 fpout << endl;

 fpout.close();

 object.Colour_Purple();
 cout << endl << "   !  Nissan's Config was Saved in 'nissan.txt  !";
 object.Colour_White();
 }


 int NissanBuilder :: showCars(){

 ColourMenu object;

 char file_string[100];
 int file_size = 0;

 ifstream fpin("nissan.txt");
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

 fpin.open("nissan.txt");
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

 fpin.open("nissan.txt");
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




 void NissanBuilder :: showLastCar(){

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
 cout << " > Chair Hitter : " << someCar->chair_hitter << endl;
 cout << endl;

 }





 void NissanBuilder :: deleteOneCar(){

 if(isCreated == false) throw 500;

 int file_size = 0;
 int choice = showCars();

 ColourMenu object;

 ifstream fpin;
 fpin.open("nissan.txt");
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
 fpout.open("nissan.txt", ios_base :: trunc);
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





 void NissanBuilder :: deleteAllCars(){

 if(isCreated == false) throw 500;

 ColourMenu object;

 ofstream fpout;
 fpout.open("nissan.txt");
   if(!fpout.is_open())  throw 300;

 fpout.clear();

 object.Colour_Purple();
 cout << endl << "  >  Cars DELETED !";
 object.Colour_White();
}
