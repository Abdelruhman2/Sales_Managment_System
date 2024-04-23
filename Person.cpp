#include "Person.h"
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
Person::Person()
{
    //ctor
}

Person::~Person()
{
    //dtor
}
void Person::readstream(istream &in)
{
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET INFORMATION OF PERSON YOU WILL ADD----(:*****\n\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\nEnter The Billing Address : ";
    in>>Billing_Address;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter The Full Name OF Customer : ";
    in>>Full_Name;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET INFORMATION OF CUSTOMER----(:*****\n\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\nEnter The ID OF Customer is -> ";
    in>>id;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter The Phone OF Customer is -> ";
    in>>phone;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";



}
void Person::print(ostream &out)
{
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\t\t\t\n*****(:----GET INFORMATION OF PERSON YOU ADDED----(:*****\n\n";
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Billing Address is : "<<Billing_Address;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Full Name OF Customer is : "<<Full_Name<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe ID OF Customer is : "<<id<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Phone OF Customer is : "<<phone<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";


}
void Person::Write_File_Person()
{
    char o;
    ofstream f7;
    f7.open("Customer.txt",ios::app);
    do
    {
        cin>>*this;
        f7<<Billing_Address<<" "<<Full_Name<<" "<<id<<" "<<phone<<endl;
        cout<<"\nDo You Have Next Data ( y / n ) ";
        cout<<"\n Please , Enter Your Choice : ";
        cin>>o;

    }
    while(o=='y');
    cout<<"\n\t\t\t\"COMPLETE\""<<endl;
    f7.flush();
    f7.close();
}
void Person::Read_File_Person()
{
    ifstream f12;
    f12.open("Customer.txt");
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"LIST OF CUSTOMER\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    while(!f12.eof())
    {
        if(f12>>Billing_Address>>Full_Name>>id>>phone)
        {
            cout<<*this;
            cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";

        }
    }
    f12.close();


}
void Person::Delete_person()
{
    int id_delete;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    char t;
    f5.open("Customer.txt");
    f4.open("temp.txt");
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter ID Customer You Want Delete : ";
    cin>>id_delete;
    while(f5>>Billing_Address>>Full_Name>>id>>phone)
    {
        cout<< id << endl;

        if(id!=id_delete)
        {
            f4<<Billing_Address<<" "<<Full_Name<<" "<<id<<" "<<phone<<endl;
            cout<< "ID OF User"<< id_delete<< endl;
        }
        else
        {
            flag = 1;
        }

    }

    f5.close();
    f4.close();
    remove("Customer.txt");
    rename("temp.txt","Customer.txt");
    flag==1?
    cout<<endl<<endl<<"\tContact Deleted Complete...":
        cout<<endl<<endl<<"\tContact Deleted Complete...";
}
void Person::Edit_person()
{
    int id_delete;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    char t;
    f5.open("Customer.txt");
    f4.open("temp.txt");
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter ID Customer You Want EDIT : ";
    cin>>id_delete;
    while(f5>>Billing_Address>>Full_Name>>id>>phone)
    {
        if(id!=id_delete)
        {
            f4<<Billing_Address<<" "<<Full_Name<<" "<<id<<" "<<phone<<endl;
        }
        else
        {
            flag = 1;
        }
    }
    f5.close();
    f4.close();
    remove("Customer.txt");
    rename("temp.txt","Customer.txt");
      Write_File_Person();
    flag==1?
    cout<<endl<<endl<<"\tEnter New Data...":
        cout<<endl<<endl<<"\tContact New Data..";



}
