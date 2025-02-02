#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long

#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
template <typename T> using pbds = tree<T, null_type, less<T> , rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    Fast_Io;


    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        pbds<int> p;
        ll ans = 0;
        for(int i=n-1;i>=0;i--)
        {

            p.insert(v[i]);
            ans+=p.order_of_key(v[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}