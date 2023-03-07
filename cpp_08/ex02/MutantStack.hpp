#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T> {
    public:
        typedef    typename std::stack<T>::container_type::iterator iterator;
        iterator    begin() { return this->c.begin(); };
        iterator end() { return this->c.end(); };
};

#endif