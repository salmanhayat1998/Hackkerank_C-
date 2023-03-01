#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n=0;
    int q=0;
    cin>>n;
    cin>>q;
    
    int *arr[n];
   // int arr2[]
   
   for (int i=0; i<n; i++) 
   {
       int a=0;
       cin>>a;
       arr[i]= new int[a];
       
       for(int j=0;j<a;j++){
           
           cin>>arr[i][j];
       }
   }
   
   for (int i=0; i<q; i++)
   {
      int a=0,b=0;
      cin>>a>>b;
      
      cout<<arr[a][b]<<endl;
   }
     
    return 0;
}
