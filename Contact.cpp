
#include <vector>
#include <iostream>

#include "Contact.hpp"

Contact::Contact(std::vector<std::string> vs)
        : id_(vs.at(0))
        , fname_(vs.at(1))
        , lname_(vs.at(2))
        , email_(vs.at(3))
        , country_(vs.at(4))
{}