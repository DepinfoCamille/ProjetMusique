#include "Partition.h"
#include <iostream>
#include <time.h>
#include <conio.h>


Partition::Partition(){
    this->listeNotes = new std::vector<char*>() ;
    this->listeTemps = new std::vector<int>() ;
}

/* cette fonction ajoute une note qui dure t ms à la partition */
void Partition::ajoutNote(char c, int t){
        this->listeClavier.push_back(c) ;
        this->listeTemps.push_back(t) ;
}

/* cette fonction lit ce que l'utilisateur tape au clavier et le
 * sauvegarde dans listeNotes et listeTemps */
int Partition::lectureClavier()
{
    clock_t start = clock(), diff;
    char caractere = getch() ;
    diff = clock() - start;

    if (caractere!='\n'){
        this->ajoutNote(caractere,diff) ;
        std::cout<<caractere<<std::endl ;
        return 0 ;
    }
    else{
        return 1 ;
    }
}

Partition::~Partition()
{
    //dtor
}

