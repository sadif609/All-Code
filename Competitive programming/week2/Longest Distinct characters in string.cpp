int longestSubstrDistinctChars (string s)
{
    // your code here
    vector<bool> v(26,false);
    int i=0,j=0,mx=0;
    while(j<s.length())
    {
        if(v[s[j]-'a']==false)
        {
            v[s[j]-'a']=true;
            j++;
        }
        else
        {
            v[s[i]-'a']=false;
            i++;
        }
        mx=max(mx,j-i);
    }
    return mx;
}
