
#include "Index.hpp"

Index::Index(){

    doctypeElements_ = doctypeHeading_;
    styleSheet_ = doctypeHeading_;
}

std::string Index::to_string() {

    std:std::string indexDoc = "";
    indexDoc.append(doctypeElements_);
    return indexDoc;
}


