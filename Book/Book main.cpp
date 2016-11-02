//
//  Book main.cpp
//  Classes
//
//  Created by Mikha Yupikha on 02/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Book.hpp"
using namespace std;

int main()
{
    string name, email, bookName;
    char gender;
    int qty;
    double price;
    
    cout<<"Please input data below"<<endl;
    cout<<"Author's Name: ";
    cin>>name;
    cout<<"E-mail: ";
    cin>>email;
    cout<<"Gender (m/f): ";
    cin>>gender;
    cout<<"Book Name: ";
    cin>>bookName;
    cout<<"Price: ";
    cin>>price;
    cout<<"Qty: ";
    cin>>qty;
    cout<<endl;

    Author data1 {name, email, gender};
    Book mybook {bookName, data1, price, qty};
    
    cout<<mybook.toString();
    
}
