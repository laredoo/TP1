#ifndef RODADA_H
#define RODADA_H

#include <iostream>
#include <string>
#include "../include/jogador.h"
#include "../include/lista.h"

using namespace std;

class Rodada {
    public:
        int quantiaRodada;
        int numeroRodadas;
        Rodada(){quantiaRodada = 0; numeroRodadas = 0;};
        void leArquivo(string nomeArquivo, ListaArranjo* listaJogadores);
};

#endif