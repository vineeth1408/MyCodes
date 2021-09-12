#include <iostream>
#include <string>
using namespace std;
class wish
{
    public:
          void setname(string x)
               {
                    name=x;
               }
           string getname()
                       {
                  return name;
		       }
 private:
 string name;
}; 

int main()
{
     string username="this is what the f!\n";
     wish object;
     object.setname(username);
     
     cout <<object.getname()<<endl;
}

               
