//paramatrised constructor
// a special member function having same name as its class
#include<iostream>
using namespace std;
class rect
{
int l,b;
public:
rect(int l1,int b1)
{
l=l1,b=b1;
}
void arae()
{
cout<<"area is ="<<l*b;
}	
};
main()
{
int l1,b1;
cin>>l1>>b1;
class rect obj(l1,b1);
obj.arae();

}

