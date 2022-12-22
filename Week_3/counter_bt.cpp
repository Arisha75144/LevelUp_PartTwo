//
// Created by Arina on 23.12.2022.
//
#include "string.h"
#include "binary_tree.h"
#include <algorithm>

#include <fstream>
#include <iostream>

int main (int argc, char **argv) {// Get the file name from the command line.
    std::ifstream file;
    std::string word, filename;
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;

    }
    filename = argv[1];
    file.open (filename);
    if (!file.is_open ()) {
        std::cout << "Could not open file " << filename << std::endl;
        return 1;
    }
    Binary_Tree dict;
    while (file >> word) {
        auto it = std::remove_if(word.begin(), word.end(), ::ispunct);
        word.erase(it, word.end());
        dict.FirstADd(word);
    }
    string get_word;
    cin>>get_word;
    dict.Search(get_word);

}

