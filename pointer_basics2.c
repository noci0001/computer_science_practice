#include <stdio.h>
#include <stdlib.h>

int main()
{
	int variable = 300;

	int *pVariable = NULL;
	
	pVariable = &variable;

	printf("Address of pointer:%p\n 
		Value of the pointer %p\n 
		Value of what the pointer is pointing to %d\n", 

		(void*)&pVariable, 
		pVariable, 
		*pVariable);


	return 0;
}
