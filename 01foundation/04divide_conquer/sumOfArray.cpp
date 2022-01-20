#include<iostream>
using namespace std;

/*
void maxSum(int * aray){
	int sum = 0;
	for(int i = 0 ; i < 10 ; ++i){
		sum += aray[i];
	}
	cout<<sum<<endl;
}

*/
void sumof(int* aray){
	int sum[42];
	int k = 0;

	for(int i  = 0 ; i < 10 ; ++i){
            cout<<"uff\n";
		for(int j = i + 1; j < 10 ; ++j){
			sum[k] = aray[i]+ aray[j];

			cout<<sum[k]<<"  ";
			++k;
		}
	}

	for(int i = 0 ; i< 36 ;++i){
	//	cout<<sum[i]<<"  ";
	}
}
int main()
{
	int aray[10] ={1,2,3,4,5,6,7,8,9,10};
	sumof(aray);
	//maxSum(array);
	return 0;
}
