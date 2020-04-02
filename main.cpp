#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>

int main(int argc, char** argv)
{
    if(argc != 3) {
      std::cout << "Invalid Syntax" << std::endl;
      exit(0);
    }

    std::vector<std::string> args;
    args.push_back(argv[0]);
    args.push_back(argv[1]);
    args.push_back(argv[2]);
    std::string output;
    if(args[1] == "i") output += "improvement";
    else if(args[1] == "b") output += "bug";
    else if(args[1] == "f") output += "feature";
    else {
        std::cout << "Invalid Syntax" << std::endl;
        exit(0);
    }
    output += '-';
    std::string description = args[2];
    for(auto& i : description) {
        if(i == ' ' || i == '\n')
            i = '-';
    }
    output += description;
    std::cout << output << std::endl;
    return 0;
}
