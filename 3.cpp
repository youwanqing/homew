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
	{cout<<"�ļ����ܴ򿪣�";}
	for(int i=b-1;input>>a[i],i<=c-1;i++)
        sum+=a[i];
	cout<<sum<<endl;
	input.close();
}
int main(void)
{   int b,c;
    cout<<"ԭ�����ݹ�65536������������ͷ�Χ���ڼ��������ڼ�����"<<endl;
	cin>>b>>c;
	cout<<"����������Ϊ:";
	ArraySum(b,c);
	return 0; 
}