#include<iostream>
using namespace std;

class Money
{
    private:
    int rupees, paise;

    public:

    void setRupee(int rup)
    {
	rupees = rup;
    }
    void setPaise(int pai)
    {
	paise = pai;
    }
   
    Money operator + (const Money & obj)
    {
	Money temp;
	temp.rupees = rupees + obj.rupees;
        temp.paise  = paise + obj.paise;
	return temp;	
    }
    void display()
    {
	cout<<rupees<<" Rs and "<<paise<<" paise only."<<endl;
    }
    
};
