// LeetCode 128: Longest Consecutive Sequence
// Topic: Array, Hashing approach
// Difficulty: Medium

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int longest = 0;
        for(auto it : st){
            if (st.count(it - 1) == 0){
                int cnt = 1;
                int curr = it;
                while(st.count(curr+1)){
                    curr++;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};