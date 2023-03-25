#include "RPN.hpp"


// static int validInputs(std::string av)
// {
//     std::cout << av << std::endl;
//     return 1;
// }

int main(int ac, char **av)
{

    if(ac != 2)
    {
        std::cerr << "Error: use ./RPN \"values\" !" << std::endl;
        return 1;
    }

    std::string _av = av[1];
    RPN rpn;
    rpn.calculate(_av);
}