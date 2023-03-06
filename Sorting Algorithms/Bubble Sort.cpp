#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={10,1,6,7,14,9};
  int n=6;
  bool sorted =false;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            sorted = true;
        }
    }
    if(sorted==false)//for best case complexity
    {
        break;
    }
  }  
  cout<<arr[0];
  return 0;
}