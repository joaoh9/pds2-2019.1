#ifndef PLANETA_H
#define PLANETA_H

#include <list>
#include "Astro.hpp"

using namespace std;

class Planeta : public Astro {
   public:
    list<Astro *> Luas;
    Planeta(string _nome);
};

class Lua : public Astro {
   private:
    Planeta *orbita;

   public:
    Lua(string _nome);
    void setPlanetaOrbita(Planeta *P);
};

#endif
