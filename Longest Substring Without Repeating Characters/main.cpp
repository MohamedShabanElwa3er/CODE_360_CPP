#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    std::vector<char> seen;
    int cnt=0;
    int max_cnt=0;
    for(int i=0;i<input.size();i++)
    {
        if(std::count(seen.begin(),seen.end(),input[i])==0)
        {
            seen.push_back(input[i]);
            cnt++;
        }
        else
        {
            seen.erase(seen.begin(),std::find(seen.begin(),seen.end(),input[i])+1);
            max_cnt=std::max(max_cnt,cnt);
            seen.push_back(input[i]);
            cnt=seen.size();
        }
    }
    return std::max(max_cnt,cnt);
}
