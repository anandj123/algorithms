# Notes on some common algorithms that could be used in interviews.

## Count number of substrings starting and ending with 1
https://www.geeksforgeeks.org/given-binary-string-count-number-substrings-start-end-1/

```
Example:
Input: “00100101”
Output: 3
Explanation: three substrings are “1001”, “100101” and “101”

Input: “1001”
Output: 1
Explanation: one substring “1001”
```

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

### Notes
* The first thing to note is that if we just count number of ones we could usin nCr (where n = number of ones and r = 2 we will get the same answer.
* Here we are doing interactive calculation. 
* Observe that when we see first '1' our count = 0, so ans = 0 and then increment count = 1.
* when we see the second '1' we have count = 1, so we know we had one '1' before and we are currently holding a '1'
* so we can form one substring.
* for the next '1' we should have 2 '1' in the list and then 3rd '1' in the hand. 
* This iterative approach of counting pairs is very powerful for other complex problems.