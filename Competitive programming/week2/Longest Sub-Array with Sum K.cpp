class Solution
{
public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {

        int sum=0,len=0;
        unordered_map<int,int>m;
        for(int i=0; i<N; i++)
        {
            sum+=A[i];
            if(sum==K) len = i+1;
            if(m.find(sum)==m.end())
            {
                m.insert({sum,i});
            }
            if(m.find(sum-K)!=m.end())
            {
                if(len<i-m[sum-K])
                {
                    len = i-m[sum-K];
                }
            }
        }
        return len;
    }

};
