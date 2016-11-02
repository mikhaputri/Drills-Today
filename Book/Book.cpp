//
//  Book.cpp
//  Classes
//
//  Created by Mikha Yupikha on 02/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Book.hpp"
#include <iostream>
using namespace std;

Author::Author()
{
    
}
Author::Author(string name, string email, char gender)
{
    this -> name = name;
    this -> email = email;
    this-> gender = gender;
}

void Author::setEmail(string email)
{
    this -> email = email;
}
string Author::getname()
{
    return name;
}
string Author::getEmail()
{
    return email;
}
char Author::getGender()
{
    return gender;
}
string Author::toString()
{
    return "Name: " + name + ", Email: " + email + ", Gender: " + gender;
}


Book::Book(string name, Author author, double price)
{
    this -> name = name;
    this -> author = author;
    this -> price = price;
}
Book::Book(string name, Author author, double price, int qty)
{
    this -> name = name;
    this -> author = author;
    this -> price = price;
    this -> qty = qty;
}
void Book::setQty(int qty)
{
    this -> qty = qty;
}
void Book::setPrice(double price)
{
    this -> price = price;
}
string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
double Book::getPrice()
{
    return price;
}
int Book::getQty()
{
    return qty;
}
string Book::toString()
{
    return "Book: " + name + ", " + author.toString() + ", Price: " + to_string(price) + ", Qty: " + to_string(qty);
}
