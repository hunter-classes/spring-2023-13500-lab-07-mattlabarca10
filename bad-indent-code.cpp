#include <iostream>   
#include <string>    

// this is badly indented
int bad(){
for(int i = 0; i < 5; i+=2){
i--;
}
std::string str = "Hello, world!";
std::cout << str << std::endl;
return 0;
}