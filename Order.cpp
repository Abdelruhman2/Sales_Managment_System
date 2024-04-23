#include "Order.h"
#include <iostream>
#include <string>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<fstream>
#include<unistd.h>

using namespace std;
enum Order_Statue {NEW, HOLD, PAID, CANCELED};
Order::Order()
{
    //ctor
}

Order::~Order()
{
    //dtor
}
void Order::Creat_Order()
{

    Product Pr;
    Stock St;
    Person pe;
    Campany ca;
    Customers cus;
    Order_Statue Statue;
    Statue = NEW;

    int a;
    cout<<"SET ORDER FOR PERSON OR COMPANY\n";
    cout<<"\n[1] Person";
    cout<<"\n[2] Company";
    cout<<"\nYour Choice : ";
    cin>>a;
    if(a==1)
    {
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"\nEnter The ID OF Customer : ";
        cin>>iD_customer_ord;
        ifstream f91;
        f91.open("Customer.txt");
        while(!f91.eof())
        {


            f91>>pe.Billing_Address>>pe.Full_Name>>pe.id>>pe.phone;
            if(iD_customer_ord==pe.id)
            {
                ofstream f12;
                f12.open("order.txt",ios::app);
                f12<<iD_customer_ord<<" ";
                f12.close();
                Product pr;
                // To Loop For The The Sales User Will Buy ....
                cin>>*this;
                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<"\nEnter The ID OF Product : ";
                cin>>ID_Product_Search;
                ifstream f90;
                f90.open("Product.txt");
                while(!f90.eof())
                {
                    f90>>pr.id>>pr.name>>pr.number>>pr.Quantity>>pr.price>>pr.type;
                    if (ID_Product_Search==pr.id)
                    {
                        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<"\nEnter The Quantity_Order : ";
                        cin>>Quantity_Order;
                        ofstream f12;
                        f12.open("order.txt",ios::app);
                        f12<<ID_Product_Search<<" "<<pr.price<<" "<<Quantity_Order<<" ";
                        f12<<endl;
                        f12.close();
                    }
                }
                cout<<"\n\n No record not found\n";
                f90.close();

            }
            break;
        }


    }
    if(a==2)
    {
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"\nEnter The ID OF Company : ";
        cin>>iD_company_ord;
        ifstream f91;
        f91.open("Customer.txt");
        while(!f91.eof())
        {

            f91>>ca.Location>>ca.Campany_name>>ca.id>>ca.phone;
            if (iD_company_ord==ca.id)
            {
                ofstream f112;
                f112.open("order.txt",ios::app);
                f112<<iD_company_ord<<" ";
                Product pr;

                cin>>*this;
                cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                cout<<"\nEnter The ID OF Product : ";
                cin>>ID_Product_Search;
                ifstream f90;
                f90.open("Product.txt");
                while(!f90.eof())
                {
                    f90>>pr.id>>pr.name>>pr.number>>pr.Quantity>>pr.price>>pr.type;
                    if (ID_Product_Search==pr.id)
                    {
                        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
                        cout<<"\nEnter The Quantity_Order : ";
                        cin>>Quantity_Order;
                        f112<<ID_Product_Search<<" "<<Quantity_Order<<" "<<endl;
                        f112.close();
                    }
                }
                f90.close();
                break;
            }
        }
    }
}
void Order::Edit_Order()
{
    int a;
    cout<<"\nEDIT ORDER FOR PERSON OR COMPANY\n";
    cout<<"\n[1] Person";
    cout<<"\n[2] Company";
    cout<<"\nYour Choice : ";
    cin>>a;
    if(a==1)
    {
        Product pr;
        int ID_Edit;
        int flag = 0;
        ofstream f19;
        ifstream f18;

        f18.open("order.txt");
        f19.open("temp.txt");
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"Enter ID OF order You want Edit : ";
        cin>>ID_Edit;

        while(f18>>iD_customer_ord>>ID_Product_Search>>pr.price>>ID>>Number_OF_Order>>date>>total)
        {
            if(f18>>iD_customer_ord>>ID_Product_Search>>pr.price>>ID>>Number_OF_Order>>date>>total)
            {
                if(ID!=ID_Edit)
                {
                    f19<<iD_customer_ord<<" "<<ID_Product_Search<<" "<<pr.price<<" "<<ID<<" "<<Number_OF_Order<<" "<<date<<" "<<total<<endl;
                }


                else
                    flag = 1;
            }
        }

        f18.close();
        f19.close();
        remove("order.txt");
        rename("temp.txt", "order.txt");
        flag==1?
        cout<<endl<<endl<<"\tEnter New Data...":
            cout<<endl<<endl<<"\tEnter New Data..";
        Creat_Order();
    }
}

void Order::Delete_Order()
{
    int a;
    cout<<"DELETE ORDER FOR PERSON OR COMPANY\n";
    cout<<"\n[1] Person";
    cout<<"\n[2] Company";
    cout<<"\nYour Choice : ";
    cin>>a;
    if(a==1)
    {
        Product pr;
        int ID_Edit;
        int flag = 0;
        ofstream f19;
        ifstream f18;
        f18.open("order.txt");
        f19.open("temp.txt");
        cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"\nEnter ID to Delete : ";
        cin>>ID_Edit;

        while(f18>>iD_customer_ord>>ID_Product_Search>>pr.price>>ID>>Number_OF_Order>>date>>total)
        {
            if(f18>>iD_customer_ord>>ID_Product_Search>>pr.price>>ID>>Number_OF_Order>>date>>total)
            {
                if(ID!=ID_Edit)
                {
                    f19<<iD_customer_ord<<" "<<ID_Product_Search<<" "<<pr.price<<" "<<ID<<" "<<Number_OF_Order<<" "<<date<<" "<<total<<endl;
                }


                else
                    flag = 1;
            }
        }

        f18.close();
        f19.close();
        remove("order.txt");
        rename("temp.txt", "order.txt");
        flag==1?
        cout<<endl<<endl<<"\tEnter New Data...":
            cout<<endl<<endl<<"\tEnter New Data..";

    }
}

void Order::print()
{

    ifstream f11;
    f11.open("order.txt");
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"LIST OF CUSTOMER\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    while(!f11.eof())
    {
        if(f11>>iD_customer_ord>>ID_Product_Search>>ID>>Number_OF_Order>>date>>Quantity_Order)
        {
            cout<<"Customer ID : "<<iD_customer_ord<<endl;
            cout<<"ID Product : "<<ID_Product_Search<<endl;
            cout<<*this;
            cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";

        }
    }
    f11.close();



}

std::ostream& operator<<(std::ostream& out, Order& o)
{
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\t\t\t\n*****(:----GET THE INFORMATION OF ORDER YOU ADDED----(:*****\n\n";
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\nThe ID OF Order : "<<o.ID<<endl;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Number OF Order : "<<o.Number_OF_Order<<endl;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Date Of The Order : "<<o.date<<endl;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Quantity Order is : "<<o.Quantity_Order<<endl;
    return out;
};
std::istream& operator>>(std::istream& in, Order& o )
{
    ofstream f7;
    f7.open("order.txt",ios::app);
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET THE INFORMATION OF ORDER YOU ADDED----(:*****\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\nEnter ID OF Order -> ";
    in>>o.ID;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter Number OF Order -> ";
    in>>o.Number_OF_Order;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter The Date Of The Order -> ";
    in>>o.date;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    f7<<o.ID<<" "<<o.Number_OF_Order<<" "<<o.date<<" ";
    f7.close();

    return in;
}

