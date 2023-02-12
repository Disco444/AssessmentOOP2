#include <iostream>
#include <fstream>
#include <string>


int main()
{
    std::string filename, line;

    std::ifstream inFile;
    inFile.open("C:\\Users\\david\\CLionProjects\\AssessmentOOP\\contacts.html");

    if (!inFile) {
        std::cout << "Unable to open file";
        exit(1);

    }

    while (inFile >> line) {
        std::cout << line << std::endl ;
    }

    inFile.close();
    return 0;
}
