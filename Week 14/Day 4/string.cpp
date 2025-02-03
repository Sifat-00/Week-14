#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    Fast_Io;

    int N;
    cin >> N;
    string word;
    cin >> word;

    string ans = word;

    reverse(ans.begin(),ans.end());

    map<char,vector<int>> val_s,val_r;
    for(int i=0;i<N;i++)
    {
        val_s[word[i]].push_back(i);
        val_r[ans[i]].push_back(i);
    }

    vector<int> prmtion(N);
    for(char ch='a';ch<='z';ch++)
    {
        for(int i=0;i<val_s[ch].size();i++)
        {
            prmtion[val_r[ch][i]] = val_s[ch][i];
        }
    }

    pbds<int> mp;
    ll cnt = 0;

    for(int i=N-1;i>=0;i--)
    {
        cnt += mp.order_of_key(prmtion[i]);
        mp.insert(prmtion[i]);
    }

   cout << cnt << endl;


    return 0;
}