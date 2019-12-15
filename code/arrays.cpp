#include <iostream>
#include <algorithm>
#include <map>
#include <array>

//  std::array
//It has fixed size
//Direct element access
//all iterators are available
// std::array<int,5>arr;
int main()
{
    //methods and algorithms for arrays

    std::array<int, 10> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "array size is " << arr.size() << std::endl;

    std::cout << "element at 3 position " << arr.at(2) << std::endl;

    //difference between arr.at() and arr[0]
    //at() does bounds checking and throws an excception if the position is out of bounds

    std::cout << "element at 0 position " << arr.front() << std::endl;

    std::cout << "element at 0 position " << arr.back() << std::endl;

    std::cout << "array is empty ? " << arr.empty() << std::endl; //returns 0 or 1

    std::cout << "Max size of array is " << arr.max_size() << std::endl;

    // swap arrays using swap

    //get max element

    std::array<int, 5>::iterator max_num = std::max_element(arr.begin(), arr.end());

    std::cout << "Max element is  " << *max_num << std::endl;

    //  remember that you can use more algorithms with arrays its a  exhaustive list
}