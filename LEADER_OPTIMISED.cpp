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
	int max=arr[n-1];
	cout<<max<<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			cout<<max<<" ";
		}
	}
}
