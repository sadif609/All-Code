
#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct point{
ll x,y;
};
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
      ll n;
      cin>>n;
      vector<ll>a(n*2);
      for(ll i=0;i<n*2;i++)
        cin>>a[i];
      sort(a.begin(),a.end());
      vector<point>points(n);
      ll mn=0;
      ll left=0,right=2*n-1;
      for(ll i=0;i<n;i++)
      {
          points[i].x=a[left];
          points[i].y=a[right];
          left++;
          right--;
          if(i>0){
            mn+=abs(points[i].x-points[i-1].x)+abs(points[i].y-points[i-1].y);

          }
      }
      cout<<mn<<endl;
      for(ll i=0;i<n;i++)
        cout<<points[i].x<<" "<<points[i].y<<endl;

    }
}
