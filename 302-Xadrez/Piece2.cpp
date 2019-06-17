#include "Piece2.hpp"

Piece::Piece(string simbolo, string posicaoAtual, string posicaoCandidata) {
    this->simbolo = simbolo;
    this->current_position = posicaoAtual;
    this->next_position = posicaoCandidata;
    this->before_switch_position = posicaoAtual;
}

void Bishop::setMovements() {
    int letra_destino = this->next_position[0];
    int numero_destino = this->next_position[1];

    int letra_atual = this->current_position[0];
    int numero_atual = this->current_position[1];

    if (letra_destino != letra_atual && numero_destino != numero_atual) {
        if ((letra_destino - letra_atual == numero_destino - numero_atual) ||
            (letra_destino - letra_atual == (numero_destino - numero_atual) * -1)) {
            char nova_posicao[2] = {(char)letra_destino, (char)numero_destino};
            this->current_position = nova_posicao;
        }
    }
}

void Knight::setMovements() {
    int letra_destino = this->next_position[0];
    int numero_destino = this->next_position[1];

    int letra_atual = this->current_position[0];
    int numero_atual = this->current_position[1];

    if (letra_destino != letra_atual && numero_destino != numero_atual) {
        if (letra_destino == letra_atual + 1 && numero_destino == numero_atual + 2 &&
            letra_atual + 1 <= 104 && numero_atual + 2 <= 56) {
            char nova_posicao[2] = {(char)(letra_atual + 1), (char)(numero_atual + 2)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual - 1 && numero_destino == numero_atual - 2 &&
                   letra_atual - 1 >= 97 && numero_atual - 2 >= 48) {
            char nova_posicao[2] = {(char)(letra_atual - 1), (char)(numero_atual - 2)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual - 1 && numero_destino == numero_atual + 2 &&
                   letra_atual - 1 >= 97 && numero_atual + 2 <= 56) {
            char nova_posicao[2] = {(char)(letra_atual - 1), (char)(numero_atual + 2)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual + 1 && numero_destino == numero_atual - 2 &&
                   letra_atual + 1 <= 104 && numero_atual - 2 >= 48) {
            char nova_posicao[2] = {(char)(letra_atual + 1), (char)(numero_atual - 2)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual + 2 && numero_destino == numero_atual + 1 &&
                   letra_atual + 2 <= 104 && numero_atual + 1 <= 56) {
            char nova_posicao[2] = {(char)(letra_atual + 2), (char)(numero_atual + 1)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual - 2 && numero_destino == numero_atual - 1 &&
                   letra_atual - 2 >= 97 && numero_atual - 1 >= 48) {
            char nova_posicao[2] = {(char)(letra_atual - 2), (char)(numero_atual - 1)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual - 2 && numero_destino == numero_atual + 1 &&
                   letra_atual - 2 >= 97 && numero_atual + 1 <= 56) {
            char nova_posicao[2] = {(char)(letra_atual - 2), (char)(numero_atual + 1)};
            this->current_position = nova_posicao;
        } else if (letra_destino == letra_atual + 2 && numero_destino == numero_atual - 1 &&
                   letra_atual + 2 <= 104 && numero_atual - 1 >= 48) {
            char nova_posicao[2] = {(char)(letra_atual + 2), (char)(numero_atual - 1)};
            this->current_position = nova_posicao;
        }
    }
}

void Rook::setMovements() {
    int letra_destino = this->next_position[0];
    int numero_destino = this->next_position[1];

    int letra_atual = this->current_position[0];
    int numero_atual = this->current_position[1];

    if (letra_destino != letra_atual && numero_destino != numero_atual) {
        if ((letra_destino == letra_atual && numero_destino != numero_atual) ||
            (letra_destino != letra_atual && numero_destino == numero_atual)) {
            char nova_posicao[2] = {(char)letra_destino, (char)numero_destino};
            this->current_position = nova_posicao;
        }
    }
}

void Piece::setNextPosition(string nextPos) {
    this->next_position = nextPos;
    this->setMovements();
};

void Bishop::printPossibleMoves() {
    int letra_atual = this->before_switch_position[0];
    int numero_atual = this->before_switch_position[1];

    int contador_possiveis_movimentos = 0;
    vector<string> possiveis_movimentos2;

    std::cout << "(Bishop) Current Position: (" << this->before_switch_position << ")" << endl;

    for (int letra_destino = 'a'; letra_destino <= 'h'; letra_destino++) {
        for (int numero_destino = '1'; numero_destino <= '8'; numero_destino++) {
            if ((letra_destino - letra_atual == numero_destino - numero_atual &&
                 letra_destino != letra_atual && numero_destino != numero_atual) ||
                (letra_destino - letra_atual == (numero_destino - numero_atual) * -1 &&
                 letra_destino != letra_atual && numero_destino != numero_atual)) {
                contador_possiveis_movimentos++;
                char nova_posicao[2] = {(char)(letra_destino), (char)(numero_destino)};
                possiveis_movimentos2.push_back(nova_posicao);
            }
        }
    }

    std::cout << "I have " << contador_possiveis_movimentos << " legal movements." << endl;
    for (auto it = possiveis_movimentos2.begin(); it != possiveis_movimentos2.end(); it++) {
        std::cout << "(" << this->before_switch_position << ")->(" << *it << ")" << endl;
    }
}

void Knight::printPossibleMoves() {
    int letra_atual = this->before_switch_position[0];
    int numero_atual = this->before_switch_position[1];

    int contador_possiveis_movimentos = 0;
    vector<string> possiveis_movimentos2;

    std::cout << "(Knight) Current Position: (" << this->before_switch_position << ")" << endl;

    if (letra_atual - 2 >= 97 && numero_atual - 1 >= 48) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual - 2), (char)(numero_atual - 1)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual - 2 >= 97 && numero_atual + 1 <= 56) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual - 2), (char)(numero_atual + 1)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual - 1 >= 97 && numero_atual - 2 >= 48) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual - 1), (char)(numero_atual - 2)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual - 1 >= 97 && numero_atual + 2 <= 56) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual - 1), (char)(numero_atual + 2)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual + 1 <= 104 && numero_atual - 2 >= 48) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual + 1), (char)(numero_atual - 2)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual + 1 <= 104 && numero_atual + 2 <= 56) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual + 1), (char)(numero_atual + 2)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual + 2 <= 104 && numero_atual - 1 >= 48) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual + 2), (char)(numero_atual - 1)};
        possiveis_movimentos2.push_back(nova_posicao);
    }
    if (letra_atual + 2 <= 104 && numero_atual + 1 <= 56) {
        contador_possiveis_movimentos++;
        char nova_posicao[2] = {(char)(letra_atual + 2), (char)(numero_atual + 1)};
        possiveis_movimentos2.push_back(nova_posicao);
    }

    std::cout << "I have " << contador_possiveis_movimentos << " legal movements." << endl;
    for (auto it = possiveis_movimentos2.begin(); it != possiveis_movimentos2.end(); it++) {
        std::cout << "(" << this->before_switch_position << ")->(" << *it << ")" << endl;
    }
}

void Rook::printPossibleMoves() {
    int letra_atual = this->before_switch_position[0];
    int numero_atual = this->before_switch_position[1];

    int contador_possiveis_movimentos = 0;
    vector<string> possiveis_movimentos2;

    std::cout << "(Rook) Current Position: (" << this->before_switch_position << ")" << endl;

    for (int letra_destino = 'a'; letra_destino <= 'h'; letra_destino++) {
        for (int numero_destino = '1'; numero_destino <= '8'; numero_destino++) {
            if ((letra_destino == letra_atual && numero_destino != numero_atual) ||
                (letra_destino != letra_atual && numero_destino == numero_atual)) {
                contador_possiveis_movimentos++;
                char nova_posicao[2] = {(char)(letra_destino), (char)(numero_destino)};
                possiveis_movimentos2.push_back(nova_posicao);
            }
        }
    }

    std::cout << "I have " << contador_possiveis_movimentos << " legal movements." << endl;
    for (auto it = possiveis_movimentos2.begin(); it != possiveis_movimentos2.end(); it++) {
        std::cout << "(" << this->before_switch_position << ")->(" << *it << ")" << endl;
    }
}

void Piece::checkMovement() {
    if (this->current_position == this->next_position) {
        std::cout << "Moving from (" << this->before_switch_position << ") to (" << this->current_position << ")" << endl;
        this->before_switch_position = this->current_position;
    } else {
        std::cout << "I cannot move from (" << this->current_position << ") to (" << this->next_position << ")" << endl;
    }
}
