#include<iostream>
#include<fstream>
using namespace std;
void ArraySum(int n,int b,int c)
{ 
	int *a; 
	int sum=0;
	a=new int[n]; 
    ifstream input("1.txt");
    if(! input)
	{cout<<"文件不能打开！";}
	for(int i=b-1;input>>a[i],i<=c-1;i++)
        sum+=a[i];
	cout<<sum<<endl;
	input.close();
}
int main(void)
{   int n,b,c;
    cout<<"请输入数组长度和求和范围：数组长度、第几个数到第几个数"<<endl;
	cin>>n>>b>>c;
	cout<<"所求的数组和为:";
	ArraySum(n,b,c);
	return 0; 
}