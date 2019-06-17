#include "Indice.hpp"

Node::Node(char *word)
{
    this->word = word;
    this->size = strlen(word);
    this->count = 1;
    this->next = NULL;
    this->previous = NULL;
};

List::List(char letter)
{
    this->firstLetter = letter;
    this->first = NULL;
    this->last = NULL;
};

Alphabet::Alphabet()
{
    this->L = new List *[26];

    for (int i = 0; i < 26; i++)
    {
        this->L[i] = new List(i + 97);
    }
}

void Alphabet::insert(char *insert)
{
    int firstLetterIndex = insert[0] - 97;
    // std::cout << firstLetter << std::endl;
    List *listLetter = this->L[firstLetterIndex];

    Node *node;

    if (listLetter->first == NULL)
    {
        node = new Node(insert);
        std::cout << "first node " << node->word << std::endl;
        listLetter->first = node;
        listLetter->last = node;
        return;
    }

    std::cout << "first node not null" << std::endl;
    std::cout << listLetter->last->word << std::endl;

    node = listLetter->first;

    std::cout << node->word << std::endl;

    int comparison = strcmp(insert, node->word);

    std::cout << comparison << std::endl;

    while (comparison < 0)
    {
        comparison = strcmp(insert, node->word);
        if (!node->next)
        {
            break;
        }
        node = node->next;
    }

    if (comparison == 0)
    {
        node->count++;
        return;
    }

    Node *newNode = new Node(insert);
    std::cout << newNode->word << std::endl;
    std::cout << newNode->size << std::endl;
    std::cout << newNode->count << std::endl;
    std::cout << newNode->next << std::endl;
    std::cout << newNode->previous << std::endl;

    Node *aux = node->previous;

    aux->next = newNode;
    newNode->next = node;
    newNode->previous = aux;
    node->previous = newNode;

    return;
};

void Alphabet::print()
{
    for (int i = 0; i < 26; i++)
    {
        if (this->L[i] != NULL)
        {
            this->L[i]->print();
        }
    }
};

void List::print()
{
    Node *node = this->first;

    while (node != NULL)
    {
        std::cout << node->word << std::endl;
        node = node->next;
    }
}
