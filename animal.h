#include <iostream>
#include <string>
#include "address.h"

using namespace std;

class Animal {
public:
    Animal(string n, string o);
    void printInfo();
    void setAddress(string addressString);
    ~Animal();
private:
    string name;
    string owner;
    Address *add;
    
};