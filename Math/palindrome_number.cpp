// 9. Palindrome Number

    class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }

            string s = to_string(x);
            string rev = s;

            reverse(rev.begin(), rev.end());
            return rev == s;
        }
    };

// time -> O(n) because of the string reversal
// space -> O(n) because of the string conversion and reversal