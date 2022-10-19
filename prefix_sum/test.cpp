#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {2,4,6,8,3};
    int N = a.size();
    vector<int> ps(N);
    ps[0] = a[0];
    for(int i=1;i<N;++i){
        ps[i] = ps[i-1] + a[i];
    }
    cout << "Original Array" << endl;
    for(int i=0;i<N;++i){
        cout << a[i] << " \n"[(i==N-1?1:0)];
    }
    cout << "Prefix sum array" << endl;
    for(int i=0;i<N;++i) {
        cout << ps[i] << " \n"[i==N-1?1:0];
    }


    cout << "Testing Prefix sum" << endl;
    // Find sum from L to R
    int L,R;
    L = 1, R = 3; // ans = 18
    int ans = ps[R] - (L>0?ps[L-1]:0);
    assert(ans==18); 
    cout << "L : " << L << " R: " << R << " ans: " << ans << endl;

    L =0,R=1;//ans 2
    ans = ps[R]- (L>0?ps[L-1]:0);
    assert(ans=2);
    cout << "L : " << L << " R: " << R << " ans: " << ans << endl;
}