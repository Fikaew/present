#include <iostream>
#include <math.h>
#include <string>
double sumCal(double *input);
double sumpowCal(double* input);
double avgCal(double sum);
double sdCal(double sumpow, double sum);
int main()
{
	double input[5];
	const char* text[5] = { "First","Second","Third","Forth","Fifth" };
	for (int i = 0; i < 5; i++)
	{
		printf("Input The %s Number :",text[i]);
		do 
		{
			scanf_s("%lf", &input[i]);
			if (input[i] < 0)
				printf("Please Input The %s Number Again :", text[i]);
		} while (input[i] < 0);
	}
	printf("Sumary of The Numbers : %lf\n", sumCal(input));
	printf("Average of  The Numbers : %lf\n", avgCal(sumCal(input)));
	printf("SD of The Numbers : %lf\n", sdCal(sumpowCal(input),sumCal(input)));
	return 0;
}

double sumCal(double* input)
{
	double sum = 0, result;
	for (int i = 0; i < 5; i++)
	{
		sum += *input;
		input++;
	}
	return sum;
}

double sumpowCal(double* input)
{
	double sumpow = 0;
	for (int i = 0; i < 5; i++)
	{
		sumpow += pow(*input, 2);
		input++;
	}
	return sumpow;
}

double avgCal(double sum)
{
	return sum / 5;
}

double sdCal(double sumpow, double sum)
{
	return sqrt((5 * sumpow - pow(sum, 2)) / (5 * (4)));
}
