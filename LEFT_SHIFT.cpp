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
	int shift;
	cout<<"Enter left sfift places"<<endl;
	cin>>shift;
	for(int i=1;i<=shift;i++)
	{
		int temp=arr[0];
		for(int j=0;j<n-1;j++)
		arr[j]=arr[j+1];
		arr[n-1]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}//Theta(nd) Aux(1) extra spaceN
