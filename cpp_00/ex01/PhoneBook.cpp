
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numberContats(0) {}

PhoneBook::~PhoneBook(){}



static void print_instruction()
{
    std::cout << "\n\033[1;47m-----------------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;47m| You can use these commends ADD, SEARCH, EXIT      |\033[0m" << std::endl;
    std::cout << "\033[1;47m-----------------------------------------------------\033[0m" << std::endl;
}


std::string addText(std::string str)
{
    std::string promt;
    while (promt.size() == 0)
    {
        std::cout << str;
        getline(std::cin,promt);
        if (std::cin.eof())
            exit(0);
        if (promt.size() == 0)
            std::cout << "\033[1;41mInvalid input\033[0m\n";
        else
            break;
    }
    return promt;
}


void    printLimitation()
{
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "| Index      | First Name | Last Name  | Nickname   |" << std::endl;
}


std::string truncate(std::string str, size_t width)
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}


void print_contact2(Contacts contacts[8], int i)
{
    if(contacts[i].get_first_name().empty())
    {
        std::cout << "\n\033[1;41mInvalid index\033[0m\n";
        return ;
    }
    std::cout << "\n\033[1;42mContact found\033[0m\n";
    std::cout << "-ID-              :  " <<  i << std::endl; 
    std::cout << "First Name        :  " <<  contacts[i].get_first_name() << std::endl;
    std::cout << "Last Name         :  " <<  contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname          :  " <<  contacts[i].get_nickname() << std::endl;
    std::cout << "Phone Number      :  " <<  contacts[i].get_phone() << std::endl;
    std::cout << "Darkest Secret    :  " <<  contacts[i].get_dark() << std::endl;
}



void print_contact(Contacts contacts[8], int i)
{
    std::string index;
    std::string fs;
    std::string ls;
    std::string nm;

    if(contacts[i].get_first_name() != "")
    {
        index = std::to_string(i);
        fs = contacts[i].get_first_name();
        ls = contacts[i].get_last_name();
        nm = contacts[i].get_nickname();

        index = truncate(index, 10);
        fs = truncate(fs, 10);
        ls = truncate(ls, 10);
        nm = truncate(nm, 10);
        std::cout << "| ";
        std::cout << std::setw(10) << std::right << index <<" | ";
        std::cout << std::setw(10) << std::right  <<  fs << " | ";
        std::cout << std::setw(10) << std::right  <<  ls << " | ";
        std::cout << std::setw(10) << std::right  <<  nm << " | " << std::endl;
    }
}


int print_table(Contacts contacts[8])
{
    int i = 0;

    if(contacts[i].get_first_name().empty())
    {
        std::cout << "\n\033[1;41mNo contact found\033[0m\n" << std::endl;
        return 1;
    }
    printLimitation();
    while(i < 8)
    {
        print_contact(contacts, i);
        i++;
    }
    std::cout << "-----------------------------------------------------" << std::endl;
    return 0;
}


void PhoneBook::searchContact()
{
    std::string prompt;
    int i = 0;

    std::cout << "\n\033[1;43mSEARCHING\033[0m\n";
    if(print_table(contacts))
    {
        print_instruction();
        return ;
    }
    std::cout << "SELECT INDEX >> ";
    getline(std::cin,prompt);
    if (std::cin.eof())
    {
        std::cout << "\n\033[1;41mInvalid input\033[0m\n\n";
        exit(1);
    }
    else
    {
        while(prompt[i])
        {
            if (!isdigit(prompt[i]) || prompt.length() > 2)
            { 
                std::cout << "\n\033[1;41mInvalid input\033[0m\n\n";
                break;
            }
            else
            {
                if(atoi(prompt.c_str()) < 8 && atoi(prompt.c_str()) >= 0)
                    print_contact2(contacts, stoi(prompt));
                else
                {
                    std::cout << "\n\033[1;31mInvalid input\033[0m\n\n";
                    break;
                }
            }
            i++;
        }
    }
    print_instruction();
}

void PhoneBook::addContact(int n)
{
    PhoneBook usr;

    n = numberContats++ % 8;
    std::cout << "\n\033[1;43mADD CONTACT\033[0m\n";
    usr.contacts[n].set_first_name(addText("\nFirst Name     :  "));
    usr.contacts[n].set_last_name(addText("\nlast Name      :  "));
    usr.contacts[n].set_nickname(addText("\nnickname       :  "));
    usr.contacts[n].set_phone(addText("\nphone Number   :  "));
    usr.contacts[n].set_dark(addText("\ndarkest Secret :  "));
    std::cout << "\n\033[1;42mContact added\033[0m\n\n";
    print_instruction();
    this->contacts[n] = usr.contacts[n];
}