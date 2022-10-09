//constructor
// a special member function having same name as its class
#include<iostream>
using namespace std;
class circle
{
float pi=3.14,r;
public:
circle(float r1) //this pointer
{
this->r=r1;
}
void arae()
{
cout<<"area is ="<<pi*r*r;
}	
};
main()
{
float r;
cin>>r;
class circle obj(r);
obj.arae();

}

