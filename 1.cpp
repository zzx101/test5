
#include<iostream> 
using namespace std; 
int main() 
{ 
 int a[10],i;
 cout << "请输入十位数，用空格隔开:";
 cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]; 

    
 for(i=9;i>=0;i--){
 cout<<a[i]<<" "; 

  } 
  
 return 0; 
}
