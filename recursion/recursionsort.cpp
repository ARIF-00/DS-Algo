//saort array using array
#include<bits/stdc++.h>
using namespace std;

 void insert(vector<int> &a, int temp)
 {
     if(a.size()==0 || a[a.size() - 1]<=temp)
     {
     a.push_back(temp);
     return;
     }

     int val=a[a.size() -1];
     a.pop_back();
     
     insert(a,temp);
     a.push_back(val);

 }

 void rsort(vector<int> &a)
 {
     if(a.size()==1)
     return;

    int temp =a[a.size()-1];
    a.pop_back();
    rsort(a);
    insert(a,temp);
 }
 
 int main()
 {
     vector<int> a={1,5,2,0};
     rsort(a);
     for(int i=0;i<a.size();i++)
     {
         cout<<a[i]<<endl;
     }

     return 0;
 }