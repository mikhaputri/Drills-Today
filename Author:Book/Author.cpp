//
//  Author.cpp
//  Classes
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Author.hpp"
#include <iostream>
#include <string>
using namespace std;

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
    return "Name: " + name + "\nEmail: " + email + "\nGender: " + gender;
}
