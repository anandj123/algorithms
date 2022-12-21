#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "00100101";
    int N = a.size();
    int cnt = 0;
    int ans = 0;
    
    for(int i=0;i<N;++i){
        if (a[i] == '1') ans += cnt++;
    }
    cout << ans << endl;
}

