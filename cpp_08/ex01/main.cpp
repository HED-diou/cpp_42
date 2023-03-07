#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        // sp.addmultiple(5);
        // std::cout <<  sp.get_capacity() << std::endl;
        // std::cout <<  sp.get_size() << std::endl;
        sp.addNumber(6);   //  3
        sp.addNumber(3);   //  6
        sp.addNumber(17);  //  9
        // std::cout <<  sp.get_capacity() << std::endl;
        // std::cout <<  sp.get_size() << std::endl;
        sp.addNumber(9);   //  11
        sp.addNumber(11);  //  17

        // std::cout <<  sp.get_capacity() << std::endl;
        // std::cout <<  sp.get_size() << std::endl;

        std::cout << "SS : " << sp.shortestSpan() << std::endl;
        std::cout << "LS : " << sp.longestSpan() << std::endl;
    }
    catch (std::overflow_error& e)
    {
        std::cout << "Overflow : " << e.what() << std::endl;
    }
    return 0;

}