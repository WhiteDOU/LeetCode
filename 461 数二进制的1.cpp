class Solution {
public:
	int hammingDistance(int x, int y) {
		int r = 0;
		int z = x ^y;
		while (z > 0)
		{
			if ((z & 1) == 1)
				++r;
			z=z >> 1;
		}
		return r;
	
		
	}
};