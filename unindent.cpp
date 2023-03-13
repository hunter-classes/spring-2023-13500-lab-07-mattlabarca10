#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

/*
std::string removeLeadingSpaces(std::string line);

int main(){
    std::cout << removeLeadingSpaces("   Hello, world   ") << "end" << std::endl;
}
*/

std::string removeLeadingSpaces(std::string line){
    std::string noSpace;
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    for(i; i < line.length(); i++){
        noSpace += line[i];
    }
    return noSpace;
}

//unindent bad-code.cpp
std::string unindentFile(std::string filename){
    std::ifstream file(filename);
    std::string line;
    std::string unindented;
    while(std::getline(file, line)){
        unindented += removeLeadingSpaces(line);
        unindented += "\n";
    }
    file.close();
    return unindented;
}


