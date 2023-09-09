
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
bool prime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int div(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}
void solve()
{

    int a,b;
    cin>>a>>b;
    bool f=true;
    if(a==b && (a==1 || prime(a)))
        f = false;
    else if((a==1 && (b==2 || b==3)) ||(a==2 && b==3))
        f=false;
    if(!f)
        cout<<-1;
    else{
        if(a==b)
        {
             if(a%2==0)
            cout<<a/2<<" "<<a/2;
        else{
                int x=div(a);
        cout<<x<<" "<<a-x;

        }

        }
        else{
            if(a%2!=0 && a!=1)
                a++;
            else if (a==1)
                a+=3;
            else if (a==2)
                a+=2;
            cout<<a/2<<" "<<a/2;
        }

    }
    cout<<endl;




}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
}
