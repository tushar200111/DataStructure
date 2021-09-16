#include<iostream>
using namespace std;
int binary(int[],int,int);
int main()
{
	cout<<"Enter The Number To Be searched"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the number of elements:"<<endl;
	int ct;
	cin>>ct;
	int arr[ct];
	for(int i=0;i<ct;i++)
	{
		cin>>arr[i];
	}
	int flag=binary(arr,n,ct);
	if(flag!=-1)
	cout<<"Found at:"<<flag+1<<endl;
	else
	cout<<"Not found"<<endl;
}
int binary(int arr[],int n,int c)
{
	int low=0;
	int high=c-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==n)
		return mid;
		else if(arr[mid]>n)
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
	
}
