#include<cstdio>
#include<cmath>
#include"assignment1.h"

int main(void)
{

//	Investment inv1;
	double amount;
        int period;
	int cal;
	bool final2;
	double rate=0;
	double result;
	printf("enter amount ");
	
	scanf("%lf",&amount);

	printf("enter period");
	scanf("%d",&period);
	Investment inv1(amount,period);
	rate= inv1.interestRate(amount,period);
	printf("%lf",rate);
	//Investment inv1(amount, period);
/*	printf("Amount is %lf ", inv1.getAmount());
	inv1.setAmount(amount);
	inv1.setPeriod(period);*/
	printf("enter the calculation u want Si and ci");
	scanf("%d",&cal);
	final2 = inv1.abcd(cal);
	//rate = inv1.interestRate(amount,period);
	//printf("%lf",rate);
	result=inv1.Get_interest(final2,rate);
	//printf();
	printf("Amount is %lf ", result);
}
