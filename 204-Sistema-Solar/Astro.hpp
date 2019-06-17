#ifndef ASTRO_H
#define ASTRO_H

#include <string.h>
#include <string>

using namespace std;

class Astro {
   private:
    int raio;
    int temperaturaMedia;
    float gravidade;
    string nome;
    bool gasoso;

   public:
    void setRaio(int _raio);
    void setTemperatura(int _temperatura);
    void setGravidade(float _gravidade);
    void setNome(string _nome);
    void setGasoso(bool _gasoso);

    int getRaio();
    int getTemperatura();
    float getGravidade();
    string getNome();
    bool getGasoso();
};

class Estrela : public Astro {
   public:
    Estrela(string _nome);
};

#endif
