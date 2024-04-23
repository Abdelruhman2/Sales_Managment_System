#include "Payment.h"
#include <iostream>
#include <string>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#include "Credit.h"
#include "Cash.h"
#include "Check.h"


using namespace std;
Credit Cr;
Cash Ca;
Check Ch;
Payment::Payment()
{
    //ctor
}

Payment::~Payment()
{
    //dtor
}
void Payment::pay()
{
    Order o;
    cout<<"\nEnter Your ID Customer : ";
    cin>>ID_Customer_Pay;
    ifstream f8;
    f8.open("order.txt",ios::app);
    while(f8>>o.iD_customer_ord>>o.ID>>o.Number_OF_Order>>o.date>>o.ID_Product_Search>>o.Quantity_Order)
    {
        if(ID_Customer_Pay==o.iD_customer_ord)
        {
            int a;
            cout<<"\t\t\n\"Choice The Way You Want pay with IT\""<<endl;
            switch(a)
            {
            case 1:
                Cr.pay();
                break;
            case 2:
                Ca.pay();
                break;
            case 3:
                Ch.pay();
                break;
            }
        }
    }
}
