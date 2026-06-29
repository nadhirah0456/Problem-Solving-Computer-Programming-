/******************************************************************************
Author: Irdina Nadhirah Binti Bahanuddin (23B08I006)
Course: BCSC
Date: 12/10/2023
Brief description: Calculate the monthly gross salary at PetroNasa Company
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
	float BasSalary, GrossSalary, Allowance, AllowanceRate, HouseAllowance; // declare variables
	
	cout<<"Please enter Basic Salary (RM): "; // prompt user
	cin>>BasSalary; // input Basic Salary
	
	if (BasSalary > 0)
	{
		if (BasSalary >= 5000)
		{
			AllowanceRate = 0.05; // declare a Allowance rate to 0.05
		}
		else
		{
			AllowanceRate = 0.07; // declare a Allowance rate to 0.07
		}
		
	Allowance = AllowanceRate * BasSalary; // calculate Allowance
	HouseAllowance = 0.25 * BasSalary; // calculate House allowance
	GrossSalary = BasSalary + Allowance + HouseAllowance; // calculate Gross salary
	cout<<"\nAllowance (RM): "<<Allowance; // output Allowance
	cout<<"\nHouse Rent Allowance (RM): "<<HouseAllowance; // output House allowance
	cout<<"\nGross Salary (RM): "<<GrossSalary; // output Gross salary
	
	}
	else if (BasSalary < 0)
	{
		cout<<"\nInvalid Input. Please rerun the program and enter a valid input."; // output Invalid Input
	}
	return 0;
}
