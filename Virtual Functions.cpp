#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
  public:
  string name;
  unsigned int age;
  public:
  Person(){
    name="";
    age=1;
  }
  virtual void getdata(){
 
  }
  virtual void putdata(){
  
  }
};
class Professor : public Person{
   unsigned int publications;
   public:
   static int cur_id;
   Professor(){
     publications=1;
   }
   void getdata(){
        cin>>name;
    cin>>age;
     cin>>publications;
   }
   void putdata(){
    cout<<name<<" ";
    cout<<age<<" ";
    cout<<publications<<" "<<cur_id<<endl;
    cur_id+=1;
  }
};
int Professor::cur_id =1; 

class Student : public Person{
  int marks[6];
  
   public:
   static int cur_id;
   Student(){
   }
   void getdata(){
        cin>>name;
    cin>>age;
     for (int i=0; i<6; i++) {
       cin>>marks[i];
     }
   }
   void putdata(){
     int sum=0;
     
     for (int i=0; i<6; i++) {
       sum+=marks[i];
     }
    cout<<name<<" ";
    cout<<age<<" ";
    cout<<sum<<" "<<cur_id<<endl;
    cur_id+=1;
  }
};
int Student::cur_id =1; 

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
