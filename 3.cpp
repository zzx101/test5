#include<iostream>
using namespace std;
int main()
{
	//��һ�Դ����ӵ��������²�����һ�ѣ���һ����һ�� С���ӣ��������º�������²�����һ��
	 
	int i,n,t[3]={0,1,1};
	cout<<"����N��ֵ��";
	cin>>n;
	
	for(i=3;i<=n;i++)
	{
		t[i]=t[i-1]+t[i-2];		
		
	}
	cout<<"���յĶ���:"<<t[n]<<endl;
	  
	return 0;
}

