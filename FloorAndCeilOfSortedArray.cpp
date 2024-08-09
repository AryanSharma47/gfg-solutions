//Simple Approach
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int fl=-1,cl=-1;

	int low = 0,high = n-1;

	while(low <= high)
	{
		int mid = (low+high)/2;

		if(a[mid] <= x)
		{
			fl = a[mid];
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	
	low = 0,high = n-1;
	while(low <= high)
	{
		int mid = (low+high)/2;

		if(a[mid] >= x)
		{
			cl = a[mid];
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}

	return {fl,cl};
}