#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

// What are STL algorithms ?
//STL algorithms work on sequence of container elementrs provided by an iterator

int main()
{

    // find algorithm

    // it tries to locate the first occurence of an element in a container
    // if find is n ot able to find that element it returns an iterator pointing to the end
    // std::find(vec.begin(),vec.end(),'A');

    std::vector<std::string> vec{"Advitya", "Rahul", "Rohit", "Rakesh"};

    auto fin = std::find(vec.begin(), vec.end(), "Rahul");

    if (fin != vec.end())
    {
        std::cout << "found the name" << std::endl;
    }
    else
    {
        std::cout << "Not found name" << std::endl;
    }

    // for each algrithm

    //applies a function to each element in the iterator sequence

    // function can be provided to algorithm as:
    //>>Functors (function objects)
    //>>functiion pointers
    //>>Lambda expressions

    // BY using functors
    std::cout << "using for_each with functor to add Mr. " << std::endl;
    class Mr_Adder
    {
    public:
        void operator()(std::string x)
        {
            std::cout << "Mr. " + x << std::endl;
        }
    } add;

    std::for_each(vec.begin(), vec.end(), add);

    std::cout << "using for_each with function pointer to add Mr. " << std::endl;
    void Mr(std::string x);

    std::for_each(vec.begin(), vec.end(), Mr);

    //BY using Lambda expressions
    std::cout << "using for_each lambda expressions to add Mr. " << std::endl;

    std::for_each(vec.begin(), vec.end(), [](std::string x) { std::cout << "Mr. " + x << std::endl; });

    //Count algorithm
    //used to find the number of occurence of a element in a container
    //std::count(vec.begin(),vec.end(),element)
    std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2};
    std::cout << "using count algorithm" << std::endl;
    int num = std::count(vec1.begin(), vec1.end(), 2);

    std::cout << "count for this number is " << num << std::endl;

    // count_if
    //used to count the number of times a condition is true
    //std::count_if(ve3cx.begin(),vec.end(),function)
    std::cout << "using count_if algorithm to find the number of even numbers" << std::endl;

    num = std::count_if(vec1.begin(), vec1.end(), [](int x) { return x % 2 == 0; });

    std::cout << "number of ebven number is " << num << std::endl;

    //all_of
    // return ture if the test condition is true else False\

    if (std::all_of(vec1.begin(), vec1.end(), [](int x) { return x % 2 == 0; }))
    {

        std::cout << "All elements are even" << std::endl;
    }
    else
    {
        std::cout << "All the elements are not even" << std::endl;
    }
}

//function
void Mr(std::string x)
{
    std::cout << "Mr. " + x << std::endl;
}
