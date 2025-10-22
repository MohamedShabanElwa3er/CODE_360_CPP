#include<set>
int minimumInsertions(string &str)
{
	int MinInsertion=0;
	int str_size = str.size();
	std::string revstr(str);
	std::reverse(revstr.begin(),revstr.end());
	std::vector<std::vector<int>> Data(str_size+1,std::vector<int>(str_size+1,0));
	for(int i=1;i<=str_size;i++)
	{
		for(int j=1;j<=str_size;j++)
		{
			Data[i][j] = str[i-1]==revstr[j-1] ? (1+Data[i-1][j-1]) : std::max(Data[i][j-1],Data[i-1][j]);
		}
	}
	 
	MinInsertion = str_size - Data[str_size][str_size] ; 
	return MinInsertion;
}
