#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

// what are iterators ?
// Iterators are objects that work as pointers
// used to iterate over different type of containers
int main()
{
    //  rule:
    //  iterator must be declared with same container type as that of the container that we are iterating over

    // syntax:
    // container_type::iterator_type iterator_name;

    std::vector<int>::iterator vec_it;

    std::map<int, int>::iterator map_it;

    std::set<int>::iterator set_it;

    //example 1 :

    std::vector<int> vec{1, 2, 3, 4, 5};

    vec_it = vec.begin();

    std::cout << "-- iterator --" << std::endl;

    while (vec_it != vec.end())
    {
        std::cout << *vec_it << std::endl;
        vec_it++;
    }

    // example 2 : reverse_iterator

    std::cout << "-- Reverse iterator--" << std::endl;

    std::vector<int>::reverse_iterator rvec_it = vec.rbegin();
    //we can also use auto here to make syntax simpler
    //auto rvec_it = vec.rbegin();

    while (rvec_it != vec.rend())
    {
        std::cout << *rvec_it << std::endl;
        rvec_it++;
    }

    // example 3 : const_iterator

    std::cout << "-- Const  iterator--" << std::endl;

    auto cit = vec.cbegin();

    std::cout << *cit << std::endl;
}
