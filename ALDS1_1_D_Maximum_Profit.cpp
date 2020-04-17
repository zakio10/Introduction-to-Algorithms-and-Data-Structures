#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,r[200010],bottom=2000000000,top=0,ans=-9000000000;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> r[i];
    }

    for(int i=0;i<n;i++){
        if(r[i]>=top && i != 0){
            top = r[i];
            ans = max(top - bottom, ans);
        }
        if(r[i]<bottom){
            bottom = r[i];
            top = 0;
        }
    }

    cout << ans << endl;
    return 0;
}