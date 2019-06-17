#include "Estudante.hpp"

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    Estudante *vetor_estudantes = new Estudante[10];

    struct tipoRSG {
        float rsg;
        Estudante *estudante;
        bool checked;
    };

    tipoRSG *vetor_rsgs = new tipoRSG[10];

    for (int i = 0; i < 10; i++) {
        int matricula;
        string nome;
        int notas[5];

        cin >> matricula;
        cin >> nome;

        vetor_estudantes[i].matricula = matricula;
        vetor_estudantes[i].nome = nome;

        for (int j = 0; j < 5; j++) {
            cin >> notas[j];
            vetor_estudantes[i].notas[j] = notas[j];
        }

        vetor_rsgs[i].rsg = vetor_estudantes[i].calcularRSG();
        vetor_rsgs[i].estudante = &vetor_estudantes[i];
    }

    cout << setprecision(2) << fixed;

    for (int i = 0; i < 3; i++) {
        float max_rsg = 0;
        int index = -1;
        for (int j = 0; j < 10; j++) {
            if (vetor_rsgs[j].checked == false) {
                if (vetor_rsgs[j].rsg > max_rsg) {
                    max_rsg = vetor_rsgs[j].rsg;
                    index = j;
                } else if (vetor_rsgs[j].rsg == max_rsg) {
                    float now_matricula = vetor_rsgs[j].estudante->matricula;
                    float cur_matricula = vetor_rsgs[index].estudante->matricula;

                    max_rsg = now_matricula < cur_matricula ? vetor_rsgs[j].rsg : max_rsg;
                    index = now_matricula < cur_matricula ? j : index;
                }
            }
        }

        cout << vetor_rsgs[index].estudante->matricula << " ";
        cout << vetor_rsgs[index].estudante->nome << " ";
        cout << vetor_rsgs[index].rsg << endl;

        vetor_rsgs[index].checked = true;
    }

    return 0;
}
