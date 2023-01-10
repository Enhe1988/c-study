#include<iostream>
using namespace std;
class person
{
   public:
person()
{
   cout<<"构造函数调用"<<endl;
}
~person()
{
   cout<<"析构函数调用"<<endl;
}
};
void test01()
{
 person p;
}
int main()
{
  //test01();
 person p;
 system("pause");
   return 0;    
}