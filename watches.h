//Hamilton Nguyen 1000538439 07-19-2019 problem 2

#ifndef WATCHES_H
#define WATCHES_H

#include <iostream>
#include <set>
#include <string>

using namespace std;

class watch
{
    protected:
    
    float price;
    int age;
    string gold; 
    string brand;
    set<string> FreeRepairlist;
    
    public:
	
	//functions that sets user's input
  
    void setPrice(float p);
 
    void setAge(int a);
  
    void setGold(string g);
    
    void setBrand(string b);
	
    virtual float repair_cost();
    
};

// class designer 
class designer: public watch
{
    public:
    
    float repair_cost();
};

// class nondesigner 
class nondesigner: public watch
{
    public:
    
    float repair_cost();
};


#endif

