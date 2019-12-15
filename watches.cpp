//Hamilton Nguyen 1000538439 07-19-2019 problem 2

#include "watches.h"

//functions that sets user's input
  
void watch::setPrice(float p)
{
	price=p;
}

void watch::setAge(int a)
{
	age=a;
}

void watch::setGold(string g)
{
	gold=g;
}

void watch::setBrand(string b)
{
	brand=b;
}

 float watch::repair_cost()
{
	
}
    
// class designer  
float designer :: repair_cost()
{
	cout<<"It's a designer watch!!!"<<endl<<endl;
	
	if(age>50) //it is antique
	cout<<"Its also an antique watch!!!"<<endl<<endl;
	
	else
	cout<<"Its still a new watch!!!"<<endl<<endl;
	
	if(gold == "yes")
	{
		cout<<"since its gold...we charge.."<<endl;
		return price/4;
	}
	
	else if (gold == "no")
	{
		cout<<"since its not gold and assumed its silver...we charge.."<<endl;
		return price/3;
	}
	
	else
	{
		cout<<"Is it gold or silver?!?!?!, enter again"<<endl;
	}
}  

// class nondesigner 
   
float nondesigner :: repair_cost()
{
	cout<<"Its a nondesigner watch!!"<<endl<<endl;
	cout<<"lets check to see if its on Free Repair List..."<<endl<<endl;
	
	string brand1 = "casio";
	string brand2 = "fossil";
	string brand3 = "garmin";
	
	FreeRepairlist.insert(brand1);
	FreeRepairlist.insert(brand2);
	FreeRepairlist.insert(brand3);
	
	if(FreeRepairlist.find(brand) != FreeRepairlist.end())
	{
		cout<<"It's on the Free Repair List!! No Cost To You!! "<<endl<<endl;
		return price = 0;
	}
	
	else
	{
		cout<<"Its not on the Free Repair list..."<<endl<<endl;
	}
	
	if(age>50) //it is antique
	{
		cout<<"Its also an antique watch!!!"<<endl<<endl;
		
		return price/2;
	}
	
	else
	{
		cout<<"Its still new watch!!! So..."<<endl;
		
		return price*0.15;
	}
}

