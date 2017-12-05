#include "Partition.h"
#include <iostream>
#include <time.h>
#include <conio.h>


Partition::Partition(){
<<<<<<< HEAD
    this->listeNotes = new std::vector<char*>() ;
    this->listeTemps = new std::vector<int>() ;
=======
//    listeNotes = new vector<char>() ;
    this ->dicco_notes = {
   {'q',std::make_tuple("DO",3)},{'z',std::make_tuple("DO#",3)}, {'s',std::make_tuple("RE",3)}, {'e',std::make_tuple("RE#",3)},
       {'d',std::make_tuple("MI",3)}, {'f',std::make_tuple("FA",3)}, {'t',std::make_tuple("FA#",3)}, {'g',std::make_tuple("SOL",3)},
        {'y',std::make_tuple("SOL#",3)}, {'h',std::make_tuple("LA",3)},{'u',std::make_tuple("LA#",3)}, {'j',std::make_tuple("SI",3)},
        {'k',std::make_tuple("DO",2)}, {'o',std::make_tuple("DO#",2)}, {'l',std::make_tuple("RE",2)}};
>>>>>>> 0c121cb7f7a5806793ed74106cdc296272e5cfe6
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

