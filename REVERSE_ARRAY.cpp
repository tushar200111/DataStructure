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
	int arev[n];
	for(int i=0;i<n;i++)
	{
		arev[n-1-i]=arr[i];
	}
	for(int i=0;i<n;i++)
	cout<<arev[i]<<" ";
}
