#include "Span.hpp"

Span::Span()
{
    this->myVec.reserve(0);
}


Span::Span(unsigned int N)
{
    this->N = N;
    this->myVec.reserve(N);
}

Span::Span(const Span& other)
{
    this->myVec = other.myVec;
    this->N = other.N;
}

Span::~Span(){}

Span& Span::operator=(const Span& other)
{
    this->myVec = other.myVec;
    this->N = other.N;
    return *this;
}

size_t Span::get_size(void) const
{
    return this->myVec.size();
}

size_t Span::get_capacity(void) const
{
    return this->N;
}

int Span::longestSpan(void) const
{
    std::vector<int>    tmp;
    
    tmp = this->myVec;
    if (this->myVec.size() < 2)
        throw std::logic_error("Not enough numbers stored to provide a span");
    std::sort(tmp.begin(), tmp.end());
    return (tmp.back() - tmp.front());
}

int Span::shortestSpan(void) const
{
    if (this->myVec.size() < 2)
        throw std::logic_error("Not enough numbers stored to provide a span");
    std::vector<int> tmp = this->myVec;
    std::sort(tmp.begin(), tmp.end());
    int shortest = INT_MAX;
    for (std::vector<int>::const_iterator it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        shortest = std::min(shortest, *(it + 1) - *it);
    }
    return shortest;
}

void    Span::addNumber(int n)
{
    if (this->myVec.size() == this->N)
        throw std::overflow_error("Span has no more free spaces");
    this->myVec.push_back(n);
}

void Span::addmultiple(int num)
{   
    int i = 0;    
    while (i < num)
    {
        this->addNumber(i);
        i++;
    }
}