#include<iostream>
#include<climits>
using namespace std;

int unique(int ary[], int size)
{
	int ans = 0;
	for(int i=0; i<size; i++)
	{
		ans ^= ary[i];
	}
	return ans;

}

int main()
{
	int ary[100];
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element : "<<i+1<<" : ";
		cin>>ary[i];
	}
	cout<<endl;
	
	int uniqueElement = unique(ary, n);
	cout<<"\nUnique element in array is : "<<uniqueElement;
	
}

