#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int N;
    cin >> N;

    map<int,int> mp;
    for(int i=1;i<=N;i++)
    {
        int l,r;
        cin >> l >> r;

        mp[l]++;
        mp[r+1]--;
    }

    ll sum = 0;
    bool flag = false;

    for(auto[key,val]:mp)
    {
        sum += val;
        if(sum>2)
        {
            flag = true;
            break;
        }
    }

    if(!flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;

    return 0;
}