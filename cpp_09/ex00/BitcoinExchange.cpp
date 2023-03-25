#include "BitcoinExchange.hpp"

static int  isValideDate(std::string date) 
{
    if ( date[4] != '-' || date[7] != '-') {
        return 0;
    }
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if (year < 1900 || year > 2100 || month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;
    }
    return 1;
}

static void rightTrim(std::string& s)
{
    size_t pos = s.find_last_not_of(" "); // Find last non-whitespace character
    if (pos != std::string::npos) {
        s.erase(pos + 1); // Remove all characters after the last non-whitespace character
    }
}


static void leftTrim(std::string& s)
{
    size_t pos = s.find_first_not_of(" "); // Find first non-whitespace character
    if (pos != std::string::npos) {
        s.erase(0, pos); // Remove all characters before the first non-whitespace character
    } else {
        s.clear(); // The string contains only whitespace characters
    }
}

Btc::Btc()
{
    std::cout << "default constructor called" << std::endl;
}


Btc::Btc(Btc const &btc)
{
    std::cout << "copy constructor called" << std::endl;
    this->data = btc.data;
}

Btc& Btc::operator=(Btc const &var) {
    if (this != &var) {
        data = var.data;
    }
    return *this;
}
Btc::~Btc()
{
    std::cout << "deconstructor called" << std::endl;
}

void Btc::setData(std::string file) 
{

    std::ifstream input_data("data.csv");
    std::string line1;
    getline(input_data, line1);
    //std::map<std::string, float> data_f ;
    while (getline(input_data, line1)) 
    {
        size_t pos = line1.find(",");
        if (pos == std::string::npos)
            std::cerr << "data not fasila\n";
        std::string date1 = line1.substr(0, pos);
        std::string value1 = line1.substr(pos + 1);
        if(date1[date1.length()] == ' ')
            std::cerr << "data missing space\n";

        // rightTrim(date1);
        // leftTrim(value1);
        float v = std::atof(value1.c_str());
        if(isValideDate(date1))
        {
            data_f.insert(std::make_pair(date1, v));
        }
        else
            std::cerr << "data Error: date\n";


    }
    input_data.close();



    std::ifstream input_file(file);
    std::string line;
    getline(input_file, line);
    while (getline(input_file, line)) 
    {
        size_t pos = line.find("|");
        if (pos == std::string::npos)
        {
            std::cerr << "not pipe\n";
            continue;
        }
        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 1);
        if(date[date.length()] == ' ')
        {
            std::cerr << "missing space\n";
            continue;    
        }

        rightTrim(date);
        leftTrim(value);
        float v = std::atof(value.c_str());
        if(isValideDate(date))
        {
            if(v > 1000 || v < 0)
                std::cerr << "Error: value\n";
            else
                data.insert(std::make_pair(date, v));//data[date] = v;
        }
        else
            std::cerr << "Error: date\n";


    }
    input_file.close();
}

void Btc::getData() 
{
    std::multimap<std::string, float>::iterator it2;

    for ( std::multimap<std::string, float>::iterator it1 = data.begin(); it1 != data.end(); ++it1)
    {
        it2 = data_f.lower_bound(it1->first);
        it2--;
        std::cout << it1->first << " => " << it1->second << " = "<< it1->second * it2->second << std::endl;
    }

}
