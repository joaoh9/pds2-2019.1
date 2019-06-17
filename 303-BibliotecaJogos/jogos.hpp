#ifndef JOGO_H
#define JOGO_H

#include <iostream>
#include <string>

class jogo {
   public:
    std::string nome;
    std::string type;

    void imprimeNome();
    void imprimeCaracteristicas();
    void gameType(std::string type) {
        this->type = type;
    };

    jogo(std::string nome) {
        this->nome = nome;
    };
};

class jogoAction : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string habilidade;
    std::string tempoReal;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoAction() : jogo(){};
    jogoAction(std::string nome) : jogo(nome) {
        gameType("Action");
        this->type = "Action";
        this->nome = nome;
        this->habilidade = "HabilidadeMotora";
        this->tempoReal = "Sim";
    };
};

class jogoRPG : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string rolePlay;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoRPG():jogo(){};
    jogoRPG(std::string nome) : jogo(nome) {
        gameType("RPG");
        this->type = "RPG";
        this->nome = nome;
        this->rolePlay = "Sim";
    };
};

class jogoRTS : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string habilidade;
    std::string tempoReal;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoRTS():jogo(){};
    jogoRTS(std::string nome) : jogo(nome) {
        gameType("RTS");
        this->type = "RTS";
        this->nome = nome;
        this->habilidade = "RaciocinioLogico";
        this->tempoReal = "Sim";
    };
};

class jogoSports : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string habilidade;
    std::string simul;

    void imprimeNome();
    void imprimeCaracteristicas();

    // jogoSports():jogo(){};
    jogoSports(std::string nome) : jogo(nome) {
        gameType("Sports");
        this->type = "Sports";
        this->nome = nome;
        this->habilidade = "HabilidadeMotora";
        this->simul == "Sim";
    };
};

class jogoFPS : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string habilidade;
    std::string tempoReal;
    std::string perspectiva;

    void imprimeNome();
    void imprimeCaracteristicas();

    // jogoFPS():jogoAction(){};
    jogoFPS(std::string nome) : jogo(nome) {
        gameType("FPS");
        this->type = "FPS";
        this->nome = nome;
        this->habilidade = "HabilidadeMotora";
        this->tempoReal = "Sim";
        this->perspectiva = "Primeira";
    };
};

class jogoPlatform : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string tempoReal;
    std::string habilidade;
    std::string perspectiva;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoPlatform():jogoAction(){};
    jogoPlatform(std::string nome) : jogo(nome) {
        gameType("Plataform");
        this->type = "Plataform";
        this->nome = nome;
        this->habilidade = "HabilidadeMotora";
        this->tempoReal = "Sim";
        this->perspectiva = "Terceira";
    };
};

class jogoMMORPG : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string rolePlay;
    std::string online;
    std::string tempoReal;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoMMORPG():jogoRPG(){};
    jogoMMORPG(std::string nome) : jogo(nome) {
        gameType("MMORPG");
        this->type = "MMORPG";
        this->nome = nome;
        this->rolePlay = "Sim";
        this->online = "Sim";
        this->tempoReal = "Sim";
    };
};

class jogoRoguelike : public jogo {
   public:
    std::string type;
    std::string nome;
    std::string rolePlay;
    std::string tempoReal;
    std::string gerPro;

    void imprimeNome();
    void imprimeCaracteristicas();

    //jogoRoguelike():jogoRPG(){};
    jogoRoguelike(std::string nome) : jogo(nome) {
        gameType("Roguelike");
        this->type = "Roguelike";
        this->nome = nome;
        this->rolePlay = "Sim";
        this->gerPro = "Sim";
        this->tempoReal = "Não";
    };
};

#endif
