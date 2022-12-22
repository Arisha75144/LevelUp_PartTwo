//
// Created by Arina on 18.12.2022.
//

#ifndef LEVELUP_PARTTWO_BINARY_TREE_H
#define LEVELUP_PARTTWO_BINARY_TREE_H
#include <iostream>
#include <string>

using namespace std;


struct Node {
    std::string word;
    int count;
    Node *left;
    Node *right;
    Node(std::string word) : word(word), count(1), left(nullptr), right(nullptr) {}
};

class Binary_Tree{
public:
    void Add (Node * node,std::string word);
    void FirstADd(std::string word);
    int Find(Node* node, string &str);
    int Search(std::string &str);
    void Delete_BinaryTree(Node* node);

};
#endif //LEVELUP_PARTTWO_BINARY_TREE_H
