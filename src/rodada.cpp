#include "../include/rodada.h"
#include "../include/jogador.h"


#include <fstream>
#include <cstdlib>

using namespace std;

void Rodada::leArquivo(string nomeArquivo, ListaArranjo* listaJogadores) {

    int numRodadas;
    int dinInicial;
    int numJogRodada;
    int minPot;

    ifstream myFile; //cin
    myFile.open(nomeArquivo); 
    if(!myFile) {
        cout << "File could not be open" << endl;
        exit(1);
    }

    myFile >> numRodadas >> dinInicial;

    Jogador aux;

    if(myFile.is_open()) {
        for(int i = 0; i < numRodadas; i++) {
            myFile >> numJogRodada >> minPot;

            for(int j = 0; j < numJogRodada; j++) {
                myFile >> aux.Nome >> aux.Dinheiro >> aux.cartas[0] >> aux.cartas[1] >> aux.cartas[2] 
                        >> aux.cartas[3] >> aux.cartas[4];
                listaJogadores->InsereFinal(aux);
            }  
            //cout << "NUM JOGADORES " << numJogRodada << endl; 
        }
        myFile.close();
    }
}