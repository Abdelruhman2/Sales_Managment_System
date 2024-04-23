#ifndef ORDERITEM_H
#define ORDERITEM_H
#include <iostream>
#include "Stock.h"
using namespace std;

class orderItem
{
    protected:
        double salePrice;
        int quantity;
    public:
        orderItem();
        orderItem(double salePrice,double quantity);
        void Read();
        void upDateQuantity(double newQuantity);
        void OPeratorIncrease1();
        void OperatorDecrease1();
        void OPeratorIncreaseN(int n);
        void OperatorDecreaseN(int n);
        void print();
        virtual ~orderItem();
};

#endif // ORDERITEM_H
