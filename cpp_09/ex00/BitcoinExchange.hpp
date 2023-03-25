#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>


class Btc
{
    private:
        std::multimap <std::string, float> data;
        std::multimap <std::string, float> data_f;
    public:
        Btc();
        ~Btc();
        Btc& operator=(Btc const &var);
        Btc(Btc const &var);

        void setData(std::string file);
        void getData();
};

#endif
