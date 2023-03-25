#include "RPN.hpp"

RPN::RPN()
{
    std::cout << "default constructor called" << std::endl;
}

RPN::~RPN()
{
    std::cout << "deconstructor called" << std::endl;
}

RPN::RPN(std::stack<double> data)
{
    this->data = data;
}

RPN::RPN(const RPN &var)
{
    *this = var;
}

RPN &RPN::operator=(const RPN &var)
{
    this->data = var.data;
    return *this;
}

void RPN::calculate(std::string input)
{
    for (size_t i = 0; i < input.size(); i++)
    {
        char c = input[i];

        if (c == ' ')
            continue;
        else if (isdigit(c))
        {
            int number = c - '0';
            data.push(number);
        }
        else if (c == '+' && data.size() >= 2)
        {
            double b = data.top();
            data.pop();
            double a = data.top();
            data.pop();
            data.push(a + b);
        }
        else if (c == '-' && data.size() >= 2)
        {
            double b = data.top();
            data.pop();
            double a = data.top();
            data.pop();
            data.push(a - b);
        }
        else if (c == '*' && data.size() >= 2)
        {
            double b = data.top();
            data.pop();
            double a = data.top();
            data.pop();
            data.push(a * b);
        }
        else if (c == '/' && data.size() >= 2)
        {
            double b = data.top();
            data.pop();
            double a = data.top();
            data.pop();
            data.push(a / b);
        }
        else
        {
            std::cout << "Invalid character" << std::endl;
            return;
        }
    }

    if (data.size() == 1)
    {
        double result = data.top();
        data.pop();
        std::cout << " " << result << std::endl;
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
}