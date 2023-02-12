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
    void print();

private:
    std::string contact;
    std::vector<std::string> lines;

};


#endif //ASSESSMENTOOP_FILEREADER_HPP
