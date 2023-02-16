#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef ASSESSMENTOOP_FILEREADER_HPP
#define ASSESSMENTOOP_FILEREADER_HPP


class FileReader {

public:
    FileReader();  // Constructor
    void read();
//    void print();
    std::vector<std::string> getLines();  // Vector

private:
    std::string contact;
    std::vector<std::string> lines;

    void print();
};


#endif //ASSESSMENTOOP_FILEREADER_HPP
