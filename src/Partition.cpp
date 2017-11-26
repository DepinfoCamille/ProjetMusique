#include "Partition.h"

Partition::Partition(){
//    listeNotes = new vector<char>() ;
}

/* cette fonction ajoute une note qui dure t ms à la partition */
void Partition::ajoutNote(char c, int t){
        this->listeNotes.push_back(c) ;
        this->listeTemps.push_back(t) ;
}

Partition::~Partition()
{
    //dtor
}

