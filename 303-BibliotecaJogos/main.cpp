#include <vector>
#include <iostream>
#include "utils.hpp"
#include "jogos.hpp"

using namespace std;

int main(int argc, char** argv) {
	vector<jogo> biblioteca;

	for (int i=0; i<1; i++)
	{	string nome, genero;
		std::cin >> nome >> genero;
		utils::adicionaJogo(&biblioteca, nome, genero);
	}

	for(vector<jogo>::iterator it=biblioteca.begin(); it!= biblioteca.end(); it++)
	{	it->imprimeNome();
		it->imprimeCaracteristicas();
	}
}
