#include<iostream>
using namespace std;
int main()
{
	int i,a[10],j,p,w;
	cout<<"����ʮλ���֣��м��ÿո����:";
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9];
	j=a[0];
	for(i=0;i<10;i++)
	{
		
		if(a[i]>j)
		{
			j=a[i];
			p=i;
			w=i+1;
			
		}
	} 
	cout<<"MAX:"<<j<<"�±꣺"<<p<<"λ��:"<<w<<endl;
	return 0;
	
}
  
