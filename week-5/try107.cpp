#define ll long long
#define N  INT_MAX
using namespace std;

int main()
{


    int t;
    cin>>t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = min(n % k, k - n % k);
        cout << x * (n - x) << endl;
    }

    return 0;
}
