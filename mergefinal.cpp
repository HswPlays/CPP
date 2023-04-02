#include<bits/stdc++.h>
using namespace std;
merge(int A[],int m, int B[], int n, int C[])
{
	int i=0, j=0, k=0;
	while(k<m+n)
	{
		if(i==m || B[j]<A[i])
		{
			C[k]=B[j];
			k++;
			j++;
		}
		if(j==n || A[i]<=B[j])
		{
			C[k]=A[i];
			k++;
			i++;
		}
	}
}
mergesort(int A[], int left, int right, int B[])
{
	int L[50], R[50];
	if(right-left==1)
	{
		B[0]=A[left];
	}
	if(right-left>1)
	{
		int mid=(left+right)/2;
		mergesort(A, left, mid, L);
		mergesort(A, mid, right, R);
		merge(L,mid-left,R,right-mid,B);
	}
}
int main()
{
		int arr[]={12,11,13,5,6,7};
		int arr2[100];
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int p=0;p<n;p++)
	{
		cout<<arr[p]<<" ";
	}
	cout<<endl;
	mergesort(arr,0,n,arr2);
	for(int p=0;p<n;p++)
	{
		cout<<arr2[p]<<" ";
	}
}
