class Solution
{
public:
	string reorganizeString(string S)
	{
		string res = "";
		unordered_map<char, int> m;
		priority_queue<pair<int, char >> Q;
		for (auto c :S)
		{
		   m[c]++;
		}
		for(auto a :m)
		{
			if (a.second>(S.size()+1)/2)
				return "";
			Q.push({a.second,a.first});
		}
		while (Q.size() >= 2)
		{
			auto t1 = Q.top();
			Q.pop();
			auto t2 = Q.top();
			Q.pop();
			res = res + t1.second;
			res = res + t2.second;
			if (--t1.first > 0)
				Q.push(t1);
			if (--t2.first > 0)
				Q.push(t2);
		}
		if (Q.size() > 0)
			res = res + Q.top().second;
		return res;
	}
};

//xiu
class Solution {
	public String reorganizeString(String S) {
		int n = S.length();
		int[] vis = new int[26];
		StringBuilder str =new StringBuilder(S);
 
		for(int i = 0; i< n ;i++) vis[S.charAt(i)-'a']+=100;
		for(int i=0;i<26;i++) vis[i]+=i;
		Arrays.sort(vis); // 从小到大
		char[] res = new char[n];
//        Arrays.fill(res,'#');
		int t = 1; //因为是从小到大，所以先从第二位开始放
		for(int i=0;i<26;i++)
		{
			int cnt = vis[i]/100 ;
			if( cnt > (n+1)/2) return "";
			for(int j=0;j<cnt;j++)
			{
				res[t] = (char)('a'+vis[i]%100);
				t+=2;
				if(t>=n) t=0;
			}
		}
		return String.valueOf(res);
	}
}
