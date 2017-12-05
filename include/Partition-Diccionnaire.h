#include <unordered_map>
//std::pair<std::string,int>
 std::unordered_map<char,std::tuple<std::string,int>> dicco_notes({
   {'q',std::make_tuple("DO",3)},{'z',std::make_tuple("DO#",3)}, {'s',std::make_tuple("RE",3)}, {'e',std::make_tuple("RE#",3)},
       {'d',std::make_tuple("MI",3)}, {'f',std::make_tuple("FA",3)}, {'t',std::make_tuple("FA#",3)}, {'g',std::make_tuple("SOL",3)},
        {'y',std::make_tuple("SOL#",3)}, {'h',std::make_tuple("LA",3)},{'u',std::make_tuple("LA#",3)}, {'j',std::make_tuple("SI",3)},
        {'k',std::make_tuple("DO",2)}, {'o',std::make_tuple("DO#",2)}, {'l',std::make_tuple("RE",2)}
   });




