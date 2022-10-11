#include<cstdio>
#include<cmath>

class Investment
{
	public:
		Investment()
		{
			amount = 5000;
			period = 7;
		}
		Investment(double amount, int period)
		{
			this->amount = amount;
			this->period = period;
		}

/*		double getAmount()
		{
			return amount;
		}
		void setAmount(double amt) 
		{
			amount = amt;
		}
                
		int getPeriod()
		{
			return period;
		}
		void setPeriod(int pp) 
		{
			period = pp;
		}
*/
		double interestRate(double amount,int period)
		{
			double rate;
			if(amount<10000&&period<5)
			{
				 rate =8;
				
			}
			if(amount<10000&&period>5)
			{
				 rate = 9;
				
			}
			if((amount>10000&&amount<50000) && period<5)
			{
				 rate = 9;
				
			}	

			if((amount>10000&&amount<50000) && period>5)
			{
				 rate = 10;
				
			}

			if(amount>50000&&period<5)
			{
		
				 rate =10;
				
			}
			if(amount>50000&&period>5)
			{
				 rate = 11;
				
			}
			return rate;
		}

		bool abcd(int c)
		{
			
			if(c==1)
			{
				return true;
			}
			else
			{
				return false;
			}
		 
		}

		double Get_interest(bool final2,double rate)
		{
		//	double amount=getAmount;
		//	int period=getPeriod;
			double last_amount=0;
			if(final2==0)
			{
				last_amount=(amount * period * rate)/100;

			}
			else
			{
				last_amount=amount*pow((1+rate/100),period )-amount;
			}
			return last_amount;
		}	

	private:
		double amount;
		int  period;
};

