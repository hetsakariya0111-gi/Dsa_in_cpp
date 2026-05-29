// 136. Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i = 0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }

        // for(auto it : mp){
        //     if(it.second == 1){
        //         return it.first;
        //     }
        // }
        // return -1;

        int result = 0;
        for(int i = 0; i<nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};

// time -> O(n) because we are traversing the array once
// space -> O(1) because we are using only constant extra space