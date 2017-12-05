#include <unordered_map>
//std::pair<std::string,int>
 std::unordered_map<char,std::tuple<std::string,int>> dicco_notes({
   {'q',std::make_tuple("DO",3)},{'z',std::make_tuple("DO#",3)}
   });

   // {'q',("DO",3)},{'z',("DO#",3)},{'s',("RE",3)},{'e',("RE#",3)},{'d',("MI",3)},{'f',("FA",3)},{'t',("FA#",3)}, {'g',("SOL",3)},
  //{'y',("SOL#",3)},{'h',("LA",3)},{'u',("LA#",3)},{'j',("SI",3)},{'k',("DO",2)}, {'o',("DO#",2)},{"J",("SI",3)}
//                                                                        });

class Partition
{
public:
    Partition();


protected :


};
