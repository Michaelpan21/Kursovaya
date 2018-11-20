
#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<locale.h>
#include<windows.h>



using namespace std;


class CarConfig{

 private:

     string color;
     string engine_type;
     string car_size;
     string model;
     string tires_label;
     string additions;
     string engine_capacity;
     string doors;
     string trunk;
     string year;

     int file_size;

 friend class VazBuilder;
};


class VazBuilder{

 private:

     CarConfig cfg;

 public:

     VazBuilder();
     CarConfig CreateCar();
     void CreateFile();
     int  ShowCars();
     void ShowLastCar();
     void DeleteOneCar();
     void DeleteAllCars();


};
