#include<iostream>
using namespace std;
int binary(int[],int,int,int);
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
	int flag=binary(arr,0,ct-1,n);
	if(flag!=-1)
	cout<<"Found at:"<<flag+1<<endl;
	else
	cout<<"Not found"<<endl;
}
int binary(int arr[],int low,int high,int x)
{
	if(arr[(low+high)/2]==x)
	return (low+high)/2;
	if(low>high)
	return -1;
	if(arr[(low+high)/2]>x)
	binary(arr,low,high-1,x);
	if(arr[(low+high)/2]<x)
	binary(arr,low+1,high,x);
}
