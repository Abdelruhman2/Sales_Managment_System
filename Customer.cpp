#include "Customer.h"
#include <iostream>
#include <string>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#include "Person.h"
#include "Campany.h"
using namespace std;
Customer::Customer()
{
    //ctor
}

Customer::~Customer()
{
    //dtor
}
void Customer::print(ostream &out)
{
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    out<<"\t\t\t\n*****(:----GET INFORMATION OF CUSTOMER YOU ADDED----(:*****\n\n";
    out<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
   out<<"\nThe ID OF Customer is : "<<id<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    out<<"\nThe Phone OF Customer is : "<<phone<<endl;
    out<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
}

std::ostream& operator<<(std::ostream& out,  Customer& c)
{
    c.print(out);
    return out;
}
std::istream& operator>>(std::istream& in,  Customer& c)
{
c.readstream(in);
 return in;
}
