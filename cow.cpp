#include<iostream>
#include<vector>
#include"cow.h"
#include<iostream>
using namespace std;
int cow::count(int weight_in[8])
{
	int total;
	total=weight_in[3]+weight_in[4]+weight_in[5]+weight_in[6]+weight_in[7];
	return total;
}
