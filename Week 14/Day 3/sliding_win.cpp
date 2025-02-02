#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long int
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T> , rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    pbds<pair<int,int>> p;

    int x = ceil(k/2.0);
    x--;
    int l=0,r=0;

    while(r<n)
    {
        p.insert({v[r],r});
        if(r-l+1==k)
        {
            auto it = p.find_by_order(x);
            cout<<it->first<<" ";
        }
        else if(r-l+1>k)
        {
           while(r-l+1>k)
           {
                p.erase({v[l],l});
                l++;
            }
            if(r-l+1==k)
            {
                auto it = p.find_by_order(x);
                cout<<it->first<<" ";
            }
        }
        r++;
    }
    return 0;
}