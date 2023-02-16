
#include <fstream>
#include <string>
#include <vector>
#include <regex>

#include "ContactsList.hpp"
#include "FileReader.hpp"
#include "Contact.hpp"


using VS = std::vector< std::string > ;

VS tokenize( std::string &s ) {           // Tokenizer

    auto const re = std::regex{R"(,+)"};
    auto const vec = VS(
            std::sregex_token_iterator{begin(s), end(s), re, -1},
            std::sregex_token_iterator{}
    );
    return vec;
}

ContactsList::ContactsList()
{
    FileReader f;
    for (auto e : f.getLines()) {
        Contact c(tokenize(e));

        contactsList_.push_back(c);
    }
}

std::vector<Contact> ContactsList::ContactsPrint(){

    return contactsList_;
}





