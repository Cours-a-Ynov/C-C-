#include <iostream>

int main(int arg, char** argv){
    if(arg <= 1){
        return 1;
    }
    char* firstArgument = argv[1];
    char firstLetter = firstArgument[0];
    if (firstLetter) > 94 &&firstLetter < 123){
            char capitalizedLetter = firstLetter - 32;
            firstArgument[0] = capitalizedLetter;
    }
    std::cout << firstArgument << std::endl;
    return 0;
}