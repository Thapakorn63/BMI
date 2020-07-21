#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string name;
	float weight;
	float high;
	cout<<"Enter Name :";
	cin>>name;
	cout<<"Enter Weight:";
	cin>>weight;
	cout<<"Enter High:";
	cin>>high;
	cout<<"BMI ="<<weight/pow(high/100,2);








	return(0);
}