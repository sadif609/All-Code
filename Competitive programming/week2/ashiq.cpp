
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k=0;
        cin>>n;
        char s[n+2][n+2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>s[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0,y=n-1; j<n/2; j++,y--)
            {
                if(s[i][j]!=s[i][y])
                {
                    k++;
                    char ch=
                }

            }
            for(int j=0,y=n-1; j<n/2; j++,y--)
            {
                if(s[j][i]!=s[y][i])
                    k++;
            }


        }
        cout<<k<<endl;
    }
}
