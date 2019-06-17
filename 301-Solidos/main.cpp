#include <stdlib.h>
#include <iostream>
#include "Solid.hpp"

int main() {
    double raio = 1.2;
    double altura = 1.3;
    double largura = 1.4;

    Solid *So = new Solid(raio, altura, largura, "Unknown");
    Cylinder *Cy = new Cylinder(3, 4, 4, "Cylinder");
    Sphere *Sp = new Sphere(5, altura, largura, "Sphere");
    Cube *Cu = new Cube(raio, 3, 3, "Cube");

    std::cout << So->getType() << ", Area: " << So->getArea() << " , Volume: " << So->getVolume() << std::endl;
    std::cout << Cy->getType() << ", Area: " << Cy->getArea() << " , Volume: " << Cy->getVolume() << std::endl;
    std::cout << Sp->getType() << ", Area: " << Sp->getArea() << " , Volume: " << Sp->getVolume() << std::endl;
    std::cout << Cu->getType() << ", Area: " << Cu->getArea() << " , Volume: " << Cu->getVolume() << std::endl;
}
