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
	int inx=n;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]==0)
		{
			for(int j=i;j<inx-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[--inx]=0;
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
