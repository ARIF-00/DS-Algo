#include<iostream>
sing namespace std;
int main()
{
	int a[20],n,i,j,swap;
	cout<<"enter the no of elements  ";
	cin>>n;
	cout<<"enter the elements   ";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			swap=a[j];
		    a[j]=a[j+1];
	    	a[j+1]=swap;
			}
		}
		
		
	}
	cout<<"the elements after sorting   ";
	for(i=0;i<n;i++)
	cout<<a[i]<<"   ";
	return 0;
}
