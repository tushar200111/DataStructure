#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element"<<endl;
		cin>>arr[i];
	}
	cout<<"Original Array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	for(int i=0;i<n-1;i++)
	{
		int t=arr[i];
		for(int j=i+1;j<n;j++)
		{
			while(t==arr[j])
			{
				for(int k=j;k<n-1;k++)
				arr[k]=arr[k+1];
				n=n-1;
			}
			
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
