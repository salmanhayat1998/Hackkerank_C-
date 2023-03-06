#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;



int main() 
{
    int q=0;
    cin>>q;
    map<string,int> m;
    for (int i=0; i<q; i++)
    {
        int query;
        int y; // marks
        string x; // name 
        cin>>query; 
     
        switch (query)
        {
 
        case 1:
        cin>>x;
        cin>>y; 
         if(m.find(x) == m.end())
         {
        m.insert(make_pair(x,y));
         }
         else{
             m[x]+=y; // add in prev marks //
         }
        break;
        case 2:
        cin>>x;
        m.erase(x);
        break;
        case 3:
        cin>>x;
        if(m.find(x) != m.end())
        {
        map<string,int>::iterator itr=m.find(x);
        cout<<itr->second<<endl;   
        }
        else{
            cout<<"0";
        }
        break;
        
        
        }
    }




    return 0;
}



