
#include "FileReader.hpp"


FileReader::FileReader() {

    read();
    print();
}

void FileReader::read() {

    std::ifstream file("C:\\Users\\david\\CLionProjects\\AssessmentOOP\\contacts.html");
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }
}

std::vector<std::string> FileReader::getLines(){

    return lines;

}

void FileReader::print() {

    for (const auto& s : lines) {
        std::cout << s << std::endl;
    }
}
