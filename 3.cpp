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
	{cout<<"�ļ����ܴ򿪣�";}
	for(int i=b-1;input>>a[i],i<=c-1;i++)
        sum+=a[i];
	cout<<sum<<endl;
	input.close();
}
int main(void)
{   int n,b,c;
    cout<<"���������鳤�Ⱥ���ͷ�Χ�����鳤�ȡ��ڼ��������ڼ�����"<<endl;
	cin>>n>>b>>c;
	cout<<"����������Ϊ:";
	ArraySum(n,b,c);
	return 0; 
}