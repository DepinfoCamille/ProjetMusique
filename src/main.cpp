#include "Partition.h"
#include "Clavier.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

char saisie[2048];

void lectureClavier()
{
    if(!fgets(saisie,sizeof(saisie)-1,stdin))
    {
        std::cout<<std::endl ;
        exit(0);
    }


}

/*int main(){
    /* test lecture clavier
    while(1){
        lectureClavier() ;
    }
    */
    //test diccionnaire
  //  testdicco();
    //return 0;


//
