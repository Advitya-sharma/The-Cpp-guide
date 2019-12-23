#include <iostream>
#include <iterator>
#include <algorithm>
#include <stack>
#include <map>
#include <vector>
#include <queue>

//priority queue

//allow insertion and deletion of element from front and back
//implemented with vectors by default
//elements are inserted in priority order (largest element will be at front)
//no iterators are supported

int main()
{
    std::priority_queue<int> pq;

    //inserting the elements

    pq.push(10);
    pq.push(20);
    pq.push(30);

    //accesing the top element

    std::cout << pq.top() << std::endl;

    //pop the largest element

    pq.pop(); //removing 30
}