#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Solid {
   public:
    const double pi = 3.14;  //Nao modifique este valor.
    double raio;
    double altura;
    double largura;
    std::string tipo;

    Solid(double _raio, double _altura, double _largura, std::string _tipo);
    virtual double getArea();
    virtual double getVolume();
    std::string getType();
};

class Cylinder : public Solid {
   public:
    Cylinder(double _raio, double _altura, double _largura, std::string _tipo) : Solid(_raio, _altura, _largura, _tipo) {
    }

    double getArea() override;
    double getVolume() override;
};

class Sphere : public Solid {
   public:
    Sphere(double _raio, double _altura, double _largura, std::string _tipo) : Solid(_raio, _altura, _largura, _tipo) {
    }
    double getArea() override;
    double getVolume() override;
};

class Cube : public Solid {
   public:
    Cube(double _raio, double _altura, double _largura, std::string _tipo) : Solid(_raio, _altura, _largura, _tipo) {
    }
    double getArea() override;
    double getVolume() override;
};

#endif
