#pragma once
#include <vector>
using std::vector ;
class Partition
{
    public:
        Partition();
        void ajoutNote(char c,int t) ;
        virtual ~Partition();

    protected:

    private:
        vector<char> listeNotes ; // stocke toutes les notes tapées au clavier
        vector<int> listeTemps ; // stocke le temps que cette note est jouée
};
