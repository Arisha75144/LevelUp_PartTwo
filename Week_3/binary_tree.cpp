//
// Created by Arina on 18.12.2022.
//

#include "binary_tree.h"
#include <iostream>

using namespace std;
#include <string>
#include <algorithm>



Node *rt;

void  Binary_Tree::Add(Node * node,std::string word ){
    if (word==node->word){
        node->count++;
    }
    else if (word < node->word){
        if (node->left== nullptr){
            node->left=new Node (word);
        }
        else{
            Add(node->left,word);
        }
    }
    else if (word >node->word){
        if (node->right== nullptr){
            node->right=new Node (word);
        }
        else {
            Add(node->right,word);
        }
    }

}

void Binary_Tree::FirstADd(std::string word){
    if (rt == nullptr){
        rt = new Node(word);
    }
    else {
        Add(rt,word);
    }
}


int  Binary_Tree::Find(Node* node, string &str) {
    if (node->word==str) {
        return node->count;
    }
    else if (node->word > str)
        Find(node->right, str);
    else
        Find(node->left, str);
}

int  Binary_Tree::Search(std::string &str) {
    if (rt == nullptr) {
        return 0;

    } else {
        return Find(rt, str);
    }

}



void Binary_Tree::Delete_BinaryTree(Node* node) {
    if (node != nullptr) {
        Delete_BinaryTree(node->left);
        Delete_BinaryTree(node->right);
        delete node;

    }

}







