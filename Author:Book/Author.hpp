//
//  Author.hpp
//  Classes
//
//  Created by Mikha Yupikha on 01/11/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Author_hpp
#define Author_hpp
#include <iostream>
using namespace std;

class Author
{
protected:
    string name;
    string email;
    char gender;
public:
    Author(string name, string email, char gender);
    void setEmail(string email);
    string getname();
    string getEmail();
    char getGender();
    string toString();
};

#endif /* Author_hpp */
