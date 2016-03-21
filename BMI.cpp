#include<iostream>
#include"BMI.h"
#include<string>
using namespace std;

float BMI::getmass()
{
	return mass;
}
void BMI::setmass(float m)   
{
	mass = m;
}
float BMI::getheight()
{
	return height;
}
void BMI::setheight(float h)
{
	height=h;
}
float BMI::setBMI()
{
	return (mass*10000)/(height*height);
}
string BMI::range()
{	
	if(setBMI()<15)
	{
		cout<<"very severely underweight";
	}
	else if(15<= setBMI()&& setBMI() <16)
	{
		warn="severely underweight";
	}
	else if(16<= setBMI()&& setBMI()<18.5)
	{
		warn="underweight";
	}
	else if(18.5<= setBMI()&& setBMI()<25)
	{
		warn="normal";
	}
	else if(25<= setBMI()&& setBMI()<30)
	{
		warn="overweight";
	}
	else if(30<= setBMI()&& setBMI()<35)
	{
		warn="obese class I(moderately obese)";
	}
	else if(35<= setBMI()&& setBMI()<40)
	{
		warn="obese class II (severely obese) ";
	}
	else if(40<= setBMI())
	{
		warn="obese class III (very severely obese) ";
	}
	return warn;
}
