class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.size()==0)
			return 0;
		int length = s.size();
		int* dp = new int[length];
		dp[0] = 1;
		for (int i = 1; i <length ; ++i)
		{
			int num = 0;
			int flag = 0;
			int times = dp[i-1];
			for (int j = i - 1; j >=0 && times>0   ; --j,times--)
			{
				if (s[i] == s[j])
				{
					num = i-j;
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				dp[i] = dp[i-1] + 1;
			} else if (flag == 1)
			{
				dp[i] = num;

			}
		}

		int ans = 0;
		for (int i = 0; i < length; ++i)
		{
			ans = max(ans , dp[i]);
			cout<<dp[i];
		}
		return ans;


	}
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		int map[256]={0};
		unsigned int i;
		unsigned int j=0;
		int count=0;
		for(i=0;i<s.length();i++)
		{
		//	memset(map,0,sizeof(map));
			if(map[s[i]-' ']==0)
				map[s[i]-' ']=1;
			else
			{
				count = max(count,(int)(i-j));
				//memset(map,0,sizeof(map));
				while(s[j]!=s[i])
				{
					map[s[j]-' ']=0;
					//memset(map,0,sizeof(map));
					j++;
				}
				j++;
			}//考虑重复情况
		}
		count = max(count,(int)(s.length()-j));//考虑不重复情况类似abcd
		return count;
	}
};