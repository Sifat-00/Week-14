#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'

bool consonant(char x)
{
    if(x == 'c' || x== 'd' || x== 'b') return true;
    else return false;
}

int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string ar;
        cin >> ar;
        vector<string>st;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(ans.empty()) ans+=ar[i];
            else
            {
                if(ans.back() == '.' || i==n-1)
                {
                     ans+=ar[i];
                     continue;
                }
                if(consonant(ans.back()) && !consonant(ar[i]))
                {
                    ans+=ar[i];
                }
                else
                {
                    if(!consonant(ans.back()) && consonant(ar[i+1]))
                    {
                       
                        ans+=ar[i];
                    }
                    else
                    {
                        ans+='.';
                        ans+=ar[i];
                    }
                }
            }
        }   
        cout << ans << endl;
    }

    return 0;
}
