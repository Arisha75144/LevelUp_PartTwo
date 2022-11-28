//
// Created by Морозова Арина on 28.11.2022.
//
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>dict;
        vector<int>el;
        for (int i=0;i<nums.size();i++){
            dict[nums[i]]++;
        }
        for (auto[key,value]:dict){
            if (value==1){
                el.push_back(key);
            }
        }
        return el;
    }

};
int main(){


}