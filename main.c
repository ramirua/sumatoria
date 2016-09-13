/*ciclos automaticos*/
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int j, sum=0;
	for(j=0; j<20; j++)
	{
		sum=sum +((j-1)*(j-1)); 
		/* 
		de esta forma se utiliza el pow a traves de la libreria math.h
	    p=pow(i-1,2);
		sum=sum+p;
		*/
	    sum++;
	}
		printf("la sumatoria es: %d",sum);
	return 0;
}
