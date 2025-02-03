#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int n;
    cin >> n;
    map<int,int>mp;
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        mp[l]++;
        mp[r+1]--;
    }
    int cnt = 0;
    int mx = 0;
    for(auto x : mp)
    {
        cnt+=x.second;
        if(cnt>mx) mx = cnt;
    }
    cout << mx << endl;
    return 0;
}