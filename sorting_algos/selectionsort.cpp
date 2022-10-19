#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {3,2,5,1,4,8,4};
    int N = a.size();
    for(int i=0;i<N;++i) {
        for(int j=i+1;j<N;++j){
            if (a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<N;++i) {
        cout << a[i] << " \n"[i==N-1?1:0];
    }
}