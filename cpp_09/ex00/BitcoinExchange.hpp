#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
#include <stdio.h>
#include <stdlib.h>


class Btc
{
    private:
        std::multimap <std::string, float> data_f;
    public:
        Btc();
        ~Btc();

        void setData();
        void getData(std::string file);
};

#endif
