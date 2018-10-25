#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>

using namespace std;
typedef long long int ll;


void  selectionsort(vector<int> &vec)
{
	int n=vec.size();
	int s;

	for(int i=0;i<n-1;i++)
	{
		int mini=vec[i];
		int temp;
		for(int j=i;j<n;j++)
		{
			if(vec[j]<mini)
			{
				mini=vec[j];
				temp=j;
			}

			s=vec[temp];
			vec[temp]=vec[i];
			vec[i]=s;
		}
	}
}


int main()
{
	int n;
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	vector<int> vec;
	int a;

	for(int i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}

	selectionsort(vec);
	cout<<endl;

	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}

	return 0;
}


