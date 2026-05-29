// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]= nums[j];
            }
        }
        return i+1;
    }
};

// time -> O(n) because we are traversing the array once
// space -> O(1) because we are using only constant extra space