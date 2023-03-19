#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <filename>" << std::endl;
        return 1;
    }
    BitcoinExchange b("data.csv");
    b.exchange(av[1]);

    
}