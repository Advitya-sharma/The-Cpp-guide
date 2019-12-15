#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

//Vectors
//vectors are dynamically sized
//elements are stored in contiguous memeory
//provide direct access to to elements
//constant time for insersion and deletion at back
//linear time for insertion and deletion at any other position

// std::vector<int>vec;

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};

    //inserting element using loop
    int x, n = 5;
    while (n--)
    {
        std::cin >> x;
        vec.push_back(x);
    }

    // adding elements at back of vector using push back
    vec.push_back(10);

    //removing element from back of the vector
    vec.pop_back();

    std::cout << "check if vector is empty " << vec.empty() << std::endl;
    std::cout << "max sise of vector " << vec.max_size() << std::endl;

    //reduce capacity to number elements in vector
    vec.shrink_to_fit();

    //stop vector from expanding till it reaches the limit

    vec.reserve(10);

    //inserting a vector at the back of another vector

    std::vector<int> vec1{2, 3, 3};
    std::vector<int> vec2;

    std::copy(vec.begin(), vec.end(), std::back_inserter(vec1));

    std::cout << "new vector " << std::endl;
    for (auto i : vec1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "new vector made with transform " << std::endl;
    std::transform(vec.begin(), vec.end(), vec1.begin(), std::back_inserter(vec2), [](int x, int y) { return x * y; });

    for (auto i : vec2)
    {
        std::cout << i << " ";
    }
}