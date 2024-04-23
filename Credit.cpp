#include "Credit.h"
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
Credit::Credit()
{
    //ctor
}

Credit::~Credit()
{
    //dtor
}
void Credit::pay()
{
    cout<<"\nEnter The Credit Number -> ";
    cin>>Number;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter The Credit Type -> ";
    cin>>type;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter The Credit Expire Date -> ";
    cin>>Expire_Date;


}



