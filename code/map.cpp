#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>
#include <unordered_map>
//map

//Allow fast retrval using key
//implemented as balanced binary tree or hashsets
//most operations are efficient

//types
//std::map
//std::unordered_map
//std::multimap
//std::unordered_multimap

//////////// std::map//////////////

//elements are stored as key value pair
//allow direct element access
//ordered by key
//no duplicates are allowed

int main()
{

    std::map<int, std::string> m;

    //inserting elements

    m.insert(std::make_pair(1, "Rahul"));

    //or
    m.insert({2, "Rohit"});
    //or
    m[3] = "Rohan";

    //erasing elements

    m.erase(2);

    //std::multi_map
    //ordered by key
    //allow duplicate elements

    std::multimap<int, std::string> m1;

    //std::unordered_multimap
    //elements are unordered
    //allow duplicate elements

    std::unordered_multimap<int, std::string> m2;
}