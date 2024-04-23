#include "iostream"
#include "cstring"
#include "Stock.h"
#include <fstream>
using namespace std ;

Stock::Stock()
{

}
Stock::Stock(int id,int quantity)
{
    counter = 0;
    this->product_id=id;
    this->product_quantity=quantity;
}

Stock::~Stock()
{

}
void Stock ::Delete_stock()
{
    int id_delete;
    Product pr;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    char t;
    f5.open("stock.txt");
    f4.open("temp.txt");
    cout<<"Enter ID Stock You Want Delete : ";
    cin>>id_delete;
    while(f5>>ID_Stock>>product_ID>>pr.Quantity)
    {
        cout<< ID_Stock << endl;

        if(ID_Stock!=id_delete)
        {
            f4<<ID_Stock<<" "<<product_ID<<" "<<pr.Quantity<<" "<<endl;
            cout<< "Record not added " << id_delete<< endl;

        }
        else
        {
            flag = 1;
        }

    }
    f5.close();
    f4.close();
    remove("stock.txt");
    rename("temp.txt","stock.txt");
    flag==1?
    cout<<endl<<endl<<"\tContact Deleted.......\n":
        cout<<endl<<endl<<"\tContact Deleted.......\n";
}
void Stock :: UpdataProduct()
{
    int id_Update;
    Product pr;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    char t;
    f5.open("stock.txt");
    f4.open("temp.txt");
    cout<<"Enter ID Stock You Want Update : ";
    cin>>id_Update;
    while(f5>>ID_Stock>>product_ID>>pr.Quantity)
    {
        //cout<< ID_Stock << endl;

        if(ID_Stock!=id_Update)
        {

            f4<<ID_Stock<<" "<<product_ID<<" "<<pr.Quantity<<" "<<endl;
            //cout<< "Record not added " << id_Update<< endl;

        }
        else
        {
            flag = 1;
        }

    }
    f5.close();
    f4.close();
    remove("stock.txt");
    rename("temp.txt","stock.txt");
    flag==1?
    cout<<endl<<endl<<"\tEnter New Data..":
        cout<<endl<<endl<<"\tEnter New Data..";
    cin>>*this;
}
void Stock::AddStock()
{
    cin>>*this;
}
int Stock :: GetQuantity()
{
    return product_quantity;
}
void Stock::Print_Stock()
{
    Product pr;
    ifstream f11;
    f11.open("stock.txt");
    cout<<"\n___________________________________\n";
    cout<<"All list\n";
    cout<<"_____________________________________\n";
    while(!f11.eof())
    {
        if(f11>>ID_Stock>>product_ID>>pr.Quantity)
        {
            cout<<*this;
            cout<<"\n___________________________________\n";
        }
    }
    f11.close();

}
ostream&operator <<(ostream &output, Stock &s)
{
    output << "Stock id : " << s.ID_Stock<<endl;
    return output;
}
istream&operator >>(istream &input,Stock &s)
{
    Product pr;
    cout<<"\nEnter Stock id : ";
    input >> s.ID_Stock;
    cout<<"\nEnter Product ID : ";
    input >>s.product_ID;
    ifstream f90;
    f90.open("Product.txt");
    while(f90>>pr.id>>pr.name>>pr.number>>pr.Quantity>>pr.price>>pr.type)
    {
        if(s.product_ID==pr.id)
        {
            ofstream f12;
            f12.open("stock.txt",ios::app);
            f12<<s.ID_Stock<<" "<<s.product_ID<<" "<<pr.Quantity<<" "<<endl;
            f12.close();
        }
        else
        {
            cout<<" No Product...";
            cout<<"\n Go To Add product....\n";
        }
    }
    f90.close();
}
