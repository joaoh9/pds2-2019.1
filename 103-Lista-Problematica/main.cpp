#include <iostream>
#include "List.hpp"

using namespace std;

int main() {
    List *L = new List();

    int N, K;

    cin >> N >> K;  // 1

    for (int i = 0; i <= N; i++) {
        L->insert(i);  // 2
    }

    L->print();  // 3

    cout << L->size << endl;  // 4

    for (int i = 0; i < K; i++) {
        L->removeFirst();  // 5
    }

    L->print();  // 6

    cout << L->size << endl;  // 7

    for (int i = 0; i <= N; i += 2) {
        L->remove(i);  // 8
    }

    L->print();  // 9

    cout << L->size << endl;  // 10

    delete L;
    return 0;
}

/*
1) Receba dois valores como entrada, N e K. 
2) Insira na lista os valores de [0,N]. Sua lista deve sempre inserir os números na primeira posição,
de forma com que ela seja decrescente quando exibida sequencialmente. 
Atenção: o intervalo [0,N] é fechado!
3) Imprima os valores contidos na lista.
4) Imprima o tamanho da lista.
5) Remova os K primeiro valores.
6) Imprima os valores contidos na lista.
7) Imprima o tamanho da lista.
8) Remova os valores pares existentes na lista.
9) Imprima os valores contidos na lista.
10) Imprima o tamanho da lista.

Atenção:
1) Se a lista estiver vazia o programa deve imprimir uma linha com o caractere "-" 
(veja o terceiro exemplo) para a representar.
2) Nenhuma função não especificada no TAD é necessária. 
O uso de qualquer função extra será penalizado.
3) O seu programa será avaliado automaticamente em relação a saída, 
e manualmente para o erro de memory leak utilizando o Valgrind. 
Alunos que não resolverem problemas relacionados a memory leak serão penalizados no valor da nota final.
Utilize o botão 'Depurar' para acessar o GDB e visualizar a saída do Valgrind.

*/
