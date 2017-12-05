#pragma once
#include <unordered_map>

static unsigned long changer_instrument(int channel, int numinstrument)  ;
static unsigned long appuyer_touche(int channel, int note, int force) ;
static unsigned long relacher_touche(int channel, int note, int force) ;

class Son
{
    public:
        Son();
        virtual ~Son();

        std::unordered_map<int, std::tuple<std::string,int>> dicco_son ;

    protected:

    private:


};
