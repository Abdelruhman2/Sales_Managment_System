#ifndef STOCK_H
#define STOCK_H
#include "Product.h"
#include "iostream"
#include <vector>

using namespace std ;

class Stock
{
private:
    int product_id,listSize,stock_count,counter;
    vector <Product> productList;

    //Stock *stockList;


public:
    Stock();
    Stock(int id, int quantity);
    ~Stock();
    friend istream&operator>>(istream &input,Stock &s);
    friend ostream & operator <<(ostream &output,Stock &s);
    void  input(Product &Pr);
    void  AddStock();
    void  UpdataProduct();
    void Print_Stock();
    void  Delete_stock();
    int  GetQuantity();
    int ID_Stock ,product_quantity ,product_ID;

};

#endif // STOCK_H
