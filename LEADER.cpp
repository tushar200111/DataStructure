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
	int flag=1;
	for(int i=0;i<n;i++)
	{
		flag=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>=arr[i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<arr[i]<<" ";
	}
}
