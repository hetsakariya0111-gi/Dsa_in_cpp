// 2. Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {

        //variable declaration
        int left = 0;
        int right = s.size()-1;

        //loop
        while(left<right){

            //stl algorithm
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};

// time -> O(n) because we are traversing the string once
// space -> O(1) because we are not using any extra data structure    