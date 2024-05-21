
// Given an integer x, return true if x is a 
// palindrome
// , and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<isPalindrome(121)<<endl;//output true

}

bool isPalindrome(int x) {
        if (x < 0)
            return false;

        if (x == 0)
            return true;

        if (x % 10 == 0)
            return false;

        int n = x;
        int result = 0;
        while (n != 0) {
            int moduli = n % 10;
            result = result * 10 + moduli;
            n /= 10;
        }
        if (x == result)
            return true;

        return false;
    }