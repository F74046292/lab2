#include<iostream>
#include<cstdlib>
#include<fstream>
#include"BMI.h"
#include<string>
using namespace std;
int main()
{
	float h,m;
	BMI bmi;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out", ios::out);
	if(!outFile)
	{
		cerr << "Failed opening" << endl;
		exit(1);
	}
	while(inFile>>h>>m && h!=0 && m!=0)
	{
		bmi.setheight(h);
		bmi.setmass(m);
		outFile<<bmi.setBMI()<<"\t"<<bmi.range()<<endl;
	}
	return 0;
}

