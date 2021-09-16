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
	//ASSUMING ASCENDING SORTED
	int fa=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
		   fa=0;
		   break;
		}
	}
	//ASSUMING DESSCENDING SORTED
	int fd=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
		   fd=0;
		   break;
		}
	}
	if(fa  || fd)
	cout<<"SORTED"<<endl;
	else
	cout<<"NOT SORTED";
}
