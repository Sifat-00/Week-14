#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int n, k, q;
    cin >> n >> k >> q;

    vector<int>ar(200005,0),x(200005,0);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        ar[a]++;
        ar[b+1]--;
    }
    for(int i=1;i<=200000;i++)
    {
        if(ar[i]<0) continue;
        ar[i] += ar[i-1];
        //x[i] = x[i - 1] + (ar[i] >= k);
    }
    cout << ar[94] - ar[91];
    // for (int i = 0; i < q; i++) 
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     cout << ar[b] - ar[a - 1] << endl;
    // }
    return 0;
}
