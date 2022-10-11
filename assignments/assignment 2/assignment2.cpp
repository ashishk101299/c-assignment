#include<iostream>
#include"assignment2.h"

using namespace std;


int main(void)
{
    int rup,pai;
    
    Money m1;
    cout<<"enter rupees and paise for amount 1: ";
    cin>>rup>>pai;
    m1.setRupee(rup);
    m1.setPaise(pai);
   // Money m1(rup,pai);
    
    m1.display();

    Money m2;
    cout<<"enter rupees and paise for amount 2: ";
    cin>>rup>>pai;
    m2.setRupee(rup);
    m2.setPaise(pai);
   // Money m2(rup,pai);
    m2.display();

    Money m3;
    m3=m1+m2;
    cout<<"the addition is :";
    m3.display();

}
