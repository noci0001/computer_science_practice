#include <stdio.h>
#include <stdlib.h>


int main()
{
	//CASE ONE: NOTHING CAN BE CHANGED
	
	const int variable = 20;			//Value cannot change

	const int *const pVariable = &variable;		//pValue cannot change, pAddress cannot change

	printf("CASE ONE: The constant value the constant pointer is pointing to is: %d\n", *pVariable);

	printf("\n\n");
	//CASE TWO: VALUE CAN CHANGE

	int variable1 = 20;                        	  //Value CAN change

        const int *const pVariable1 = &variable1;         //pValue cannot change, pAddress cannot change

	variable1 = 30;

	printf("The value variable1 successfully changed to %d\n", variable1);

        printf("CASE TWO: The value the constant pointer is pointing to is: %d\n", *pVariable1);

	printf("\n\n");
	//CASE THREE: VALUE CAN CHANGE, pValue can CHANGE
	
	int variable2 = 20;                        	  //Value CAN change

        int *const pVariable2 = &variable2;         	  //pValue CAN change, pAddress cannot change
	
	*pVariable2 = 45;	
		
	printf("The pValue (value the pointer points to) has been changed from 20 to %d\n", *pVariable2);

        printf("CASE THREE: The value the constant pointer is pointing to is: %d\n", *pVariable2);
	
	printf("\n\n");
	//CASE FOUR: EVERYTHING CAN CHANGE
	
	int variable3 = 90;                               //Value CAN change

	int new_var = 180;

        int *pVariable3 = &variable3;               	  //pValue CAN change, pAddress CAN change	

	printf("The address of the pointer pVariable3 changed from %p", pVariable3);

	pVariable3 = &new_var;

	printf(" to %p\n", pVariable3); 

        printf("CASE TWO: The value the pointer is pointing to changed from 90 to: %d\n", *pVariable3);

	return 0;
}
