#include "Cash.h"
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
Cash::Cash()
{
    //ctor
}

Cash::~Cash()
{
    //dtor
}
void Cash::pay()
{
    cout<<"\nEnter The Cash -> ";
       cin>>Cash_Value;
}
