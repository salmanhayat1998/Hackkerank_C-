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
     int q;
  cin >> q;
  map <string, int> studentMarks;
  for (int i = 0; i < q; i++) {
    int type; 
    cin >> type;
    string name;
    cin >>name;
  if(type == 1) {
       int marks; 
       cin >> marks;
     if(studentMarks.find(name)!=studentMarks.end()){
            int updatemarks = studentMarks[name] + marks;
            studentMarks[name] = updatemarks;
     }
     studentMarks.insert(pair<string, int> (name, marks));
  }
  if(type == 2) {
      studentMarks.erase(name);
  }
  if (type == 3) {
     cout << studentMarks[name] << endl;
  }
  }


    return 0;
}


