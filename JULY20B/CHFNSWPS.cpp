#include <bits/stdc++.h>
using namespace std;
#define li long long
#define um unordered_map
#define v vector
void func(){
    li n; cin >> n;
    v<li> a,b;
    um<li,li> cnt;
    li u;
    li s = INT_MAX;
    for(li i=0; i<n; i++){
        cin >> u;
        a.push_back(u);
        cnt[a[i]]++;
        if(a[i]<s)
        s = a[i];
    }
    for(li i=0; i<n; i++){
        cin >> u;
        b.push_back(u);
        cnt[b[i]]++;
        if(b[i]<s)
        s = b[i];
    }
    bool flag = false;
    um<li,li> cnt2;
    for(auto it=cnt.begin(); it!=cnt.end(); it++){
        if(it->second % 2 == 1){
            flag = true;
            break;
        }else{
            cnt2[it->first] = it->second/2;
        }
    }
    if(flag){
        cout << -1 << "\n";
        return;
    }
    um<li,li> temp = cnt2;
    v<li> A,B;
    for(li i=0; i<n; i++){
        if(temp[a[i]])
            temp[a[i]]--;
        else
            A.push_back(a[i]);
    }

    temp = cnt2;
    for(li i=0; i<n; i++){
        if(temp[b[i]])
            temp[b[i]]--;
        else
            B.push_back(b[i]);
    }
    if(A.size() == 0){
        cout << 0 << "\n";
        return;
    }
    if(A.size() != B.size()){
        cout << -1 << "\n";
        return;
    }
    li res = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    for(li i=0; i<A.size(); i++){
        res += min(2*s, min(A[i],B[i]));
    }
    cout << res << "\n";
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t; 
    cin >> t;
    while(t--)
        func();
    return 0;
}
