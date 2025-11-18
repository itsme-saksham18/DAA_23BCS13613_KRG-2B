#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum=0, n=nums.size(), count=0;
        unordered_map <int, int> hashMap;
        hashMap[0]=1;
        for(int i=0;i<n;i++)
        {
            currSum+=nums[i];
            if(hashMap.find(currSum-k)!=hashMap.end())
            {
                count+=hashMap[currSum-k];
            }
            hashMap[currSum]++;
        } 
        return count;
    }
};