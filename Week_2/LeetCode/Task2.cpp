//
// Created by Морозова Арина on 11.12.2022.
//
//
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int c=0;
        vector<int>b;
        for (int i=0;i<nums.size();i++){
            c+=nums[i];
            nums[i]=c;
            b.push_back(nums[i]);

        }
        return b;
    }

};
int main(){

}