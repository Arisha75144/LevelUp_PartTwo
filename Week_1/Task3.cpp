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
    int singleNumber(vector<int>& nums) {
        vector <int>pod(100);
        for (int i=0;i<nums.size();i++){
            pod[nums[i]]++;
        }
        for (int i=0;i<pod.size();i++){
            if (pod[i]==1){
                return i;
            }
        }
        return 0;
    }
};
int main(){

}