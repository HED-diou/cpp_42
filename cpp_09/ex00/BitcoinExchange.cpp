#include "BitcoinExchange.hpp"

static int  isValideDate(std::string date) 
{
    if ( date[4] != '-' || date[7] != '-') {
        return 0;
    }
    int year;
    try{
         year = std::stoi(date.substr(0, 4));
    }
    catch(int myNum)
    {
         year = 2001;

    }
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
}



Btc::~Btc()
{
}

void Btc::setData() 
{

    std::ifstream input_data("data.csv");
    std::string line1;
    getline(input_data, line1);
    while (getline(input_data, line1)) 
    {
        size_t pos = line1.find(",");
        if (pos == std::string::npos)
            std::cerr << "data not fasila\n";
        std::string date1 = line1.substr(0, pos);
        std::string value1 = line1.substr(pos + 1);
        if(date1[date1.length()] == ' ')
            std::cerr << "data missing space\n";

        float v = std::atof(value1.c_str());
        if(isValideDate(date1))
        {
            data_f.insert(std::make_pair(date1, v));
        }
        else
            std::cerr << "data Error: date\n";


    }
    input_data.close();

}

void Btc::getData(std::string file) 
{
    std::ifstream input_file(file);
    std::string line;
    getline(input_file, line);
    std::multimap<std::string, float>::iterator it2;
    while (getline(input_file, line)) 
    {
        size_t pos = line.find("|");
        if (pos == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
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
        size_t pos1 = value.find(",");
        if(pos1 == 1)
            value.replace(pos1, 1, ".");
        float v = std::atof(value.c_str());

        if(v > 1000)
        {
            v = -1;
            std::cout << "Error: too large a number." << std::endl;
        }
        else
        {
            it2 = data_f.lower_bound(date);
            if(date != it2->first && it2 != data_f.begin())
                it2--;
            if(!isValideDate(date))
            {
                std::cout << "Error: bad input => " << date << std::endl;
                continue;  
            }
            std::ostringstream ss;
            ss << v;
            std::string myString = ss.str();
            if( myString != value)
            {
                std::cout << "Error: bad input" << std::endl;
                continue; 
            }
            if(v < 0)
                std::cout << "Error: not a positive number." << std::endl;
            else
                std::cout << date << " => " << v << " = "<< v * it2->second << std::endl;


        }
    }

    input_file.close();
}


