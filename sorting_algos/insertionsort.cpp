#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {3,2,5,1,4,8,4};
    int N = a.size();
    for(int i=1;i<N;++i) 
        for(int j=i;j>0;--j)
            if (a[j]<a[j-1]) swap(a[j],a[j-1]);
            else break;
    
    for(int i=0;i<N;++i) 
        cout << a[i] << " \n"[i==N-1?1:0];
    
}