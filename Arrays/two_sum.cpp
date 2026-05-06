// LeetCode 1: Two Sum
// Topic: Array, Hashing
// Difficulty: Easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];
            if(mp.count(comp)!=0){
                return {mp[comp],i};
            }else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};
