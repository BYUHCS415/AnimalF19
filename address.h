#include <iostream>
#include <string>

using namespace std;

class Address {
public:
    Address(string address);
    void printAddress();
    ~Address();
private:
    string address;
};