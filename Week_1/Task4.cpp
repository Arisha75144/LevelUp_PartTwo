//
// Created by Морозова Арина on 02.12.2022.
//
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool buddyStrings(string a, string goal) {
        int first = -1, second = -1;
        if (goal.size() != a.size()) {
            return false;
        }
        if (a==goal){
            unordered_map<char,int> check;
            for(int i=0;i<a.length();i++)
            {
                if((check.find(a[i])==check.end()))
                    check[a[i]]=0;
                else
                    return true;
            }
        }
        for (int i = 0; i < goal.size(); i++) {
            if (goal[i] != a[i] && first == -1) {
                first = i;
            } else if (goal[i] != a[i] && second == -1) {
                second = i;
            } else {
                return false;
            }
        }
        return second !=-1 && first!=-1 ;
    }
};
int main(){

}
