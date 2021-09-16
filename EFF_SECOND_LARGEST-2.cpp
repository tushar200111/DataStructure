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
	int re=-1;
	int inx=0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]>arr[inx])
		{
			re=inx;
			inx=i;
		}
	    if(arr[i] != arr[inx])
		{
		    if(re==-1 || arr[i]>arr[re])
			re=i;	
		}
	}
	cout<<"Second Maximum Element is:"<<arr[re]<<endl<<"Occuring at:"<<re+1<<endl;
}
