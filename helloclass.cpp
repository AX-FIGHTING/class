#include<iostream>
#include"helloclass.h"
using namespace std;

HelloClass::HelloClass ()
{
   cout<<"I am being created.\n"<<endl;
}

HelloClass::~HelloClass ()
{
   cout<<"Iam being destoryed.\n"<<endl;
}

void HelloClass::sayHello ()
{
   cout<<"Hello Class!\n"<<endl;
}
