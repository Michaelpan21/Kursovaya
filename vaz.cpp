#include "Cars.h"
#include "ColourMenu.h"




 VazBuilder :: VazBuilder(){

 cfg.file_size = 0;

 try{ ifstream fpin("vaz.txt", ios_base::in);
    if(!fpin.is_open())  throw 100;

 } catch(int error){ ofstream fpout("vaz.txt");  }

 }





 CarConfig VazBuilder :: CreateCar(){

 int choice;
 ColourMenu object;

 object.Colour_Purple();
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
                    case 1 : cfg.model = "Kalina";
                             cfg.car_size = "3893mm x 1700mm x 1604mm";
                             cfg.trunk = "260";
                             break;

                    case 2 : cfg.model = "Priora" ;
                             cfg.car_size = "4350mm x 1680mm x 1420mm";
                             cfg.trunk = "360";
                             break;

                    case 3 : cfg.model = "X-ray";
                             cfg.car_size = "4165mm x 1764mm x 1570mm";
                             cfg.trunk = "361";
                             break;

                    case 4 : cfg.model = "Vesta";
                             cfg.car_size = "4410mm x 1764mm x 1520mm";
                             cfg.trunk = "480";
                             break;
                  }



     cfg.doors = "5";
     cfg.additions ="NO";


 object.Colour_Green_Light();
 cout << endl << endl << " > Type Color : ";
 object.Colour_White();

 cin >> cfg.color;


 object.Colour_Green_Light();
 cout << endl << " > Choose Engine's Type : ";
 object.Colour_White();

 cout << endl << "                          1) Petrol ";
 cout << endl << "                          2) Diesel ";
 cout << endl << "                          "; cin >> choice;

    switch(choice){
                    case 1 : cfg.engine_type  = "petrol";    break;
                    case 2 : cfg.engine_type  = "diesel" ;   break;
                  }


 object.Colour_Green_Light();
 cout << endl << " > Choose Engine's Capacity : ";
 object.Colour_White();

 cout << endl << "                              1) 1.6 ";
 cout << endl << "                              2) 1.8 ";
 cout << endl << "                              3) 2.0 ";
 cout << endl << "                              "; cin >> choice;

    switch(choice){
                    case 1 : cfg.engine_capacity = "1.6";    break;
                    case 2 : cfg.engine_capacity = "1.8";    break;
                    case 3 : cfg.engine_capacity = "2.0";    break;
                  }

 object.Colour_Green_Light();
 cout << endl << " > Choose Year of Manufacture : ";
 object.Colour_White();

 cout << endl << "                                1) 2018 ";
 cout << endl << "                                2) 2017 ";
 cout << endl << "                                "; cin >> choice;

    switch(choice){
                    case 1 : cfg.year = "2018";    break;
                    case 2 : cfg.year = "2017";    break;
                  }

 object.Colour_Green_Light();
 cout << endl << " > Choose Tires : ";
 object.Colour_White();

 cout << endl << "                  1) Pirelli 210/30 R16 ";
 cout << endl << "                  2) Michelin 215/20 R18 ";
 cout << endl << "                  "; cin >> choice;

    switch(choice){
                    case 1 : cfg.tires_label = "Pirelli 210/30 R16";     break;
                    case 2 : cfg.tires_label = "Michelin 215/20 R18";    break;
                  }
 object.Colour_Green_Light();
 cout << endl << endl << " > Doors : ";
 object.Colour_White();
 cout << cfg.doors;

 object.Colour_Green_Light();
 cout << endl << endl << " > Car Dimensions : ";
 object.Colour_White();
 cout << cfg.car_size;

 object.Colour_Green_Light();
 cout << endl << endl << " > Trunk's Capacity : ";
 object.Colour_White();
 cout << cfg.trunk;

 object.Colour_Green_Light();
 cout << endl << endl << " > Additions : ";
 object.Colour_White();
 cout << cfg.additions;

 object.Colour_Purple();
 cout << endl << endl << "-------------------------------------------------------------" << endl;
 cout << "                    Vaz Config CREARED ! Press '2' to Save it in 'vaz.txt'  " << endl << endl;

 object.Colour_White();

 return cfg;
 }







 void VazBuilder :: CreateFile(){

 ColourMenu object;

 ofstream fpout;
 fpout.open("vaz.txt", ios_base::app);


 fpout << "    "<< cfg.model << " " << cfg.color << " " << cfg.engine_capacity  \
 << " " << cfg.engine_type << " " << cfg.year << endl;

 fpout << "-----------------------------------------------------" << endl;
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
 fpout << "!" << endl;

 fpout.close();

 object.Colour_Purple();
 cout << endl << "   !  Vaz's Config was Saved in 'vaz.txt  !";
 object.Colour_White();
 }





 int VazBuilder :: ShowCars(){

 ColourMenu object;

 int file_size = 0;
 char file_string[100];

 ifstream fpin("vaz.txt");

      for(int i = 0 ;; i++ ){

        fpin.getline(file_string,100);


        if(fpin.eof() == true)
          break;

        file_size++;
      }

 fpin.close();

 string cars[file_size/13];
 int tmp = 0;
 int counter = 0;
 bool check = true;
 int choice;

 fpin.open("vaz.txt");

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

 fpin.open("vaz.txt");

      for(int i = 0 ; i < file_size; i++ ){

          fpin.getline(file_string,100);

              if(choice == 1){
                     for(int i = 0 ; i < 13; i++ ){
                            fpin.getline(file_string,100);
                     }
              break;
              }

              if(i == (choice - 1) * 13 - 1){
                     for(int i = 0 ; i < 13; i++ ){
                            fpin.getline(file_string,100);
                     }
              break;
              }
      }

 fpin.close();

 return choice;
}




 void VazBuilder :: ShowLastCar(){

 cout << "    "<< cfg.model << " " << cfg.color << " " << cfg.engine_capacity \
 << " " << cfg.engine_type << " " << cfg.year << endl;

 cout << "-----------------------------------------------------" << endl;
 cout << " > Model : " << cfg.model << endl;
 cout << " > Color : " << cfg.color << endl;
 cout << " > Year of Manufacture : " << cfg.year << endl;
 cout << " > Engine Capacity : " << cfg.engine_capacity << endl;
 cout << " > Engine Type : " << cfg.engine_type << endl;
 cout << " > Car Dimensions : " << cfg.car_size << endl;
 cout << " > Quantity of Doors : " << cfg.doors << endl;
 cout << " > Trunk Capacity : " << cfg.trunk << endl;
 cout << " > Tires Label : " << cfg.tires_label << endl;
 cout << " > Additions : " << cfg.additions << endl;
 cout << endl;

 }





 void VazBuilder :: DeleteOneCar(){

 int file_size = 0;
 int choice = ShowCars();

 ColourMenu object;


 ifstream fpin;
 fpin.open("vaz.txt");

 ofstream fpaste("copyFile.txt");

 ifstream fcopy("copyFile.txt");

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
    DeleteAllCars();
    return;
 }

 ofstream fpout;
 fpout.open("vaz.txt", ios_base :: trunc);

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





 void VazBuilder :: DeleteAllCars(){

  ColourMenu object;

  ofstream fpout;
  fpout.open("vaz.txt");

  fpout.clear();

  object.Colour_Purple();
  cout << endl << "            ! Cars DELETED !";
  object.Colour_White();
  }
