#include "patient.h"
#include <iostream>

using namespace std;

int main()
{
	int id, bed, day;
       	float disc;

	cout<<"Enter patient details"<<endl;
	cin>>id>>bed>>day;

	Patient p (id, bed, day);
	
	cout<<"total generated bill is"<<p.GetBillingAmount()<<endl;

	InhousePatient ip(id, bed, day, disc);
	
	cout<<"total generated bill is"<<ip.GetBillingAmount()<<endl;


}
