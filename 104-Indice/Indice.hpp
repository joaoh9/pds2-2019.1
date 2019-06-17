/*
Escreva um programa que leia um texto fornecido e imprima,
 em ordem alfabética, todas palavras com 3 ou mais caracteres,
 com uma contagem do número de vezes que ocorreu na entrada e o percentual
 (2 casas de precisão) que essa palavra representa de **todo** o texto
 (mesmo palavras com menos de 3 caracteres)

input = 
  Olha o sapo dentro do saco
  O saco com o sapo dentro
  O sapo batendo papo
  E o papo soltando o vento

output = 
batendo 1 0.05
com 1 0.05
dentro 2 0.09
olha 1 0.05
papo 2 0.09
saco 2 0.09
sapo 3 0.14
soltando 1 0.05
vento 1 0.05
Dica: Crie um TAD Indice, e utilize os TADs da STL para auxiliar nessa tarefa (map, vector, list).
*/

#ifndef INDICE_H
#define INDICE_H

#include <string.h>
#include <cstdlib>
#include <iostream>

struct Node
{
  char *word;
  int count;
  int size;
  Node *next;
  Node *previous;

  Node(char *word);
};

struct List
{
  char firstLetter;
  Node *first;
  Node *last;

  List(char letter);
  // void insert(char *word);
  void print();
};

struct Alphabet
{
  List **L;

  Alphabet();

  void insert(char *word);
  void print();
};

#endif

/*
A B C D E F G H .... X Y Z
A A A
D N R
E A R
M N O
I A
R
*/
