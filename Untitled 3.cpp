#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
}class compare {
	public:
	bool operator()(pair<int, int> a, pair<int, int> b) {
		return a.first > b.first;
	}
};

class Solution {
public:
	int networkDelayTime(vector<vector<int>>& times, int N, int K) {
		
		// Approach 1: bellman ford O(V*E)
//         vector<int> res(N + 1, INT_MAX);
//         res[K] = 0;
		
//         for(int i = 0;i < N;i++) {
//             for(auto edge: times) {
//                 int source = edge[0];
//                 int dest = edge[1];
//                 int wt = edge[2];
				
//                 if(res[source]!=INT_MAX && res[dest] > res[source] + wt) {
//                     res[dest] = res[source] + wt;
//                 }
//             }
//         }
		
//         int time = 0;
		
//         for(int i = 1;i < res.size();i++) {
//             if(res[i] == INT_MAX)
//                 return -1;
//             time = max(time, res[i]);
//         }
		
//         return time;
		
		// Dijstra's algorithm O(E + VlogV)  ???
		
		map<int, vector<pair<int, int>>> adj_list;
		for(auto edge: times) {
			adj_list[edge[0]].push_back(pair<int, int>({edge[1], edge[2]}));
		}
		
		vector<int> res(N + 1, INT_MAX);
		priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
		pq.push(pair<int, int>({0, K}));
		
		while(!pq.empty()) {
			auto curr = pq.top();
			pq.pop();
			if(res[curr.second]!=INT_MAX) {
				continue;
			}
			res[curr.second] = curr.first;
			for(auto edges: adj_list[curr.second]) {
				pq.push(pair<int, int>({curr.first + edges.second, edges.first}));
			}
		}
		
		int time = 0;
		
		for(int i = 1;i < res.size();i++) {
			if(res[i] == INT_MAX)
				return -1;
			time = max(time, res[i]);
		}
		
		return time;
	}
};