#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,small,j,swap,c;
	cout<<"enter the no of elements  ";
	cin>>n;
	cout<<"enter the elements   ";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		swap=a[i];
		j=i;
		while(j>0&&a[j-1]>swap)
		{
			a[j]=a[j-1];
		
			j--;
		}
		a[j]=swap;
	
		
	}
	cout<<"the elements after sorting   ";
	for(i=0;i<n;i++)
	cout<<a[i]<<"   ";
	return 0;
}
