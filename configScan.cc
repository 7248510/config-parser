//https://stackoverflow.com/questions/41308933/how-to-enable-c17-compiling-in-visual-studio
//cl main.cc /EHsc /std:c++17 && main
///std:c++14
///std:c++17
///std:c++latest
namespace fs = std::filesystem;
void readDir() 
{
    std::string path = "Images";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}