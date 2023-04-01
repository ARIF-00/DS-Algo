#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int arr[6] =  {1, 2, 3, 4, 5, -6};
  
    sort(arr,arr+6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
  
}
