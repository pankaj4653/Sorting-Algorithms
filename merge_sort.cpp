#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long int ll;


void merge(int left[],int right[],int arr[]);

void mergesort(int arr[])
{
	int n=sizeof(arr)/sizeof(arr[0]);
	if(n<2)
		return;
	
	int mid=n/2;

	int left[mid];
	int right[n-mid];

	for(int i=0;i<mid;i++)
	{
		left[i]=arr[i];
	}

	for(int j=mid;j<n;j++)
	{
		right[j-mid]=arr[j];
	}

	mergesort(left);
	mergesort(right);

	merge(left,right,arr);
}


void merge(int left[],int right[],int arr[])
{
	int i,j,k;
	i=j=k=0;

	int nl=sizeof(left)/sizeof(arr[0]);
	int nr=sizeof(right)/sizeof(arr[0]);

	while(i<nl && j<nr)
	{
		if(left[i] <= right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
		k++;
	}

	while(i<nl)
	{
		arr[k]=left[i];
		i++;
		k++;
	}

	while(j<nr)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}


int main()
{
	int n;
	cout<<"Enter the number of elements in the array  :  ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in the array"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	mergesort(arr);

	cout<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}