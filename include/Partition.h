#pragma once
#include <vector>
#include <unordered_map>

using std::vector ;




class Partition
{
    public:
        Partition();
        void ajoutNote(char c,int t) ;
        virtual ~Partition();

        std::unordered_map<char,std::tuple<std::string,int>> dicco_notes ;

        int lectureClavier() ;  // quand lectureClavier renvoie un 1, cela signifie que l'utilisateur a tap� '\n'
                                // c'est la fin de la partition



    protected:

    private:
        vector<char> listeClavier ; // stocke toutes les notes tap�es au clavier sous forme de caract�res 'q', 's'...
        vector<char*> listeNotes ; // stocke toutes les notes tap�es au clavier sous forme de notes "DO", "RE"...
        vector<int> listeTemps ; // stocke le temps que cette note est jou�e

};
