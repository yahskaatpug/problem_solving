// Given a string s, find the length of the longest 
// substring
//  without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s ="abcabcbb";
    lengthOfLongestSubstring(s);
}

 int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int cnt = 0, res = 0, i=0;
        int tmp = 0;
        unordered_set<int>st;

        while(i<n){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                cnt++;
                i++;
            }
            else{
                if(cnt>res) res = cnt;
                i=tmp+1;
                tmp = i;
                st.clear();
                cnt = 0;
            }            
        }

         return max(cnt,res);
    }