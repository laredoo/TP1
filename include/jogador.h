#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>
#include "../include/carta.h"

using namespace std;

class Jogador {
    public:
        string Nome;
        int Dinheiro;
        Jogador() {Nome = "asdasd"; Dinheiro = 0;};
        Jogador(string name, int money);
        string cartas[5];

};

#endif