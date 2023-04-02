#include<bits/stdc++.h>
using namespace std;
BinarySearch(int arr[], int i, int j, int x)
{
	while(j>=i)
	{
		int mid=(i+j)/2;
		if(arr[mid]==x)
		return mid;
		if(arr[mid]>x)
		return BinarySearch(arr, i, mid-1,x);
		else 
		return BinarySearch(arr,mid+1,j,x);
    }
    return -1;
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x=5;
	int ans= BinarySearch(arr,0,n-1,x);
	if(ans==-1)
	cout<<"error";
	else
	cout<<"Index: "<<ans;
}
//Binary Search by Hargun Singh Walia 


