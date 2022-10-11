class Patient
{
	private:
		int patientID;
		//string name;
		int bedtype;
		int nod;

	public:
		Patient()
		{
		 patientID = 100;
		 //name = A;
		 bedtype = 1;
		 nod = 5;
		}
		

		Patient(int pID, int btype, int d)
		{
		 patientID = pID;
		//string name;
		 bedtype = btype;
		 nod=d;
		}


		int GetPatientID()
		{
			return patientID;
		}

		void SetPatientID(int pID)
		{
			patientID = pID;
		}



		int GetbedType()
		{
			return bedtype;
		}

		void SetbedType(int btype)
		{
			bedtype = btype;
		}
	
	
		int GetNOD()
		{
			return nod;
		}

		void SetNOD(int d)
		{
			nod = d;
		}


~ Patient()
{
}


virtual double GetBillingAmount()
{
	double amount =0;
	double price = 0;

	switch (bedtype)
	{
		case1:
		 price = 500;
		 break;

		case2:
		 price = 350;
		 break;

		case3:
		 price = 200;
		 break;

		default:
		 price = 200;

	}
	return nod * price;

}

};



class InhousePatient: public Patient
{
  	private:
		float discount;
		
	
	public:
              InhousePatient(): Patient()
			{
				discount = 0;
			}

	      InhousePatient(int pID, int btype,int d,float discount) : Patient(pID, btype, d)
			{
				this->discount = discount;
			}

	      double GetBillingAmount()
	      {
		      double amount = 0;
		      amount = Patient::GetBillingAmount();

		      if (amount > 5000)
			      return amount * 0.95;
		      else
			      return amount * (1-discount);
	      }
};



