//maxium sub array sum

#include<iostream>
using namespace std;

//kadane's force approch(most optimised way)
//+ - = -
//reset to 0 when sum shows negative value



class Solution {
public:
    int maxSubArray(vector<int>& nums)
     {
        int currsum=0,maxsum=0;

        for(int val : nums)
        {
            currsum +=val;
            maxsum=max(currsum,maxsum);
            if(currsum<0)
            currsum=0;
        }
        return maxsum;

    }
};
