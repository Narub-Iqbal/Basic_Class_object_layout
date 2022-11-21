#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    float height;
    string clas;
};
int main() {
    student bacha;
  cout<<"Enter Student name:\n";
  cin>>bacha.name;
  cout<<endl;
  cout<<"Enter student class:\n";
  cin>>bacha.clas;
  cout<<endl;
  cout<<"Enter Studnt's height:\n";
  cin>>bacha.height;
  cout<<endl;
  cout<<"Enter Student's age:\n";
  cin>>bacha.age;
  cout<<endl;
  cout<<"Welcome "<<bacha.name<<" we received your age as "<<bacha.age<<" and your class as "<<bacha.clas<<" and your height as "<<bacha.height;
  
  return 0;
}
