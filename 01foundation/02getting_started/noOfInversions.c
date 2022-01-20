#include<iostream>
using namespace std;
int noOfInversions(int * , int );
int countUtility(int * arr , int , int , int );
int countUtility(int * arr , int l, int m, int r)
{
    int i = l;
    int count = 0;
    while(i!= r)
    {
        for(int j = r ; j >= i+1; ++j)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;
}
int noOfInversions(int * arr, int l , int r)
{
    if(l<r)
    {
        int count = 0;
        int m = (l+r)/2;
        noOfInversions(arr,l,m);
        noOfInversions(arr,m+1,r);
        count = countUtility(arr,l,m,r);
    }
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
    cout<<noOfInversions(int arr,0,size);
    return 0;
}
