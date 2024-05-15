#pragma once
using namespace std;
class CHealth {
public:
	CHealth() { nCHealth++; age = 20; beat5min = temp5min = nullptr; };
	CHealth(int a);

	~CHealth();

	static int nCHealth;
	float height, cel, faren, beat, pressure;
	float BMIvalue, healthAge;
	float* beat5min, * temp5min;

	void measure();
	void measure(int);
	int  run5min();

	char bloodType; // 货肺父电 public member data


private:
	int age;
	float weight;
	void cel2faren() { faren = cel * 9.0 / 5.0 + 32.0; }
	void faren2cel();
	void GetHealthAge() { healthAge = beat / pressure; }
	void GetBMI();
	void BloodPressure();//货肺父电 privait member function 
};