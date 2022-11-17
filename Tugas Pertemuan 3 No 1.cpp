#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float alas = 8, tinggi = 10;
	float sisi_miring;
	
	sisi_miring = sqrt ( pow( alas,2 ) + pow( tinggi,2 ));
	
	cout<<" Sisi Miring Segitiga Adalah = "<<sisi_miring<<endl;
	return 0; 
}