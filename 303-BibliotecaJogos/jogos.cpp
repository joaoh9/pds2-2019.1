#include "jogos.hpp"
#include <iostream>

void jogo::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogo::imprimeCaracteristicas(){
    if (this->type == "Action") {
        std::cout << "Habilidade HabilidadeMotora" << '\n';
        std::cout << "TempoReal Sim" << '\n';
    }
    if (this->type == "Plataform") {
        std::cout << "Habilidade HabilidadeMotora"  << '\n';
        std::cout << "Perspectiva Terceira" << '\n';
        std::cout << "TempoReal Sim" << '\n';
    }
    if (this->type == "FPS") {
        std::cout << "Habilidade HabilidadeMotora"  << '\n';
        std::cout << "Perspectiva Primeira"  << '\n';
        std::cout << "TempoReal Sim"  << '\n';
    }
    if (this->type == "RTS") {
        std::cout << "Habilidade RaciocinioLogico"  << '\n';
        std::cout << "TempoReal Sim" << '\n';
    }
    if (this->type == "Sports") {
        std::cout << "Habilidade HabilidadeMotora" << '\n';
        std::cout << "Simulacao Sim"  << '\n';
    }
    if (this->type == "RPG") {
        std::cout << "RolePlay Sim" << '\n';
    }
    if (this->type == "MMORPG") {
        std::cout << "Online Sim" << '\n';
        std::cout << "RolePlay Sim" << '\n';
        std::cout << "TempoReal Sim" << '\n';
    }
    if (this->type == "Roguelike") {
        std::cout << "GeracaoProcedural Sim"<< '\n';
        std::cout << "RolePlay Sim"<<  '\n';
        std::cout << "TempoReal Nao"<<   '\n';
    }
}

void jogoAction::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoAction::imprimeCaracteristicas(){

    this->habilidade = "HabilidadeMotora";
    this->tempoReal = "Sim";

    std::cout << "Habilidade " << this->habilidade << '\n';
    std::cout << "TempoReal " << this->tempoReal << '\n';
}

void jogoRPG::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoRPG::imprimeCaracteristicas(){

    this->rolePlay = "Sim";
    std::cout << "RolePlay "<< this->rolePlay << '\n';
}

void jogoRTS::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoRTS::imprimeCaracteristicas(){

    this->habilidade = "RaciocinioLogico";
    this->tempoReal = "Sim";

    std::cout << "Habilidade " << this->habilidade << '\n';
    std::cout << "TempoReal " << this->tempoReal << '\n';
}

void jogoSports::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoSports::imprimeCaracteristicas(){

    this->habilidade = "HabilidadeMotora";
    this->simul == "Sim";
    std::cout << "Habilidade " << this->habilidade << '\n';
    std::cout << "Simulacao " << this->simul << '\n';
}

void jogoFPS::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoFPS::imprimeCaracteristicas(){

    this->habilidade = "HabilidadeMotora";
    this->tempoReal = "Sim";
    this->perspectiva = "Primeira";

    std::cout << "Habilidade " << this->habilidade << '\n';
    std::cout << "Perspectiva " << this->perspectiva << '\n';
    std::cout << "TempoReal " << this->tempoReal << '\n';
}

void jogoPlatform::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoPlatform::imprimeCaracteristicas(){

    this->habilidade = "HabilidadeMotora";
    this->tempoReal = "Sim";
    this->perspectiva = "Terceira";
    std::cout << "Habilidade " << this->habilidade << '\n';
    std::cout << "Perspectiva " << this->perspectiva << '\n';
    std::cout << "TempoReal " << this->tempoReal << '\n';
}

void jogoMMORPG::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoMMORPG::imprimeCaracteristicas(){

    this->rolePlay = "Sim";
    this->online = "Sim";
    this->tempoReal = "Sim";
    std::cout << "Online "<< this->online << '\n';
    std::cout << "RolePlay "<< this->rolePlay << '\n';
    std::cout << "TempoReal "<< this->tempoReal << '\n';
}

void jogoRoguelike::imprimeNome(){ std::cout << this->nome << '\n'; }
void jogoRoguelike::imprimeCaracteristicas(){

    this->rolePlay = "Sim";
    this->gerPro = "Sim";
    this->tempoReal = "Não";
    std::cout << "GeracaoProcedural "<< this->gerPro << '\n';
    std::cout << "RolePlay "<< this->rolePlay << '\n';
    std::cout << "TempoReal "<< this->tempoReal << '\n';
}
