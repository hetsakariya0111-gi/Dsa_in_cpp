// 53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curr = 0;
        for(int i = 0; i<nums.size(); i++){
            curr += nums[i];
            maxSum = max(maxSum, curr);
            if(curr < 0){
                curr = 0;
            }
        }
        return maxSum;
    }
};

// time -> O(n) because we are traversing the array once
// space -> O(1) because we are using only constant extra space