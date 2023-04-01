#include<iostream>
using namespace std;
int main()
{
	int a[20],b,n,i,flag=0;
	cout<<"enter the no of elements  ";
	cin>>n;
	cout<<"enter the elements   ";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter thge element to be searched  ";
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			cout<<"element found   ";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"not found   ";
	}
	return 0;
}
