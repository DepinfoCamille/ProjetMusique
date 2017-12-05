#pragma once
#include <vector>
using std::vector ;




class Partition
{
    public:
        Partition();
        void ajoutNote(char c,int t) ;
        virtual ~Partition();
        int lectureClavier() ;  // quand lectureClavier renvoie un 1, cela signifie que l'utilisateur a tapé '\n'
                                // c'est la fin de la partition


    protected:

    private:
        vector<char> listeClavier ; // stocke toutes les notes tapées au clavier sous forme de caractères 'q', 's'...
        vector<char*> listeNotes ; // stocke toutes les notes tapées au clavier sous forme de notes "DO", "RE"...
        vector<int> listeTemps ; // stocke le temps que cette note est jouée

};
