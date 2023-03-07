#ifndef span_hpp
#define span_hpp


#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iterator>
#include <vector>


class Span {
    private:
        std::vector<int> myVec;
        size_t N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        ~Span();

        Span& operator=(const Span& other);
        size_t get_size() const;
        size_t get_capacity() const;
        void addNumber(int n);
        int shortestSpan(void) const;
        int longestSpan(void) const;
        void addmultiple(int num);
};


#endif
