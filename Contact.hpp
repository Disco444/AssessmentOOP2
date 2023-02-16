
#ifndef ASSESSMENTOOP_CONTACT_HPP
#define ASSESSMENTOOP_CONTACT_HPP


class Contact {

public:
    Contact(std::vector<std::string> vs);


private:
    std::string id_;
    std::string fname_;
    std::string lname_;
    std::string email_;
    std::string country_;

};


#endif //ASSESSMENTOOP_CONTACT_HPP
