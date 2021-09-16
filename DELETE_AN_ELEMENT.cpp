#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl<<"DISPLAYING ARRAY"<<endl;
	for(int i = 0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	int k;
	cin>>k;
	int inx;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]==k)
		{
			inx=i;
			break;
		}
	}
	for(int i=inx;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=69999;
	cout<<endl;
	for(int i = 0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
