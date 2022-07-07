int solve(vector<int> &A, int B)
{
    unordered_map<int,int>freq;
    int cnt = 0;
    int xor=0;
    for(auto it:A)
    {
        xor=xor^it;
        if(xor==B)
        {
            cnt++;
        }
        if(freq.find(xor^B)!=freq.end())
        {
            cnt+=freq[xor^B];
        }
        freq[xor]+=1;
    }
    return cnt;
}
