#include <string.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>

#include "SistemaSolar.hpp"

using namespace std;

void LOG(const char *l) {
    cout << l << endl;
}

void LOGS(string s) {
    cout << s << endl;
}

int main(int argc, char *argv[]) {
    ifstream arquivo;
    arquivo.open(argv[1]);

    char line[100];
    SistemaSolar *SS = new SistemaSolar();
    while (!arquivo.eof()) {
        arquivo >> line;
        if (strcmp(line, "Lua") == 0) {
            arquivo >> line;
            Lua *L = new Lua(line);
            arquivo >> line;
            while (strcmp(line, "defastro") != 0 && !arquivo.eof()) {
                if (strcmp(line, "Orbita") == 0) {
                    arquivo >> line;
                    Planeta *P = SS->getPlaneta(line);
                    if (!P) {
                        P = new Planeta(line);
                    }
                    P->Luas.push_back(L);
                    L->setPlanetaOrbita(P);
                } else if (strcmp(line, "Temperatura") == 0) {
                    arquivo >> line;
                    L->setTemperatura(atoi(line));
                } else if (strcmp(line, "Raio") == 0) {
                    arquivo >> line;
                    L->setRaio(atoi(line));
                } else if (strcmp(line, "Gravidade") == 0) {
                    arquivo >> line;
                    L->setGravidade((float)atof(line));
                } else if (strcmp(line, "Gasoso") == 0) {
                    arquivo >> line;
                    bool TF = false;
                    if (strcmp(line, "True") == 0) {
                        TF = true;
                    }
                    L->setGasoso(TF);
                }
                arquivo >> line;
            }
            SS->Luas.push_back(L);
        }
        if (strcmp(line, "Planeta") == 0) {
            arquivo >> line;
            Planeta *P = new Planeta(line);
            arquivo >> line;
            while (strcmp(line, "defastro") != 0 && !arquivo.eof()) {
                if (strcmp(line, "Temperatura") == 0) {
                    arquivo >> line;
                    P->setTemperatura(atoi(line));
                } else if (strcmp(line, "Raio") == 0) {
                    arquivo >> line;
                    P->setRaio(atoi(line));
                } else if (strcmp(line, "Gravidade") == 0) {
                    arquivo >> line;
                    P->setGravidade((float)atof(line));
                } else if (strcmp(line, "Gasoso") == 0) {
                    arquivo >> line;
                    bool TF = false;
                    if (strcmp(line, "True") == 0) {
                        TF = true;
                    }
                    P->setGasoso(TF);
                }
                arquivo >> line;
            }
            SS->Planetas.push_back(P);
        }
        if (strcmp(line, "Estrela") == 0) {
            arquivo >> line;
            Estrela *E = new Estrela(line);
            arquivo >> line;
            while (strcmp(line, "defastro") != 0 && !arquivo.eof()) {
                if (strcmp(line, "Temperatura") == 0) {
                    arquivo >> line;
                    E->setTemperatura(atoi(line));
                } else if (strcmp(line, "Raio") == 0) {
                    arquivo >> line;
                    E->setRaio(atoi(line));
                } else if (strcmp(line, "Gravidade") == 0) {
                    arquivo >> line;
                    E->setGravidade((float)atof(line));
                } else if (strcmp(line, "Gasoso") == 0) {
                    arquivo >> line;
                    bool TF = false;
                    if (strcmp(line, "True") == 0) {
                        TF = true;
                    }
                    E->setGasoso(TF);
                }
                arquivo >> line;
            }
            SS->Estrelas.push_back(E);
        }
    }

    Estrela *E = SS->getMaiorEstrela();

    LOGS(E->getNome());
    cout << E->getTemperatura() << endl;

    int totalAstros = SS->Planetas.size() + SS->Estrelas.size() + SS->Luas.size();
    cout << totalAstros << endl;
    cout << SS->Planetas.size() << endl;
    cout << SS->getNumPlanetasSolidos() << endl;
    double mediaLua = SS->getMediaLuasPorPlaneta();
    cout << fixed << setprecision(2);
    cout << (double)((int)(mediaLua * 100) / 100) << endl;
    Planeta *P;
    P = SS->getPlanetaMaisLuas();
    LOGS(P->getNome());
    P = SS->getPlanetaMaisQuente();
    LOGS(P->getNome());
    P = SS->getPlanetaMaisFrio();
    LOGS(P->getNome());
    P = SS->getPlanetaMaiorRaio();
    LOGS(P->getNome());
    P = SS->getPlanetaMenorRaio();
    LOGS(P->getNome());

    return 0;
}
