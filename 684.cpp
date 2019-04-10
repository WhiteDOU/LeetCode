
class Solution {
public:
	int root(int arr[], int i){
		while(i!=arr[i]){
			i=arr[i];
			arr[i]=arr[arr[i]];
		}
		return i;
	}

	void initialize(int arr[], int size[], int n){
		for(int i=0;i<n;i++){
			arr[i]=i;
			size[i]=1;
		}
	}

	bool find(int a, int b, int arr[]){
		if(root(arr,a)==root(arr,b)){
			return true;
		}
		return false;
	}

	void unione(int a, int b, int arr[], int size[]){
		int roota=root(arr,a);
		int rootb=root(arr,b);
		if(size[roota]>size[rootb]){
			size[roota]+=size[rootb];
			arr[rootb]=roota;
		}else{
			size[rootb]+=size[roota];
			arr[roota]=rootb;
		}
	}

	vector<int> findRedundantConnection(vector<vector<int>>& edges) {
		int max=0;
		for(int i=0;i<edges.size();i++){
			if(max<edges[i][0]){
				max=edges[i][0];
			}
			if(max<edges[i][1])
				max=edges[i][1];
		}
		int arr[max];
		int size[max];
		initialize(arr,size,max);
		vector<int> temp;
		for(int i=0;i<edges.size();i++){
			if(find(edges[i][0]-1,edges[i][1]-1,arr)==false){
				unione(edges[i][0]-1,edges[i][1]-1,arr,size);
			}else{
				temp=edges[i];
			}
		}
		return temp;
	}
};