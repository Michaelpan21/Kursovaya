
#include<iostream>
#include<fstream>
#include<string>
#include<locale.h>
#include<windows.h>



using namespace std;


class CarConfig{

 public:

     string color;
     string engine_type;
     string car_size;
     string model;
     string tires_label;
     string aTransmission;
     string roof_trunk;
     string mirror_hitter;
     string chair_hitter;
     string engine_capacity;
     string doors;
     string trunk;
     string year;
};

class CarBuilder{

 protected:

    CarConfig* someCar;

 public:

    virtual ~CarBuilder() {};
    virtual void createCar() {};
    virtual void setColor() {};
    virtual void setEngine_type() {};
    virtual void setCar_size() {};
    virtual void setModel() {};
    virtual void setTires_label() {};
    virtual void setATransmission() {};
    virtual void setRoofTrunk() {};
    virtual void setMirrorHitter() {};
    virtual void setChairHitter() {};
    virtual void setEngine_capacity() {};
    virtual void setDoors() {};
    virtual void setTrunk() {};
    virtual void setYear() {};

    virtual CarConfig* getCar(){return someCar;}
};


class VazBuilder : public CarBuilder{

 private:

     void createCar(){someCar = new CarConfig;}
     void setColor();
     void setEngine_type();
     void setCar_size();
     void setModel();
     void setTires_label();
     void setEngine_capacity();
     void setRoofTrunk();
     void setDoors();
     void setTrunk();
     void setYear();

 public :

     bool isCreated;

     VazBuilder();
     void addToFile();
     int  showCars();
     void showLastCar();
     void deleteOneCar();
     void deleteAllCars();
};


class Director{

 public:

     CarConfig* createCar(CarBuilder & carFromMain){

       carFromMain.createCar();
       carFromMain.setModel();
       carFromMain.setYear();
       carFromMain.setColor();
       carFromMain.setEngine_type();
       carFromMain.setATransmission();
       carFromMain.setEngine_capacity();
       carFromMain.setTires_label();
       carFromMain.setRoofTrunk();
       carFromMain.setMirrorHitter();
       carFromMain.setChairHitter();
       carFromMain.setCar_size();
       carFromMain.setDoors();
       carFromMain.setTrunk();

     return (carFromMain.getCar() );
     }
};


class NissanBuilder : public CarBuilder{

 private:

     void createCar(){someCar = new CarConfig;}
     void setColor();
     void setEngine_type();
     void setCar_size();
     void setModel();
     void setTires_label();
     void setEngine_capacity();
     void setChairHitter();
     void setDoors();
     void setTrunk();
     void setYear();

 public :

     bool isCreated;

     NissanBuilder();
     void addToFile();
     int  showCars();
     void showLastCar();
     void deleteOneCar();
     void deleteAllCars();
};


class KiaBuilder : public CarBuilder{

 private:

     void createCar(){someCar = new CarConfig;}
     void setColor();
     void setEngine_type();
     void setCar_size();
     void setModel();
     void setTires_label();
     void setEngine_capacity();
     void setMirrorHitter();
     void setDoors();
     void setTrunk();
     void setYear();

 public :

     bool isCreated;

     KiaBuilder();
     void addToFile();
     int  showCars();
     void showLastCar();
     void deleteOneCar();
     void deleteAllCars();
};

class ToyotaBuilder : public CarBuilder{

 private:

     void createCar(){someCar = new CarConfig;}
     void setColor();
     void setEngine_type();
     void setCar_size();
     void setModel();
     void setTires_label();
     void setEngine_capacity();
     void setATransmission();
     void setDoors();
     void setTrunk();
     void setYear();

 public :

     bool isCreated;

     ToyotaBuilder();
     void addToFile();
     int  showCars();
     void showLastCar();
     void deleteOneCar();
     void deleteAllCars();
};
