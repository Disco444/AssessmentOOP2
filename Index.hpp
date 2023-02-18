
#ifndef ASSESSMENTOOP_INDEX_HPP
#define ASSESSMENTOOP_INDEX_HPP


#include "Webpage.h"

class Index: public Webpage {

public:
     Index();
     std::string to_string() override;

private:
    std::string doctypeElements_;
    std::string styleSheet_;

};


#endif //ASSESSMENTOOP_INDEX_HPP
