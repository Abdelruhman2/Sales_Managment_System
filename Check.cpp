#include "Check.h"
#include <iostream>
#include <string>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#include "Payment.h"
using namespace std;
Check::Check()
{
    //ctor
}

Check::~Check()
{
    //dtor
}
void Check::pay()
{
    cout<<"\nEnter The Bank ID -> ";
    cin>>Bank_ID;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout<<"\nEnter The Bank Name -> ";
    cin>>Name;
}




