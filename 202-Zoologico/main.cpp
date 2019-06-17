#include <string.h>
#include <iostream>
#include <iterator>
#include <list>
#include "Animal.hpp"

using namespace std;

int main() {
    int i = 0;
    char instrucao[1];
    char nome[50];
    int peso, semana = 0;

    list<Animal *> Animais;
    list<Animal *>::iterator it;

    while (i < 1000) {
        cin >> instrucao;
        if (strcmp(instrucao, "S") == 0) {
            for (it = Animais.begin(); it != Animais.end(); it++) {
                int tempoPesagem = (*it)->getTempoPesagem(semana);
                if (tempoPesagem >= 2) {
                    cout << "Semana "
                         << semana
                         << ": Aviso! Animal "
                         << (*it)->getNome()
                         << " nao foi pesado por "
                         << tempoPesagem
                         << " semanas."
                         << endl;
                }
            }
            cin >> semana;
        } else if (strcmp(instrucao, "P") == 0) {
            cin >> nome;
            cin >> peso;

            int cadastrado = 0;

            for (it = Animais.begin(); it != Animais.end(); it++) {
                if ((*it)->getNome() == nome) {
                    if (peso < (*it)->getPeso() * 0.9) {
                        cout << "Semana "
                             << semana
                             << ": Aviso! Animal "
                             << nome
                             << " perdeu 10%"
                             << " ou mais de seu peso."
                             << endl;
                    }
                    (*it)->setPeso(peso, semana);
                    cadastrado = 1;
                }
            }

            if (cadastrado == 0) {
                Animal *A = new Animal();
                A->setNome(nome);
                A->setPeso(peso, semana);

                Animais.push_back(A);
            }
        } else {
            break;
        }
    }
    for (it = Animais.begin(); it != Animais.end(); it++) {
        int tempoPesagem = (*it)->getTempoPesagem(semana);
        if (tempoPesagem >= 2) {
            cout << "Semana "
                 << semana
                 << ": Aviso! Animal "
                 << (*it)->getNome()
                 << " nao foi pesado por "
                 << tempoPesagem
                 << " semanas."
                 << endl;
        }
    }

    return 0;
}
