#include "../include/carta.h"
#include "../include/jogador.h"
#include "../include/lista.h"
#include "../include/rodada.h"

#include <iostream>
#include <string>

int main () {

    //ListaArranjo listaJogadores;
    Rodada jogo;
    ListaArranjo listaJogadores;
    
    jogo.leArquivo("entrada.txt", &listaJogadores);

    listaJogadores.Imprime();


    return 0;
}
