
int longestSubarrayWithSumK(vector < int > a, long long k)
{

    int n = a.size(),mx = 0, i = 0, j= -1;
    long long s=0;



    while (i < n)
    {


        while ((j + 1 < n) && (s + a[j + 1] <= k))
        {
            s += a[j + 1];
            j++;
        }


        if (s == k)
        {
            mx = max(mx, j - i + 1);
        }


        s -= a[i];
        i++;
    }

    return mx;
}
