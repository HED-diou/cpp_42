
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contacts.hpp"

class PhoneBook
{
    private:
        Contacts contacts[8];
        int numberContats;

    public:
        PhoneBook();
        void addContact(int n);
        void searchContact();
        ~PhoneBook();
};

#endif
