#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <ctime>
#include <sstream>
#include "BitcoinExchange.hpp"


int main(int argc, char** argv)
{
    // secure code 
    if (argc != 2) {
        std::cerr << "Usage: ./btc <input_file_name>" << std::endl;
        return 1;
    }
    // test exist file
    std::ifstream input_file(argv[1]);
    if (input_file.fail()) {
        std::cerr << "Unable to open file: " << argv[1] << std::endl;
        return 1;
    }
    std::ifstream data_file("data.csv");
    if (data_file.fail()) {
        std::cerr << "Unable to open file: data.csv" << std::endl;
        return 1;
    }


    Btc btc;
    btc.setData();
    btc.getData(argv[1]);

    input_file.close();
    data_file.close();



    return 0;
}
