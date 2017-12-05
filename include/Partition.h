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

    protected:

    private:
        vector<char> listeNotes ; // stocke toutes les notes tapées au clavier
        vector<int> listeTemps ; // stocke le temps que cette note est jouée

};
