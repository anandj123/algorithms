# Notes on some common algorithms that could be used in interviews.

## Count number of substrings starting and ending with 1
https://www.geeksforgeeks.org/given-binary-string-count-number-substrings-start-end-1/

Example:
Input: “00100101”
Output: 3
Explanation: three substrings are “1001”, “100101” and “101”

Input: “1001”
Output: 1
Explanation: one substring “1001”

``` C++
int cnt = 0;
int ans = 0;
for(int i=0;i<N;++i){
    if (a[i] == '1') {
        ans += cnt++;
    }
}
return ans;
```