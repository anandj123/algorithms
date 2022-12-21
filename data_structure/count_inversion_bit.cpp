#include <bits/stdc++.h>
using namespace std;
class BIT{
private:
    vector<int> bit;
    int N;
public:
    BIT(int n) {
        for(int i=0;i<n;++i){
            bit.push_back(0);
        }
        N = n;
    }
    int get_sum(int idx) {
        int sum = 0;
        while(idx >0){
            sum += bit[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }
    void add_value(int idx, int val){
        while(idx < N){
            bit[idx] += val;
            idx += (idx & -idx);
        }
    }
}; 

int main(){
    vector<int> arr = {8,4,3,1};
    int ans = 0;
    int max_element = 0;
    int n = arr.size();
    for(int i=0;i<n;++i) max_element = max(max_element,arr[i]);

    BIT tree(max_element+1); #BIT is 1 indexed. 
    for(int i=n-1;i>=0;--i){
        ans += tree.get_sum(arr[i]-1);
        tree.add_value(arr[i],1);
    }
    cout << "ans is: " << ans << endl;
    assert(ans==6);
}