//
//  Author main.cpp
//  Classes
//
//  Created by Mikha Yupikha on 02/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Author.hpp"
#include <iostream>
using namespace std;

int main ()
{
    string name, email;
    char gender;
    cout<<"Please input data below"<<endl;
    cout<<"Author's Name: ";
    cin>>name;
    cout<<"E-mail: ";
    cin>>email;
    cout<<"Gender (m/f): ";
    cin>>gender;
    cout<<endl;
    
    Author data1 {name, email, gender};
    
    cout<<data1.toString();
}
