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
	for(i=0;i<n-1;i++)
	{
		small=a[i];
		for(j=i;j<n;j++)
		{
			if(a[j]<small)
			{
				small=a[j];
				c=j;
			}
		}
		swap=a[i];
		a[i]=a[c];
		a[c]=swap;
		
	}
	cout<<"the elements after sorting   ";
	for(i=0;i<n;i++)
	cout<<a[i]<<"   ";
	return 0;
}
