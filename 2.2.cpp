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
	{cout<<"�ļ����ܴ򿪣�";} 
	for(int i=0;input>>a[i],i<n;i++)
	sum+=a[i];
    cout<<sum<<endl;
	input.close();
}
int main(void)
{   int a;
	cout<<"��������Ҫ��͵����鳤��:";
	cin>>a;
	if(a<1||a>MAX)
		cout<<"������Χ!";
	cout<<"����������Ϊ:";
	ArraySum(a);
	return 0; 
}