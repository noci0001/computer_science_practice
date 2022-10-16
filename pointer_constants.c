#include <stdio.h>
#include <stdlib.h>

int main()
{
	//CASE ONE

	//instantiating int to number and pointer to null.
	//giving the pointer variable the value of address of int variable

	int variable = 30;

	int *pVariable = NULL;

	pVariable = &variable;

	//All the above variables can be reassigned!
	
	int const variable1 = 30;    //CANNOT ASSIGN CONST TO POINTER!

        int *pVariable1 = NULL;

	//variable = 40;

        //pVariable1 = &variable1;

	//ABOVE: YOU CANNOT ASSIGN CONST TO POINTER!









	//CASE TWO

	int variable2 = 30; 

        const int *pVariable2 = &variable2; //VALUE (variable2) CANNOT BE CHANGED!
	//THE POINTER IS POINTING TO A CONSTANT INTEGER!!!!
	

	//*pVariable2 = 40;   ERROR!!
	
	//THIS IS SOLELY FROM THE PROSPECTIVE OF THE POINTER, YOU CAN STILL CHANGE THE VALUE OF THE INIAL VARIABLE;
	
	variable2 = 40;

	int new_variable3 = 100;

	pVariable2 = &new_variable3;










	//CASE THREE


	int variable3 = 30;
	int new_var = 100;

        int *const pVariable3 = &variable3;  //CONST POINTER
					     //THE ADDRESS CANNOT CHANGE!

	*pVariable3 = 400; //YESS! YOU CAN DO THAT! THE ADDRESS IS STILL THE SAME.

	//pVariable3 = &new_var; //NO!! THE ADDRESS CHANGES SO NOT ALLOWED!!!






	//SUMMARY:
	
	//const int *pVariable		int *const pVariable 
	//CANNOT CHANGE VALUE		CANNOT CHANGE ADDRESS
	//IN POINTER			IN POINTER
	
	//POINTER CANNOT		VALUE THE POINTER POINTS TO
	//CHANGE!			CANNOT CHANGE!



	return 0;
}
