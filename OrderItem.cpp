#include "orderItem.h"

orderItem::orderItem()
{
    salePrice=0;
    quantity=0;
}
orderItem::orderItem(double salePrice,double quantity)
{
    this->salePrice=salePrice;
    this->quantity=quantity;
}

orderItem::~orderItem()
{
    //dtor
}
void orderItem::Read()
{
    cout<<"Enter The Quantity : ";
    cin>>quantity;
    cout<<"Enter Sale Price : ";
    cin>>salePrice;
}
void orderItem::upDateQuantity(double newQuantity)
{
    cout<<"Enter New Quantity : ";
    cin>>newQuantity;
    quantity=newQuantity;
}
void orderItem::OPeratorIncrease1()
{
    Stock St;
    if((quantity+1)<=St.GetQuantity())
    {
        quantity++;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OperatorDecrease1()
{
    Stock St;
    if((quantity-1)<=St.GetQuantity())
    {
        quantity--;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OPeratorIncreaseN(int n)
{
    Stock St;
    cout<<"Enter the extra amount : ";
    cin>>n;
    if((n+quantity)<=St.GetQuantity())
    {
        quantity+=n;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::OperatorDecreaseN(int n)
{
    Stock St;
    cout<<"Enter the missing amount : ";
    cin>>n;
    if((n+quantity)<=St.GetQuantity())
    {
        quantity-=n;
    }
    else
    {
        cout<<"The quantity is not available"<<endl;
    }
}
void orderItem::print()
{
    cout<<"The Quantity : "<<quantity<<endl<<"Sale Price : "<<salePrice<<endl;
}
