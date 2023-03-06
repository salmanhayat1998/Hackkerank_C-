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
    // if(cin.fail())
    // {
    //  cin.clear();
    //  cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //  cout<<"invalid input please re-enter: ";
    //  cin>>q;
    // }
    set<int> s;
    for (int i=0; i<q; i++)
    {
        int x,y;
        cin>>y>>x;        
        switch (y)
         {
        
        case 1:
        s.insert(x);
        break;
        case 2:
        s.erase((x));
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



