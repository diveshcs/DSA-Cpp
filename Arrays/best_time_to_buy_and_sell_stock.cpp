// LeetCode 121: Best Time to Buy and Sell Stock
// Topic: Array
// Difficulty: Easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0], maxp=0;
        for(int i=0;i<prices.size();i++){
            int profit = prices[i] - minp;
            if(minp>prices[i]){
                minp=prices[i];
            }
            if(profit>maxp){
                maxp=profit;
            }
        }
        return maxp;
    }
};