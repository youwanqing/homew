#include<iostream>
#include<fstream>
#define MAX 65536
using namespace std;
void ArraySum(int n)
{ 
	int *a; 
	int sum=0; 
	a=new int[n]; 
    ifstream input("1.txt");
    if(! input)
	{cout<<"文件不能打开！";} 
	for(int i=0;input>>a[i],i<n;i++)
	sum+=a[i];
    cout<<sum<<endl;
	input.close();
}
int main(void)
{   int a;
	cout<<"请输入需要求和的数组长度:";
	cin>>a;
	if(a<1||a>MAX)
		cout<<"超出范围!";
	cout<<"所求的数组和为:";
	ArraySum(a);
	return 0; 
}