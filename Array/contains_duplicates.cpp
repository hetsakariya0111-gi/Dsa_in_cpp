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

// time -> O(n) because we are traversing the array once
// space -> O(n) because in worst case we can have all distinct elements in the set