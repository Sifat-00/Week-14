#include<bits/stdc++.h>
using namespace std;
int main()
{
     
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int row = n;
        int col = n;
        char ar[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin >> ar[i][j];
            }
        }
 
        for(int i=0;i<row;i+=k)
        {
            for(int j =0;j<col;j+=k)
            {
                cout<<ar[i][j];
            }
            cout<<endl;
            
        }
    }
    return 0;
}