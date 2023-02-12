
#include "FileReader.hpp"


FileReader::FileReader() {

    read();
    print();
}

void FileReader::read() {

    std::ifstream file("C:\\Users\\david\\\\CLionProjects\\AssessmentOOP2\\contacts.html");
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }
}

void FileReader::print() {

    for (const auto& s : lines) {
        std::cout << s << std::endl;
    }
}
