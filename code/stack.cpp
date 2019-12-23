#include <iostream>
#include <iterator>
#include <algorithm>
#include <stack>
#include <map>
#include <vector>
//stack
//LIFO data structure
//can be implemented as an adapter over other containers
//all operations occur at the top of the stack
//no iterators are available
int main()
{
    //implemented with other container
    std::stack<int, std::vector<int>> s;

    std::stack<int, std::vector<int>> s1;

    s.push(10);
    s.push(20);
    s.push(30);

    // taking out top element

    std::cout << s.top() << std::endl;

    //checking the size of elemet

    std::cout << s.size() << std::endl;
}