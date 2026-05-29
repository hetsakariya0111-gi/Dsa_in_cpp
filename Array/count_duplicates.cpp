// 217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int value : nums){
          if(s.count(value)){
            return true;
          }
          s.insert(value);
        }
        return false;
    }
};