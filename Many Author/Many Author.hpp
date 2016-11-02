//
//  Many Author.hpp
//  Classes
//
//  Created by Mikha Yupikha on 02/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Many_Author_hpp
#define Many_Author_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Author
{
protected:
    string name;
    string email;
    char gender;
public:
    Author();
    Author(string name, string email, char gender);
    void setEmail(string email);
    string getName();
    string getEmail();
    char getGender();
    string toString();
};

class Book
{
protected:
    string name;
    Author *author;
    double price;
    int qty;
public:
    
    Book(string name, Author author[], double price);
    Book(string name, Author author[], double price, int qty);
    void setQty(int qty);
    void setPrice(double price);
    string getName();
    Author getAuthor();
    double getPrice();
    int getQty();
    string toString();
    string getAuthorNames();
};

#endif /* Many_Author_hpp */
