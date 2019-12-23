#include <iostream>
#include <iterator>
#include <algorithm>
#include <stack>
#include <list>
#include <vector>
#include <queue>
//std::queue

//FIFO data structure
//implemented as an adapter over other STL containers
//elements are pushed from the back and popped from the front
//no iterators are supported

int main()
{

    std::queue<int, std::list<int>> q;

    //inserting elements
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    //checking elements

    std::cout << q.front() << std::endl;

    std::cout << q.back() << std::endl;

    //checking size

    std::cout << q.size() << std::endl;
}