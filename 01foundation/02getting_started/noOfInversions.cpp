#include<iostream>
#include<cmath>
using namespace std;
int noOfInversions(int * , int , int);
int countUtility(int * arr , int , int , int);
int countUtility(int *arr , int l , int   m , int r)
{
    int sl = m-l+1;
    int sr = r-m;
    int left[10];
    int right[10];
    for(int i = 0 ; i< sl  ; ++i)
    {
        left[i] = arr[l+i];
    }
    for(int j = 0 ; j < sr ;++j)
    {
        right[j] = arr[m+1+j];
    }
    left[sl] = INT_MAX;
    right[sr] = INT_MAX;
    int   i, j ;
    i = j = 0;
    int count = 0;
    for(int k = l ; k <= r ; ++k)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            ++i;
        }
        else{
            count = count +  sl - i ;
            arr[k] = right[j];
            ++j;
        }
    }
    return count;

}
int noOfInversions(int * arr, int l , int r)
{
    int count = 0;
    if(l<r)
    {
        int temp[40];
        int m = floor((l+r)/2);
        int left = noOfInversions(arr,l,m);
        int right = noOfInversions(arr,m+1,r);
        count = countUtility(arr,l,m,r)+ left + right;
    }
    return count;
}
int main()
{
    int arr[10];
	int i = 0;
	int size;
	int k = 11;
	while(k!= 1)
	{
		arr[i] = k;
		i++;
		--k;
	}
	arr[3]=193;
	arr[1]=999;
	arr[7]=300;
	for(i = 0;i<10;++i)
    {
       printf("%d  ",arr[i]);
    }
    printf("\n");
	size = sizeof(arr)/sizeof(arr[0]);
    cout<<noOfInversions(arr,0,size-1);
    return 0;
}
