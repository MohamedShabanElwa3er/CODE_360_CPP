#include<algorithm>
int search(vector<int> &nums, int target) 
{
    auto it = std::find(nums.begin(),nums.end(),target);
    
    return it != nums.end() ? std::distance(nums.begin(),it) : -1;
}
