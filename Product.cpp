#include <iostream>
#include "Product.h"
#include <fstream>
using namespace std;

Product::Product()
{
    *arr = new int [size];
}
Product::Product(int id,int type,string number,string name,double price,int Quantity)
{

    this->id = id;
    this->name = name;
    this->number = number;
    this->price = price;
    this->type = type;
    this->Quantity=Quantity;
}

Product::~Product()
{

}
void Product::Add_product()
{
    cin>>*this;
}

istream&operator >>(istream &input,Product &p)
{

    ofstream f2;


    f2.open("Product.txt",ios::app);
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"\t\t\t\n*****(:----SET INFORMATION OF PRODUCT YOU WILL ADD----(:*****\n\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"Enter product id : ";
    input >> p.id;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;
    cout<<"Enter product name : ";
    input >> p.name;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;
    cout<<"Enter product number : ";
    input >> p.number;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;
    cout<<"Enter Quantity : ";
    input>>p.Quantity;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;
    cout<<"Enter product price : ";
    input >> p.price;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;
    cout<<"Enter product type : ";
    input >> p.type;
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<endl;

    f2<<p.id<<" "<<p.name<<" "<<p.number<<" "<<p.Quantity<<" "<<p.price<<" "<<p.type<<endl;
    f2.close();
    return input;
}

void Product::update()
{
    int id_Edit;
    Product pr;
    int flag = 0;
    ofstream f4;

    ifstream f5;
    char t;
    f5.open("Product.txt");
    f4.open("temp.txt");
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\nEnter ID Product You Want Edit : ";
    cin>>id_Edit;
    while(f5>>id>>name>>number>>Quantity>>price>>type)
    {
        if(id!=id_Edit)
        {
            f4<<id<<" "<<name<<" "<<number<<" "<<Quantity<<" "<<price<<" "<<type<<endl;
            cout<< "Record not added " << id_Edit<< endl;
        }
        else
        {
            flag = 1;
        }

    }

    f5.close();
    f4.close();
    remove("Product.txt");
    rename("temp.txt","Product.txt");
    flag==1?
    cout<<endl<<endl<<"\tEnter New Data..":
        cout<<endl<<endl<<"\tEnter New Data..";
    cin>>*this;

}
void Product::Delete_Product()
{
    int id_delete;
    Product pr;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    char t;
    f5.open("Product.txt");
    f4.open("temp.txt");
    cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"Enter ID Stock You Want Delete : ";
    cin>>id_delete;
    while(f5>> id>>name>>number>>Quantity>>price>>type)
    {
        if(id!=id_delete)
        {
            f4<<id<<" "<<name<<" "<<number<<" "<<Quantity<<" "<<price<<" "<<type<<endl;

        }
        else
        {
            flag = 1;
        }

    }

    f5.close();
    f4.close();
    remove("Product.txt");
    rename("temp.txt","Product.txt");
    flag==1?
    cout<<endl<<endl<<"\tEnter New Data..":
        cout<<endl<<endl<<"\tEnter New Data..";

}
void Product::Print_Product()
{
    ifstream f11;
    f11.open("Product.txt");
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    cout<<"LIST OF CUSTOMER\n";
    cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
    while(!f11.eof())
    {
        if(f11>>id>>name>>number>>Quantity>>price>>type)
        {
            cout<<*this;
            cout<<"\n-------------------|||||||||||||||||||||||||||||||||||||||-------------\n";
        }
    }
    f11.close();


}
ostream&operator <<(ostream &output, Product &p)
{
    output << "Product id : " << p.id << endl << "Product Name : " << p.name << endl << "Product Number : " << p.number<<endl<<"Quantity :" <<p.Quantity<<endl << "Product Price : " << p.price << endl << "Product Type : " << p.type << endl;
    return output;
}
