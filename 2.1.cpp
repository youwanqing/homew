#include<iostream>
using namespace std;

int ArraySum(int a[],int length)
{   int sum=0;
	for(int i=0;i<length;i++)
	     sum+=a[i];
	return sum;
}
int main(void)
{   int a[]={-2574,-4010,8243,771,2447,-5197,2556,8044,3314,3617,6065,-2817,3131,
		6318,2186,-113,629,-2582,-37,-1520,164,2055,-5936,5912,1717,5988,4781,5757,
		892,-4394,8034,2213,-1080,-2080,5364,106,2657,566,3940,-5116,4583,1806,6555,
        2621,-7197,528,1626,18,1049,6243,3198,4397,-1325,9087,936,-6291,662,-178,135,
		-3473,-2385,-165,1713,-7949,-4234,1138,2212,104,6968,-3632,3801,1137,-1296,-1215,
       4272,6223,-5922,-7723,7044,-2938,-8180,1356,1159,-4022,-3713,1158,-8715,-4081,-2541,
	   -2555,-2284,461,940,6604,-3631,3802,-2037,-4354,-1213,767};
	int length,s;
	cout<<"请输入需要求和的数组长度:"<<'\n';
	cin>>length;
	if(length<1||length>100)
		cout<<"超出长度范围！"<<'\n';
	s=ArraySum(a,length);
	cout<<s<<'\n';
	return 0;
}
