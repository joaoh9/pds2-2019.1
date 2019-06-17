#include "Solid.hpp"

/*
Considere uma classe pai chamada Solid 
que contem os seguintes atributos: 
    pi, raio, altura, largura da base e tipo do sólido.
Os atributos raio, altura e largura da base do tipo double
, e o atributo tipo do sólido é uma string.
 O atributo pi é constante, 3.14,
  e já é dado no arquivo .hpp cedido. 
  Além disso, a classe Solid possuí a implementação
   de quatro métodos: 
 o seu construtor,
 o método getArea(), 
 o método getVolume() e 
 o método getType().

As classes filhas por sua vez não possuem nenhum atributo,
 e assim devem permanecer. 
 São elas: Cube, Cylinder e Sphere. 
 Todas as classes são filhas de Solid. 
 Além disso, todas as classes utilizam o construtor do pai
 e implementam os métodos getArea(), getVolume() e getType(). 

O arquivo .hpp cedido não contem o esquema de herança 
mencionado anteriormente. Uma das suas atividades é implementar
a mesma.  

Métodos

A descrição de cada um dos métodos está abaixo:

// getType
std::string getType(): Não recebe parâmetros. 
    Retorna uma string com o tipo do sólido. 
    São tipos possíveis: 
    Cylinder, Cube, Sphere, Unknown.
double getVolume(): Não recebe parâmetros. 
Retorna o valor do volume do sólido. 
Caso o sólido não seja um cilindro, 
cubo ou esfera o método retorna 0.
double getArea(): Não recebe parâmetros. 
Retorna o valor da área do sólido. 
Caso o sólido não seja um cilindro, 
cubo ou esfera o método retorna 0.
Construtor: O construtor recebe quatro parâmetros na seguinte
 ordem: Raio, Altura, Largura da Base, Tipo de Sólido.
 Esses parâmetros são: double, double, double, std::string. 
*/

// Solid

Solid::Solid(double _raio, double _altura, double _largura, std::string _tipo) {
    this->raio = _raio;
    this->altura = _altura;
    this->largura = _largura;
    this->tipo.assign(_tipo);
}

std::string Solid::getType() {
    if (this->tipo.length() == 0) {
        return "Unknown";
    } else {
        return this->tipo;
    }
}

double Solid::getArea() {
    return 0;
}

double Solid::getVolume() {
    return 0;
}

// Cylinder

double Cylinder::getArea() {
    double bases = 2 * this->pi * this->raio * this->raio;
    double externa = altura * 2 * this->pi * this->raio;
    return bases + externa;
};

double Cylinder::getVolume() {
    return this->pi * this->raio * this->raio * this->altura;
}

// Sphere

double Sphere::getArea() {
    return 4 * this->pi * this->raio * this->raio;
}

double Sphere::getVolume() {
    return (4 * this->pi * this->raio * this->raio * this->raio) / 3;
}

// Cube

double Cube::getArea() {
    if (this->raio != 0) {
        return (this->raio * this->raio) * 6;
    }
    if (this->altura != 0) {
        return (this->altura * this->altura) * 6;
    }
    if (this->largura != 0) {
        return (this->largura * this->largura) * 6;
    }
    return 0;
}

double Cube::getVolume() {
    if (this->raio != 0) {
        return this->raio * this->raio * this->raio;
    }
    if (this->altura != 0) {
        return this->altura * this->altura * this->altura;
    }
    if (this->largura != 0) {
        return this->largura * this->largura * this->largura;
    }
    return 0;
}
