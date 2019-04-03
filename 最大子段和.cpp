#include <vector>

using namespace std;
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int n=nums.size();
		int ans=nums[0];
		int* dp=new int[n];
		dp[0]=nums[0];
		for (int i=1;i<n;i++) {
			dp[i]=max(dp[i-1]+nums[i],nums[i]);
		}
		for (int i=0;i<n;i++) {
			ans=max(ans, dp[i]);
		
		}
		delete [] dp;
		return ans;
	}
};