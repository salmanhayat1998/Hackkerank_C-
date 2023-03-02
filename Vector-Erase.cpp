#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<unsigned int> vec;
    unsigned int n;
    unsigned int position=0;
    unsigned int range[2];
    
    // take non zero input as size of vector //
    while (n==0)
    {    
    cin>>n;
    }
    // add dumy element at 0 index //
    
    vec.push_back(0);
    
    // store input in vector //
    
    int temp=0;
    for (int i=1; i<=n; i++) 
    {
      cin>>temp;
      vec.push_back(temp);
    } 
    
    // get position to remove //
    cin>>position;
    // remove element at given index //
    vec.erase(vec.begin()+ position);
    
    // get range to remove //
    for (int i=0; i<2; i++) 
    {
      cin>>range[i];
    } 
    
    // remove element of range //
    vec.erase(vec.begin()+range[0],vec.begin()+range[1]);
    // remove dumy element //
    vec.erase(vec.begin());
    
    // show size of resultant vectoe //
    
    cout<<vec.size()<<endl;
    // show resultant vector //
    
    for (int i=0; i<vec.size(); i++)
     {
    cout<<vec[i]<<" ";
    }
    return 0;
}
