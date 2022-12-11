//
// Created by Морозова Арина on 11.12.2022.
//
//Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ...,
// (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
//
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(), nums.end());
        for (int i=0;i<nums.size();i+=2){
            if (nums[i]<nums[i+1]){
                sum+=nums[i];
            }
            else{
                sum+=nums[i+1];
            }
        }
        return sum;
    }
};
int main(){

}