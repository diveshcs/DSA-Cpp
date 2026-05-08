// LeetCode 347: Top K Frequent Elements
// Topic: Array, Hashmap approach
// Difficulty: Medium

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> vec;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
        }
        for(auto it : mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(), vec.end(), cmp);
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
