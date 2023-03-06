#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    int q=0;
    cin>>q;
    set<int>s;
    for (int i=0; i<q; i++)
    {
        int x,y=0;
        cin>>y;        
        cin>>x;

        switch (y) {
        
        case 1:
        s.insert(x);
        break;
        case 2:
        s.erase(s.find(x));
        break;
        case 3:
        if(s.find(x) != s.end())
        {
          cout<<"Yes"<<endl;   
        }
        else{
          cout<<"No"<<endl;   

        }
        break;
        
        
        }
    }
    return 0;
}



