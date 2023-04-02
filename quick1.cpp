#include<bits/stdc++.h>
using namespace std;
swap(int A[], int a, int b)
{
	int temp= A[a];
	A[a]=A[b];
	A[b]=temp;
}
Partition (int A[], int l, int r)
{
    int p = A[r];
    int i = l - 1;
 
    for (int j = l; j <= r- 1; j++)
    {
        if (A[j] <= p)
        {
            i++;
            swap (A,i,j);
        }
    }
    swap (A,i+1,r);
    return (i + 1);
}
quickSort(int A[], int l, int r)
{
    if (l < r) {
        int X = Partition(A, l, r);
        quickSort(A,l,X-1);
        quickSort(A, X + 1, r);
    }
}
int main()
{
  int A[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    quickSort(A, 0, n - 1);
    cout << "Sorted array: \n";
     for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
//Quicksort by Hargun Singh Walia

