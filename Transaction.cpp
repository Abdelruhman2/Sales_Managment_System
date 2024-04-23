#include "Transaction.h"
#include "Order.h"
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
#include "Order.h"
#include "Person.h"
#include "Customer.h"
#include "Campany.h"
using namespace std;
Transaction::Transaction()
{
    //ctor
}

Transaction::~Transaction()
{
    //dtor
}
void Transaction::Get_Order()
{


    Person Pr;
    Product po;
    Order Or;
    Campany Ca;
    int choo;
    cout<<"MAKE TRANSECTION FOR PERSON OR COMPANY\n";
    cout<<"\n[1] Person";
    cout<<"\n[2] Company";
    cout<<"\nYour Choice : ";
    cin>>choo;
    switch(choo)
    {
    case 1 :
    {
        cout<<"Enter ID person : ";
        cin>>id_person;

        ifstream fout1;
        fout1.open("Customer.txt",ios::app);

        while(!fout1.eof())
        {
            fout1>>Pr.Billing_Address>>Pr.Full_Name>>Pr.id>>Pr.phone;
            if(id_person==Pr.id)
            {
                ofstream fin1;
                fin1.open("Transaction.txt",ios::app);
                fin1<<Pr.id<<" "<<Pr.Full_Name<<" ";

                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<"\nEnter The Transaction Date : ";
                cin>>Transaction_Date;
                fin1<<Transaction_Date<<" ";
                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<"\nEnter ID Order : ";
                cin>>id_order;
                ifstream fout5;
                fout5.open("order.txt");
                while(!fout5.eof())
                {

                    fout5>>Or.iD_customer_ord>>Or.ID>>Or.Number_OF_Order>>Or.date>>Or.ID_Product_Search>>po.price>>Or.Quantity_Order;

                    if(id_order==Or.ID)
                    {
                        fin1<<id_order<<" "<<endl;
                    }
                    fout5.close();
                }
                fin1.close();
            }
        }
        fout1.close();
    }
    break;
    case 2:
    {
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"\nEnter ID Company : ";
        cin>>id_company;
        ifstream fout20;
        fout20.open("Customer.txt",ios::app);
        while(!fout20.eof())
        {
            fout20>>Ca.Location>>Ca.Campany_name>>Ca.id>>Ca.phone;
            if(id_company==Ca.id)
            {
                ofstream fin20;
                fin20.open("Transaction.txt",ios::app);
                fin20<<Ca.id<<" "<<Ca.Campany_name<<" ";
                fin20.close();
                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                ofstream f10;
                f10.open("Transaction.txt",ios::app);
                cout<<"\nEnter The Transaction Date : ";
                cin>>Transaction_Date;
                f10<<Transaction_Date<<" ";
                f10.close();
                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

                cout<<"\nEnter ID Order : ";
                cin>>id_order;
                ifstream fout50;
                fout50.open("order.txt");
                while(!fout50.eof())
                {
                    fout50>>Or.iD_customer_ord>>Or.ID>>Or.Number_OF_Order>>Or.date>>Or.ID_Product_Search>>Or.Quantity_Order;
                    if(id_order==Or.ID)
                    {
                        ofstream fin20;
                        fin20.open("Transaction");
                        fin20<<id_order<<" "<<endl;
                        fin20.close();
                    }
                }
                fout50.close();
            }
            break;
        }
        fout20.close();
    }
    }
}
std::ostream& operator<<(std::ostream& out, Transaction& t)
{
    Person Pe;
    Order O;
    out<<"\t\t\"THE CHECK\" \n";
    out<<"\nThe Date OF Check : "<<t.Transaction_Date;//.....
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Customer Name OF Check : "<<Pe.Full_Name;//.....
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe ID OF Order : "<<O.ID;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Number OF Order : "<<O.Number_OF_Order;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Total Of Order : "<<O.total;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";


}
Transaction& operator+=(Order& o, Payment& p);

