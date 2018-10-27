#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
typedef long long int ll;

int partition(int arr[],int s,int e);

void qsort(int arr[],int s,int e)
{
	if(s>=e)
		return;

	int p=partition(arr,s,e);

	qsort(arr,s,p-1);
	qsort(arr,p+1,e);
}


int partition(int arr[],int s,int e)
{
	int p=s;
	int pivot=arr[e];

	for(int i=s;i<e;i++)
	{
		if(arr[i]<=pivot)
		{
			int temp=arr[i];
			arr[i]=arr[p];
			arr[p]=temp;
			p++;
		}
	}
	arr[e]=arr[p];
	arr[p]=pivot;

	return p;
}

int main()
{
	int n;
	
	cout<<"Enter the number of elements : ";
	cin>>n;
	int arr[n];

	cout<<"Enter the elements"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	qsort(arr,0,n-1);

	cout<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}


