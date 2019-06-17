#include "Piece.hpp"

map<int, int> Piece::splitString(string posicao) {
    map<int, int> splitted;

    const char *i, *j;
    i = &posicao[1];
    j = &posicao[0];

    splitted[atoi(j)] = atoi(i);
    return splitted;
}

void Rook::setMovements() {
    int pDestinoLetra = posicaoCandidata[0];
    int pDestinoNum = posicaoCandidata[1];

    int pAtualLetra = posicaoAtual[0];
    int pAtualNum = posicaoAtual[1];

    if (pDestinoLetra == pAtualLetra && pDestinoNum == pAtualNum) {
        return;  // mesma posicao
    }
    if ((pDestinoLetra == pAtualLetra && pDestinoNum != pAtualNum) ||
        (pDestinoLetra != pAtualLetra && pDestinoNum == pAtualNum)) {
        char newPosition[2] = {(char)(pDestinoLetra), (char)(pDestinoNum)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
    }

    return;
}

void Bishop::setMovements() {
    int pDestinoLetra = posicaoCandidata[0];
    int pDestinoNum = posicaoCandidata[1];

    int pAtualLetra = posicaoAtual[0];
    int pAtualNum = posicaoAtual[1];

    if (pDestinoLetra == pAtualLetra && pDestinoNum == pAtualNum) {
        return;  // mesma posicao
    }
    if ((pDestinoLetra - pAtualLetra == pDestinoNum - pAtualNum) ||
        (pDestinoLetra - pAtualLetra == (pDestinoNum - pAtualNum) * -1)) {
        char newPosition[2] = {(char)(pDestinoLetra), (char)(pDestinoNum)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
    }
    return;
}

void Knight::setMovements() {
    int pDestinoLetra = posicaoCandidata[0];
    int pDestinoNum = posicaoCandidata[1];

    int pAtualLetra = posicaoAtual[0];
    int pAtualNum = posicaoAtual[1];

    if (pDestinoLetra == pAtualLetra && pDestinoNum == pAtualNum) {
        return;  // mesma posicao
    }
    if (pDestinoLetra == pAtualLetra + 1 && pDestinoNum == pAtualNum + 2 && pAtualLetra + 1 <= 104 && pAtualNum + 2 <= 56) {
        char newPosition[2] = {(char)(pAtualLetra + 1), (char)(pAtualNum + 2)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra - 1 && pDestinoNum == pAtualNum - 2 && pAtualLetra - 1 >= 97 && pAtualNum - 2 >= 48) {
        char newPosition[2] = {(char)(pAtualLetra - 1), (char)(pAtualNum - 2)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra - 1 && pDestinoNum == pAtualNum + 2 && pAtualLetra - 1 >= 97 && pAtualNum + 2 <= 56) {
        char newPosition[2] = {(char)(pAtualLetra - 1), (char)(pAtualNum + 2)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra + 1 && pDestinoNum == pAtualNum - 2 && pAtualLetra + 1 <= 104 && pAtualNum - 2 >= 48) {
        char newPosition[2] = {(char)(pAtualLetra + 1), (char)(pAtualNum - 2)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra + 2 && pDestinoNum == pAtualNum + 1 && pAtualLetra + 2 <= 104 && pAtualNum + 1 <= 56) {
        char newPosition[2] = {(char)(pAtualLetra + 2), (char)(pAtualNum + 1)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra - 2 && pDestinoNum == pAtualNum - 1 && pAtualLetra - 2 >= 97 && pAtualNum - 1 >= 48) {
        char newPosition[2] = {(char)(pAtualLetra - 2), (char)(pAtualNum - 1)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra - 2 && pDestinoNum == pAtualNum + 1 && pAtualLetra - 2 >= 97 && pAtualNum + 1 <= 56) {
        char newPosition[2] = {(char)(pAtualLetra - 2), (char)(pAtualNum + 1)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
    if (pDestinoLetra == pAtualLetra + 2 && pDestinoNum == pAtualNum - 1 && pAtualLetra + 2 <= 104 && pAtualNum - 1 >= 48) {
        char newPosition[2] = {(char)(pAtualLetra + 2), (char)(pAtualNum - 1)};
        // this->posicaoAntesDaTroca = this->posicaoAtual;
        this->posicaoAtual = newPosition;
        return;
    }
}

void Rook::setNextPosition(string nextPos) {
    this->posicaoCandidata = nextPos;
    this->setMovements();
};

void Bishop::setNextPosition(string nextPos) {
    this->posicaoCandidata = nextPos;
    this->setMovements();
};

void Knight::setNextPosition(string nextPos) {
    this->posicaoCandidata = nextPos;
    this->setMovements();
};

void Piece::setNextPosition(string nextPos) {
    this->posicaoCandidata = nextPos;
    this->setMovements();
};

void Knight::printPossibleMoves() {
    int pAtualLetra = posicaoAntesDaTroca[0];
    int pAtualNum = posicaoAntesDaTroca[1];

    int possibleMovesCount = 0;
    vector<string> legalMovements;

    std::cout << "(Knight) Current Position: (" << this->posicaoAntesDaTroca << ")" << endl;

    if (pAtualLetra - 2 >= 97 && pAtualNum - 1 >= 48) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra - 2), (char)(pAtualNum - 1)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra - 2 >= 97 && pAtualNum + 1 <= 56) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra - 2), (char)(pAtualNum + 1)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra - 1 >= 97 && pAtualNum - 2 >= 48) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra - 1), (char)(pAtualNum - 2)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra - 1 >= 97 && pAtualNum + 2 <= 56) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra - 1), (char)(pAtualNum + 2)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra + 1 <= 104 && pAtualNum - 2 >= 48) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra + 1), (char)(pAtualNum - 2)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra + 1 <= 104 && pAtualNum + 2 <= 56) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra + 1), (char)(pAtualNum + 2)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra + 2 <= 104 && pAtualNum - 1 >= 48) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra + 2), (char)(pAtualNum - 1)};
        legalMovements.push_back(newPosition);
    }
    if (pAtualLetra + 2 <= 104 && pAtualNum + 1 <= 56) {
        possibleMovesCount++;
        char newPosition[2] = {(char)(pAtualLetra + 2), (char)(pAtualNum + 1)};
        legalMovements.push_back(newPosition);
    }

    std::cout << "I have " << possibleMovesCount << " legal movements." << endl;
    for (auto it = legalMovements.begin(); it != legalMovements.end(); it++) {
        std::cout << "(" << this->posicaoAntesDaTroca << ")->(" << *it << ")" << endl;
    }
}

void Bishop::printPossibleMoves() {
    int pAtualLetra = posicaoAntesDaTroca[0];
    int pAtualNum = posicaoAntesDaTroca[1];

    int possibleMovesCount = 0;
    vector<string> legalMovements;

    std::cout << "(Bishop) Current Position: (" << this->posicaoAntesDaTroca << ")" << endl;

    for (int pDestinoLetra = 'a'; pDestinoLetra <= 'h'; pDestinoLetra++) {
        for (int pDestinoNum = '1'; pDestinoNum <= '8'; pDestinoNum++) {
            if ((pDestinoLetra - pAtualLetra == pDestinoNum - pAtualNum &&
                 pDestinoLetra != pAtualLetra && pDestinoNum != pAtualNum) ||
                (pDestinoLetra - pAtualLetra == (pDestinoNum - pAtualNum) * -1 &&
                 pDestinoLetra != pAtualLetra && pDestinoNum != pAtualNum)) {
                possibleMovesCount++;
                char newPosition[2] = {(char)(pDestinoLetra), (char)(pDestinoNum)};
                legalMovements.push_back(newPosition);
            }
        }
    }

    std::cout << "I have " << possibleMovesCount << " legal movements." << endl;
    for (auto it = legalMovements.begin(); it != legalMovements.end(); it++) {
        std::cout << "(" << this->posicaoAntesDaTroca << ")->(" << *it << ")" << endl;
    }
}

void Rook::printPossibleMoves() {
    int pAtualLetra = posicaoAntesDaTroca[0];
    int pAtualNum = posicaoAntesDaTroca[1];

    int possibleMovesCount = 0;
    vector<string> legalMovements;

    std::cout << "(Rook) Current Position: (" << this->posicaoAntesDaTroca << ")" << endl;

    for (int pDestinoLetra = 'a'; pDestinoLetra <= 'h'; pDestinoLetra++) {
        for (int pDestinoNum = '1'; pDestinoNum <= '8'; pDestinoNum++) {
            if ((pDestinoLetra == pAtualLetra && pDestinoNum != pAtualNum) ||
                (pDestinoLetra != pAtualLetra && pDestinoNum == pAtualNum)) {
                possibleMovesCount++;
                char newPosition[2] = {(char)(pDestinoLetra), (char)(pDestinoNum)};
                legalMovements.push_back(newPosition);
            }
        }
    }

    std::cout << "I have " << possibleMovesCount << " legal movements." << endl;
    for (auto it = legalMovements.begin(); it != legalMovements.end(); it++) {
        std::cout << "(" << this->posicaoAntesDaTroca << ")->(" << *it << ")" << endl;
    }
}

void Piece::checkMovement() {
    if (this->posicaoAtual == this->posicaoCandidata) {
        std::cout << "Moving from (" << this->posicaoAntesDaTroca << ") to (" << this->posicaoAtual << ")" << endl;
        this->posicaoAntesDaTroca = this->posicaoAtual;
    } else {
        std::cout << "I cannot move from (" << this->posicaoAtual << ") to (" << this->posicaoCandidata << ")" << endl;
    }
}

Piece::Piece(string simbolo, string posicaoAtual, string posicaoCandidata) {
    this->simbolo = simbolo;
    this->posicaoAtual = posicaoAtual;
    this->posicaoCandidata = posicaoCandidata;
    this->posicaoAntesDaTroca = posicaoAtual;
}
