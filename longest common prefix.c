Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
char * longestCommonPrefix(char ** strs, int strsSize){
  if (strsSize == 1) return strs[0];
    int len = 0;
    while (1){
        char c = strs[0][len];
        for (int i = 1; i < strsSize; i++){
            if (strs[i][len] != c || !strs[i][len]){
                strs[0][len] = '\0';
                return strs[0];
            }
        }
        len++;
    }

}
