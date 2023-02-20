
#ifndef ASSESSMENTOOP_WEBPAGE_H
#define ASSESSMENTOOP_WEBPAGE_H


#include <string>

class Webpage {

public:
    Webpage() = default;
    virtual std::string to_string()=0;

protected:
    inline static std::string_view doctypeHeading_{"<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n<meta charset=\"UTF-8\">\n<meta http-equiv=\""
                                                   "X-UA-Compatible\" content=\"IE=edge\">\n<meta name=\"viewport\" content=\"width=device-width,"
                                                   "initial - scale = 1.0\">\n"};

    inline static std::string_view styleHeading_{ "\n<link rel=\"stylesheet\" href=\"style.css\">\n</head>\n\n" };
};


#endif //ASSESSMENTOOP_WEBPAGE_H
