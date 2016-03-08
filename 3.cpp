#include<iostream>
#include<fstream>
using namespace std;
void ArraySum(int b,int c)
{ 
	int *a; 
	int sum=0;
	a=new int[70000]; 
    ifstream input("1.txt");
    if(! input)
	{cout<<"文件不能打开！";}
	for(int i=b-1;input>>a[i],i<=c-1;i++)
        sum+=a[i];
	cout<<sum<<endl;
	input.close();
}
int main(void)
{   int b,c;
    cout<<"原有数据共65536个，请输入求和范围：第几个数到第几个数"<<endl;
	cin>>b>>c;
	cout<<"所求的数组和为:";
	ArraySum(b,c);
	return 0; 
}