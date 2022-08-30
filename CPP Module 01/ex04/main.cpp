#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "argument error: ./Sed_is_for_losers filename s1 s2"
                  << std::endl;
        return (0);
    }
    std::string fileName(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string readData("");

    std::ifstream file(fileName);
    while (char c = file.get()) {
        if (c >= 0)
            readData += c;
        else
            break;
    }
    file.close();
    for (size_t i = 0; i < readData.length(); i++) {
        size_t idx = readData.find(s1, i);
        if (idx == std::string::npos) {
            break;
        } else {
            for (size_t j = 0; j < s1.length(); j++) {
                readData.erase(readData.begin() + idx);
            }
            for (size_t k = 0; k < s2.length(); k++) {
                readData.insert(readData.begin() + idx + k, s2[k]);
            }
            i = idx + s2.length() - 1;
        }
    }

    std::ofstream replacedFile(fileName + ".replace");
    replacedFile.write(readData.c_str(), readData.length());
    replacedFile.close();
}
