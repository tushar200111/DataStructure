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
	//DELETING THE MAXIMUM ELEMENT
	for(int i=inx;i<n-1;i++)
	arr[i]=arr[i+1];
	inx=0;
	//FINDING LARGEST ELEMENT IN RESIDUAL ARRAY
    max=arr[0];
	for(int i = 0;i<n-1;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			inx=i;
		}
	}
	
	cout<<"Second Maximum Element is:"<<arr[inx]<<endl<<"Occuring at:"<<inx+1<<endl;
}
