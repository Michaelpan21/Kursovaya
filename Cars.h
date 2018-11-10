
#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<locale.h>
#include<windows.h>
#define setlocale (LC_ALL,"Russian")

using namespace std;


class CarConfig{

 private:

     string color;
     string engine_type;
     string car_size;
     string model;
     string tires_label;
     string additions;

     float engine_capacity;

     int year;
     int doors;
     int trunk;

 friend class VazBuilder;
};


class VazBuilder{

 private:

     CarConfig cfg;

 public:

     CarConfig CreateCar();

     void CreateFile();
     void ShowConfig();

};
