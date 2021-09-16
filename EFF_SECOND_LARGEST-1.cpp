#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	int max=arr[0];
	int inx=0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			inx=i;
		}
	}
	int res=-1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=max)
		{
			if(res==-1)
			res=i;
			else
			{
				if(arr[i]>arr[res])
				res=i;
			}
		}
	}
	cout<<"Second Maximum Element is:"<<arr[res]<<endl<<"Occuring at:"<<res+1<<endl;
}
