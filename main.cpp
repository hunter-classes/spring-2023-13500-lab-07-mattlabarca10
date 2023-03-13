#include <iostream>
#include <string>
#include "unindent.h"
#include "indent.h"

int main(){
    std::cout << "\nremoveLeadingSpaces(   Hello world):\n" <<std::endl;
    std::cout << removeLeadingSpaces("   Hello world") << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "unindentFile(bad-code.cpp):\n" <<std::endl;
    std::cout << unindentFile("bad-code.cpp") << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "countChar({}{{{}}{{, '{'):\n" <<std::endl;
    std::cout << countChar("{}{{{}}{{", '{') << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "countChar({}{{{}}{{, '}'):\n" <<std::endl;
    std::cout << countChar("{}{{{}}{{", '}') << std::endl;
    std::cout << "___________________" << std::endl;
    std::cout << "indentFile(bad-indent-code.cpp):\n" <<std::endl;
    std::cout << indentFile("bad-indent-code.cpp") << std::endl;
    return 0;
}