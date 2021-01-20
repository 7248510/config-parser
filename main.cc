#include "config.hh"

//cl /EHsc main.cc
//int main(int argc, char* argv[])
//9-28 C++ Crash course by Josh Lospinoso
int main(int argc, char** argv)
//argc is an integer holding the number of command line arguments supplied
//argv holds the values that are passed to the command line
{
    readDir();
    arguments(argc, argv);
}