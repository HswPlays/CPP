#include<bits/stdc++.h>
using namespace std;
Merge(int A[], int m, int B[], int n, int C[])
{
	int i=0, j=0, k=0;
	while(k< m+n)
	{
		if(j==n || A[i]<=B[j])
		{
			C[k]=A[i];
			i++;
			k++;
		}
		if(i==m || A[i]>=B[j])
		{
			C[k]=B[j];
			j++;
			k++;
		}
	}
}
 Mergesort(int A[], int left, int right ,int B[])
{
	int L[20],R[20];
	if (right-left==1)
	{
		B[0]=A[left];
	}
	if(right-left>1)
	{
		int mid=(left+right)/2;
		Mergesort(A, left, mid, L);
		Mergesort(A, mid,right,  R);
		Merge(L, mid-left,R, right-mid,B);
		
	}
}
int main()
{
		int arr[]={12,11,13,5,6,7};
		int arr2[20];
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int p=0;p<n;p++)
	{
		cout<<arr[p]<<" ";
	}
	cout<<endl;
	Mergesort(arr,0,n,arr2);
	for(int p=0;p<n;p++)
	{
		cout<<arr2[p]<<" ";
	}
	
	
}
//Mergesort By Hargun Singh Walia 


