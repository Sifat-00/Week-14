#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--)
    {
        priority_queue<int> pr;
        int sum = 0;
        for(int i=1;i<=3;i++)
        {
            int x;
            cin >> x;
            sum+=x;
            if(x>0)
            pr.push(x);
        }

        if(sum%2==1)
        {
            cout << -1 << endl;
            continue;
        }
        int cnt = 0;
        while(pr.size() > 1)
        {
            int val = pr.top();
            pr.pop();
            int val2 = pr.top();
            pr.pop();
            cnt++;
            val--;
            val2--;
             if(val>0) pr.push(val);
            if(val2 >0) pr.push(val2);
        }
        cout << cnt << endl;
    }

    return 0;
}