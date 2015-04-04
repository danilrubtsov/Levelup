#include <iostream>

using namespace std;

int main()
{
  int a=0, b=0;
    bool cond;
cond= true;
    (cond ? a:b ) =1;
cout <<"a= "<<a<<" b= "<<b<<endl;


cond=0;
(cond ? a:b ) =2;
cout <<"a= "<<a<<" b= "<<b<<endl;



    return 0;
}
