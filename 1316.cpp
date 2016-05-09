//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool ans[10005] ;
int main()
{
	for (int i = 0; i < 10005; i++) ans[i] = true;
	for (int i = 1; i <= 10000; i++) {
		int temp=0;
		int cp = i;
		for (int j = 3; j >= 0; j--) {
			double z = pow(10, j);
			if ((int)cp / z) {
				temp += cp/z;
				cp -= ((int)(cp / z))*pow(10, j);
			}
		}
		temp += i;
		if (temp > 10000) break;
		if (ans[temp]) ans[temp] = false;
	}
	for (int i = 1; i <= 9993; i++) {
		if (ans[i]) cout << i << endl;
	}
	
	return 0;
}