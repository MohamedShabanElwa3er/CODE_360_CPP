#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{

		for(auto &it : arr)
		{
			if(std::count(arr.begin(),arr.end(),it) >=2)
			{
				return it;
			}
		}
	return false;
}
