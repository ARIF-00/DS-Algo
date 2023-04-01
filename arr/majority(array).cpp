#include<iostream>
using namespace std;
int majority(int a[], int n)
{
    int index=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[index])
        count++;
        else
        count--;
        if(count==0)
        {
            index=i;
            count=1;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	int temp=majority(a, n);
    cout<<"the majority eement is : \n"<<a[temp];
    return 0;


}
