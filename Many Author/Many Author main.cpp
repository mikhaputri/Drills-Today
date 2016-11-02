//
//  Many Author main.cpp
//  Classes
//
//  Created by Mikha Yupikha on 02/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Many Author.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string name, email, bookName, name2, email2, bookname2;
    char gender, gender2;
    int qty;
    double price;
    
    cout<<"Please input data below"<<endl;
    cout<<"First Author's Name: ";
    cin>>name;
    cout<<"E-mail: ";
    cin>>email;
    cout<<"Gender (m/f): ";
    cin>>gender;
    cout<<"Second Author's Name: ";
    cin>>name2;
    cout<<"E-mail: ";
    cin>>email2;
    cout<<"Gender (m/f): ";
    cin>>gender2;
    
    cout<<"Book Name: ";
    cin>>bookName;
    cout<<"Price: ";
    cin>>price;
    cout<<"Qty: ";
    cin>>qty;
    cout<<endl;
    
    Author author [2] = {Author(name, email, gender), Author(name2, email2, gender2)};
    Book mybook (bookName, author, price, qty);
    
    cout<<mybook.toString();
    cout<<mybook.getAuthorNames();
}
