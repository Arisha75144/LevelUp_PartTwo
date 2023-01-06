#include <vector>
#include <iostream>
#include <fstream>
#include <unordered_map>

std::unordered_map<std::string, int> dictionary;

int main (int argc, char **argv) {// Get the file name from the command line.
    std::ifstream file;
    std::string word, filename;
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;

    }
    filename = argv[1];
    file.open (filename);
    if (!file.is_open ()) {
        std::cout << "Could not open file " << filename << std::endl;
        return 1;
    }
    while (file >> word) {
        auto it = std::remove_if(word.begin(), word.end(), ::ispunct);
        word.erase(it, word.end());
        dictionary[word]++;
    }

//    for (auto &[word_, frequency]: dictionary) {
//        std::cout<<word_<<":"<<frequency << std::endl;
//    }

    for (int  i = 2; i < argc; i++ ) {
        std::cout << argv[i] << "  :  " << dictionary[argv[i]] << std::endl;
    }

    return 0;
}

