
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	int i1 = m-1;
	int i2 = n-1;
	int c = m+n-1;
	while(c>=0)
	{
		if(i1<0 || i2<0)
		{
			if(i1<0)
			{
				arr1[c]=arr2[i2];
				i2--;
			}
			else
			{
				arr1[c]=arr1[i1];
				i1--;
			}
			c--;
			continue;
		}
		if(arr1[i1]>arr2[i2])
		{
		  //  cout<<" arr1_i1 "<<arr1[i1]<<" , "<<" i1 "<<i1<<" , "<<" arr2_i2 "<<arr2[i2]<<" , "<<" i2 "<<i2<<" \n ";
			arr1[c]=arr1[i1];
			i1--;
		}
		else
		{
			arr1[c]=arr2[i2];
			i2--;
		}
		c--;
	}
	return arr1;
		
}
