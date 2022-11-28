//
// Created by Морозова Арина on 28.11.2022.
//
#include <iostream>
#include <set>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        for (int i=0;i<s.size()/2;i++){
            if (s[i]!=s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
}