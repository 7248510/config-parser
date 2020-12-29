#include <iostream>
#include <cstdio>
#include <cstdint>
#include <string>
#include <typeinfo>
//int main(int argc, char* argv[])
//9-28 C++ Crash course by Josh Lospinoso
int main(int argc, char** argv)
//argc is an integer holding the number of command line arguments supplied
//argv holds the values that are passed to the command line
{
    std::cout << "Argument count: " << argc;
    if (argc == 1) {
        //https://docs.microsoft.com/en-us/cpp/cpp/program-termination?view=msvc-160
        printf("\nNo command line arguments were passed\n");
        std::cout << "Terminiating the program";
        exit(EXIT_SUCCESS);
    }
    if (argc > 1) {
    //9-29
        printf("\n");
        for(size_t i{}; i < argc; i++) {
            printf("%zd: %s\n", i, argv[i]); //Print the current arguments
        }
        //printf("\n");
        std::cout << "ARGV's type is " << typeid(argv[1]).name();
        //Because ARGV is a char * you need to set argv to a string to make a comparision. 
        std::string help, loopCompare, compareValue,helpCompare;
        loopCompare = argv[1];
        compareValue = argv[0];//ARGV has to be set
        help = "-h";
        for(size_t i{}; i < argc; i++) {
            helpCompare = argv[i];
            if (helpCompare == help)
            {
                std::cout << "\nHelp options";
            }
        }
        if (loopCompare == "hello") {
            printf("\nHello world :)");
        }
    }
}