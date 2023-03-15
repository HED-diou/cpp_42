#include "MutantStack.hpp"
#include <list>
void MutanStack()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout <<" - "<< mstack.top() << std::endl;
    // std::cout <<" - "<< mstack.size() << std::endl;
    mstack.pop();
    // std::cout <<" - "<< mstack.top() << std::endl;
    std::cout <<" - "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void liste()
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout <<" - "<< mstack.back() << std::endl;
    mstack.pop_back();
    std::cout <<" - "<< mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

int main()
{

    MutanStack();
    std::cout << "------ \n";
    liste();

    return 0;
}