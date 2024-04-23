#include "Campany.h"
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
Campany::Campany()
{
    //ctor
}

Campany::~Campany()
{
    //dtor
}
void Campany::readstream(istream&in)
{
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET INFORMATION OF COMPANY YOU WILL ADD----(:*****\n\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\nEnter The Location OF Company : ";
    in>>Location;
    cout<<"\n**********************************";
    cout<<"\nEnter The Company Name : ";
    in>>Campany_name;
    cout<<"\n**********************************";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET THE INFORMATION OF CUSTOMER----(:*****\n\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\nSet ID OF Customer is : ";
    in>>id;
    cout<<"\n**********************************";
    cout<<"\nSet Phone OF Customer is : ";
    in>>phone;
    cout<<"\n**********************************";
}

void Campany::print(ostream &out)
{
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\t\t\t\n*****(:----GET INFORMATION OF COMPANY YOU WILL ADD----(:*****\n\n";
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\nThe Location OF Company is : "<<Location;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Company Name is : "<<Campany_name;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe ID OF Customer is : "<<id<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Phone OF Customer is : "<<phone<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
}

void Campany::Write_File_Campany()
{
    char ch;
    ofstream f6;
    f6.open("Customer.txt",ios::app);
    do
    {
        cin>>*this;
        f6<<Location<<" "<<Campany_name<<" "<<id<<" "<<phone<<endl;
        cout<<"\nDo You Have Next Data ( y / n ) ";
        cout<<"\n Please , Enter Your Choice : ";
        cin>>ch;

    }
    while(ch=='y');
    cout<<"\n\t\t\t\"COMPLETE\""<<endl;
    f6.flush();
    f6.close();
}
void Campany::Read_File_Campany()
{
    ifstream f11;
    f11.open("Customer.txt");
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"All list\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    while(!f11.eof())
    {
        if(f11>>Location>>Campany_name>>id>>phone)
        {
            cout<<*this;
            cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";

        }
    }
    f11.close();


}
void Campany::Delete_Company()
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
    while(f5>>Location>>Campany_name>>id>>phone)
    {

        if(id!=id_delete)
        {
            f4<<Location<<" "<<Campany_name<<" "<<id<<" "<<phone<<endl;
            cout<<"Can't Find Any User"<<endl;

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
void Campany::Edit_Company()
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
    while(f5>>Location>>Campany_name>>id>>phone)
    {
        if(id!=id_delete)
        {
            f4<<Location<<" "<<Campany_name<<" "<<id<<" "<<phone<<endl;
            cout<<"Can't Find User"<<endl;
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
    cout<<endl<<endl<<"\tEnter New Data...":
        cout<<endl<<endl<<"\tEnter New Data...";

    Write_File_Campany();
}
