#include <iostream>
#include <iterator>
#include <algorithm>
#include <unordered_set>
#include <set>
//sets
//sets contain all unique elements
//we can't modify a value in the set
//we can add and remove value from the set
//all elements in sets are unordered

//std::set
int main()
{
    std::set<int> s{1, 2, 3, 4, 6, 5};

    std::cout << "size is " << std::endl;
    // cannot directly access elements
    //it uses < operator for sorting elements

    //erase an element
    s.erase(1);

    //count can be used to find the occurence of an element in the set

    std::cout << s.count(2);

    //clear all elements from set

    s.empty();

    //inserting an element
    s.insert(10);
    //returns std::pair

    //multi_set

    //defined in #include<set>
    //ordered by the key
    //it allow duplicate elements
    //all iterators are available

    std::multiset<int> s1{1, 1, 2, 3, 4, 5};

    //unordered_set
    //defined in #include<unordered_set>
    //elements are unordered as the name suggests
    //elements cannot be modified
    //no reverse iterators

    std::unordered_set<int> s2{2, 3, 4, 5, 6};

    //unordered_multiset
    //#include<unorderd_set>
    //elements are unordered
    //allow duplicate elements
    //no reverse iterators allowed

    std::unordered_multiset<int> s3{2, 4, 6, 7, 8, 9};
}
