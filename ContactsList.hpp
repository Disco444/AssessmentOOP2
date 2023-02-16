
#ifndef ASSESSMENTOOP_CONTACTSLIST_HPP
#define ASSESSMENTOOP_CONTACTSLIST_HPP


#include "Contact.hpp"

class ContactsList {

public:
    ContactsList();
    std::vector<Contact> ContactsPrint();

private:
    std::vector<Contact> contactsList_;

};


#endif //ASSESSMENTOOP_CONTACTSLIST_HPP
