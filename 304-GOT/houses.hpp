#ifndef HOUSES_H
#define HOUSES_H

#include <iostream>
#include <string>

using namespace std;

class greatHouse {
   protected:
    string name;

   public:
    void Words();
    void Allegiance();
    void setName(string n);
};

class houseLannister : virtual public greatHouse {
   public:
    void Words(bool common);
    void Common();
};

class houseBaratheon : virtual public greatHouse {
   public:
    void Words();
};

class houseBaratheonofKingsLanding : public houseBaratheon, public houseLannister {
   public:
    void Words() { houseBaratheon::Words(); }
};

#endif
/*
Cada uma das grandes Casas tem seu próprio lema,
 ou "palavras" (Words). Estes geralmente tomam a 
 forma de ostentações ou ameaças comummente usadas
 como gritos de guerra, como as palavras da casa
 // Baratheon: "Ours is the fury!". 
 Todavia, os
 Lannister são um caso incomum em que seu lema
 não oficial é usado muito mais frequentemente 
 na narrativa dos livros do que seu lema oficial. 
 Seu lema oficial é na verdade "Hear Me Roar!" - 
 mas isso quase nunca é usado, mesmo dentro dos livros.
 Geralmente é levantado apenas para os personagens 
 mostrarem que não é tão popular quanto seu lema
 não oficial: 
 // Lannister: "A Lannister always pays his debts.".

Dessa forma, a casa de "Baratheon de King's Landing"
 possui dois lemas.
 Um oficial herdado de sua linhagem
 Baratheon e um não-oficial herdado de sua linhagem Lannister.
 Além disso, como todas as três são grandes casas, todas são soberanas

 Character name: Joffrey Baratheon
House status: Sovereign.
Common motto: A Lannister always pays his debts.
Words: Ours is the fury!

Character name: Cersei Lannister
House status: Sovereign.
Common motto: A Lannister always pays his debts.
Words: Hear Me Roar!

Character name: Robert Baratheon
House status: Sovereign.
Words: Ours is the fury!
*/
