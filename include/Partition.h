#pragma once
#include <vector>
using std::vector ;

/* Cette classe transforme la lecture clavier de l'utilisateur en partition
 * les attributs de la classe sont :
 * listeNotes : contient les notes jou�es par l'utilisateur
 * listeTemps : contient le temps qu'est jou�e cette note
 */
class Partition
{
    public:
        Partition();
        void ajoutNote(char c,int t) ;
        virtual ~Partition();
        int lectureClavier() ;  // quand lectureClavier renvoie un 1, cela signifie que l'utilisateur a tap� '\n'
                                // c'est la fin de la partition


    protected:

    private:
        std::vector<char> listeClavier ; // stocke toutes les notes tap�es au clavier sous forme de caract�res 'q', 's'...
        std::vector<char*> listeNotes ; // stocke toutes les notes tap�es au clavier sous forme de notes "DO", "RE"...
        std::vector<int> listeTemps ; // stocke le temps que cette note est jou�e

};
