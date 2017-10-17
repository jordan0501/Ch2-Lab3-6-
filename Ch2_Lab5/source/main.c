#include<stdio.h>
#include<stdlib.h>
int main()
{
	float population = 6763, rate = 0.0118, newPop = population, newPop2 = population;
	int year;
	printf("%15s%30s%25s\n","Years from now","Population(in millions)","Increase(in millions)");
	for ( year = 1; year <= 75; year++)
	{
		newPop2 =newPop;
		newPop = newPop2*rate +newPop2;
		printf("%15d%30.2f%25.2f\n",year,newPop,newPop-newPop2);
	}
	system("pause");
	return 0;







}