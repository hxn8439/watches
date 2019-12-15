//Hamilton Nguyen 1000538439 07-19-2019 problem 2

#include "watches.h"

//interface menu function that handles classes algorithm. 
void menu()
{
    int a;
    float b;
    string c;
    string d;
    
    cout<<"How old is it?"<<endl;
    cin>>a;
    cout<<"Whats the price?"<<endl;
    cin>>b;
    getchar();
    cout<<"whats the name?"<<endl;
    getline(cin, c);
    cout<<"Is this gold?(yes or no only)"<<endl;
    cin>>d;
    cout<<endl;
    
    if (b<800)
    {
        watch* w = new nondesigner();
		
        w->setAge(a);
        w->setPrice(b);
        w->setBrand(c);
        w->setGold(d);
        
        cout<<"repair cost: "<<w->repair_cost()<<endl<<endl;
    }
    
    if (b>800)
    {
        watch* w = new designer();
        
        w->setAge(a);
        w->setPrice(b);
        w->setBrand(c);
        w->setGold(d);
        
       cout<<"repair cost: "<<w->repair_cost()<<endl<<endl;
    }
};

int main() 
{
  
    menu();
}

