// LeetCode 3: Longest Substring Without Repeating Characters
// Topic: String, Sliding Window
// Difficulty: Medium

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int maxlen = 0;
        for(int right = 0; right < s.size(); right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            if(maxlen < st.size()){
                maxlen = st.size();
            }
        }
        return maxlen;
    }
};