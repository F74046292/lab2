#include<iostream>
#include<string>
using namespace std;
class BMI
{
	public:
		float getmass();
		void setmass(float m);
		float getheight();
		void setheight(float h);
		float setBMI();
		string range();
	private:
		float mass;
		float height;
		float BMI;
		string warn;
};
