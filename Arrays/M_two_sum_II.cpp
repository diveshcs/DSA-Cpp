// LeetCode 3: Two Sum II :
// Topic: String, Sliding Window
// Difficulty: Medium

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        while(numbers[right]+numbers[left] != target){
            if(numbers[right]+numbers[left] > target){
                right--;
            }else{
                left++;
            }
        }
        return {left+1,right+1};
    }
};