// Ashiqul Islam sadif

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N  INT_MAX
#define     ss   string
#define     vv   vector
#define     vi   vector<int>
#define     vb   vector<bool>
#define     vs    vector<string>
#define     vl    vector<ll>
#define     si   set<int>
#define     sl   set<ll>
#define     ull   unsigned long long int
#define     ui    unsigned int
#define     pp    pair
#define     pb    push_back
// full array
#define fr(i, s, n) for (ll i = s; i < n; i++)
#define     all(x)  x.begin(),x.end()
#define     all_0(x)    memset(x,0,sizeof(x))
#define     all_neg(x)  memset(x,-1,sizeof(x))
#define     all_1(x)   memset(x,1,sizeof(x))
// print option
#define     YES                             printf("YES\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              cout<<"\n"
#define INF 1000000000
#define mod 1000000007
const double PI = 3.141592653589793238460;
vv<int>dv;

void div(int n)
{

    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            dv.push_back(i);
        }
        if(n%i!=i)
        {
            dv.push_back(n/i);
        }
    }
}
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Function to query and get result
int makeQuery(const ss &str)
{
    cout << "? " << str << endl;
    int result;
    cin >> result;
    return result;
}


void updateAnswer(ss &opt1, ss &opt2, ss &ans, int &flag)
{
    if (makeQuery(opt1))
        ans = opt1;
    else if (makeQuery(opt2))
        ans = opt2;
    else
        flag = 1;
}


void handleQuery(ss &currentAns, int &reverseFlag)
{
    ss opt1 = currentAns + "0";
    ss opt2 = currentAns + "1";
    updateAnswer(opt1, opt2, currentAns, reverseFlag);
}


void processGuesses(ss &partialAns, int totalLen)
{
    ss currentAns = partialAns;
    int reverseFlag = 0;
fr(i,2,totalLen)
    {
        if (!reverseFlag)
        {
            handleQuery(currentAns, reverseFlag);
        }

        if (reverseFlag)
        {
            ss revOpt1 = "0" + currentAns;
            ss revOpt2 = "1" + currentAns;
            if (makeQuery(revOpt1))
                currentAns = revOpt1;
            else
                currentAns = revOpt2;
        }
    }

    cout << "! " << currentAns << endl;
}

void solve()
{
   int len;
        cin >> len;

        if (len == 1)
        {
            if (makeQuery("1"))
                cout << "! 1" << endl;
            else
                cout << "! 0" << endl;
            continue;
        }

        if (makeQuery("00"))
        {
            ss start = "00";
            processGuesses(start, len);
        }
        else if (makeQuery("01"))
        {
            ss start = "01";
            processGuesses(start, len);
        }
        else if (makeQuery("10"))
        {
            ss start = "10";
            processGuesses(start, len);
        }
        else
        {
            ss result(len, '1');
            cout << "! " << result << endl;
        }
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

