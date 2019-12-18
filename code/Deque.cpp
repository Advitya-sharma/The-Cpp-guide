#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
int main()
{
    //Deques
    //Deques are double ended ques that can perform insertion and deletion from back and front in constant time
    //insertion and deletion at any other location takes linear time
    //std::deque<int>

    std::deque<int> que{1, 2, 34, 45, 6};
    //methods that can be performed on deque

    std::cout << que.max_size() << std::endl;

    //get first and last element of the que

    std::cout << que.front() << std::endl;

    std::cout << que.back() << std::endl;

    //adding first and last element to the que

    que.push_back(23);

    que.push_front(21);

    // removing first and last element

    que.pop_back();
    que.pop_front();

    //removing all elements from the que

    que.clear();
}