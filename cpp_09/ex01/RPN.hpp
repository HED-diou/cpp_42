#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>
#include <string>
#include <cctype>


class RPN
{
    private:
        std::stack <double> data;
    public:
    RPN();
    RPN(std::stack<double> data);
    RPN(const RPN &var);
    ~RPN();
    RPN &operator=(const RPN &var);
    void calculate(std::string input);
};


#endif