#include "List.hpp"

/*
Node::Node() {
    this->value = 0;
    this->next = NULL;
}
*/
List::List() {
    this->size = 0;
    this->head = NULL;
}

void List::insert(int value) {
    Node* node = new Node();
    node->value = value;
    //std::cout << node->value << std::endl;
    node->next = this->head;
    this->size++;
    this->head = node;
}

void List::clearList() {
    this->head = NULL;
}

void List::print() {
    Node* head = this->head;

    if (this->size > 0) {
        while (head) {
            std::cout << head->value << " ";
            head = head->next;
        }
        std::cout << std::endl;
    } else {
        std::cout << "-" << std::endl;
        return;
    }
}

int List::removeFirst() {
    if (this->head == NULL) {
        return this->size;
    }
    Node* current = this->head;
    this->head = this->head->next;
    this->size--;
    delete current;
    return current->value;
}

int List::indexOf(int value) {
    if (this->size > 0) {
        Node* head = this->head;
        int index = 0;
        while (head && head->value != value) {
            index++;
            head = head->next;
        }
        if (head->value == value)
            return index;
        return -1;
    } else {
        return -1;
    }
}

void List::remove(int value) {
    if (this->size == 0) {
        return;
    } else if (this->head->value == value) {
        Node* current = this->head;
        this->head = this->head->next;
        this->size--;
        delete current;
    } else {
        Node* previous = this->head;
        Node* current = this->head->next;
        while (current != NULL) {
            if (current->value == value) {
                break;
            } else {
                previous = current;
                current = current->next;
            }
        }
        if (current == NULL) {
            return;
        } else {
            previous->next = current->next;
            delete current;
            this->size--;
        }
    }
}
