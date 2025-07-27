#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string first = strs.front();
    string last = strs.back();
    string ans = "";

    for(int i = 0; i < first.size() && i < last.size(); i++) {
        if(first[i] == last[i])
            ans += first[i];
        else
            break;
    }
    return ans;
}
};

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 
// Constraints:
// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters if it is non-empty.
