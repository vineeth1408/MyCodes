#include<iostream>
using namespace std;
int age(int a,int b)
{
int c;
c=a+b;
return c;
}
int main()
{
int a,b;	
cout<<"Enter father's age:"<<endl;
cin>>a;
cout<<"Enter son's age:"<<endl;
cin>>b;
cout<<"you are "<<age(a,b)<<" years old\n";


}

