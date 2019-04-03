class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		int l = 0, r = letters.size()-1;
		// must l < r; if the condition is l <= r, the drop-dead halt would occur.
		while(l < r){
			int m = (l+r)/2;
			if(letters[m] <= target) l=m+1;
			else r = m;
		}
		if(letters[r] > target) return letters[r];
		return letters[0];
	}
};