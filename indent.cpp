#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

// counts how many times there is a character in a string
int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c)
            count++;
    }
    return count;
}


std::string indentFile(std::string filename){
    std::ifstream file(filename);
    std::string line;
    std::string indented;
    int count = 0;
    while(std::getline(file, line)){
        count -= countChar(line,'}');
        for(int i = 0; i < count; i++)
            indented += "\t";
        indented+=line;
        indented+="\n";
        count += countChar(line,'{');
    }
    file.close();
    return indented;
}
