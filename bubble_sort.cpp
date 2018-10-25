#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;
typedef long long int ll;


void bubblesort(vector<int> &vec)
{
	int n=vec.size();

	for(int k=1;k<n-1;k++)
	{
		int f=0;
		for(int i=0;i<n-k-1;i++)
		{
			if(vec[i+1] < vec[i])
			{
				int temp=vec[i];
				vec[i]=vec[i+1];
				vec[i+1]=temp;
				f=1;
			}
		}
		if(f==0)
			break;
	}
}


int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int a;
	vector<int> vec;
	cout<<"Enter the elements"<<endl;


	for(int i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}

	bubblesort(vec);

	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}

	cout<<endl;
}