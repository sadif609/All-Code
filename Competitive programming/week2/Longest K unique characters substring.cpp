
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
    int n=s.length();
    int mx=-1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        while(j<=i &&mp.size()>k )
        {
         mp[s[j]]--;
         if(mp[s[j]]==0)
           mp.erase(s[j]);
          j++;
        }
        if(mp.size()==k)
         mx=max(mx,i-j+1);

    }
    return mx;
    }
};
