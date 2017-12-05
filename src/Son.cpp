#include "Son.h"
#include <stdio.h>
#include <windows.h>


/* FONCTIONS STATIQUES*/
/* il y a 16 canaux, channel doit donc être un entier compris entre  et 15*/
/* note = 36 : do grave */
/*static unsigned long changer_instrument(int channel, int numinstrument)
{
	return channel | 0xC0 | (numinstrument << 8);
}

static unsigned long appuyer_touche(int channel, int note, int force)
{
	return channel | 0x90 | (note << 8) | (force << 16);
}

static unsigned long relacher_touche(int channel, int note, int force)
{
	return channel | 0x80 | (note << 8) | (force << 16);
}*/



Son::Son(){
   this ->dicco_son = {
   {48,std::make_tuple("DO",3)},{49,std::make_tuple("DO#",3)}, {50,std::make_tuple("RE",3)}, /*{51,std::make_tuple("RE#",3)},
       {std::make_tuple("MI",3),52}, {std::make_tuple("FA",3),53}, {std::make_tuple("FA#",3),54}, {std::make_tuple("SOL",3),55},
        {std::make_tuple("SOL#",3),56}, {std::make_tuple("LA",3),57},{std::make_tuple("LA#",3),58}, {std::make_tuple("SI",3),59},
        {std::make_tuple("DO",4),60}, {std::make_tuple("DO#",4),61}, {std::make_tuple("RE",4),62}*/};
}

    //ctor
Son::~Son()
{
    //dtor
}
