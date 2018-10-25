#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>

using namespace std;
typedef long long int ll;

void insertionsort(vector<int> &vec)
{
	int n=vec.size();
	
	for(int i=0;i<n;i++)
	{
		int val=vec[i];
		int j=i;
		while(j>0 && val < vec[j-1])
		{
			vec[j]=vec[j-1];
			j--;
		}
		vec[j]=val;
	}
}

int main()
{
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;

	vector<int> vec;
	int a;

	cout<<"Enter the elements"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}

	insertionsort(vec);

	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

