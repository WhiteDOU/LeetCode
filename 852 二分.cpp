class Solution
{
public:
	int peakIndexInMountainArray(vector<int> &A)
	{
		int left = 0;
		int right = A.size() - 1;
		while (left <= right)
		{
			int mid = (left + right) >> 1;
			if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
				return mid;
			else if (A[mid] > A[mid - 1] && A[mid] < A[mid + 1])
				left = mid + 1;
			else if (A[mid] < A[mid - 1] && A[mid] > A[mid + 1])
				right = mid - 1;
		}
		return A[(left + right) >> 1];
	}
};
