#include <iostream>
#include <math.h>
using namespace std;
int NotRep(int a[],int n){
	int *b= new int[n];
	int k=0;
	bool flag=false;
	for(int i=0;i<n;i++){
		int temp=a[i]*a[i]; //a[i]**2
		for(int j=0;j<k;j++ ){
			flag=false;
			if(temp==a[j]){
				flag=true;
				break;
			}
		}
		if(flag==true){
			
		}
		else{
			k++;
			a[k-1]=temp;
		}
	}
	return k;
}
int NotRepAI(int a[],int n){
	int i=0,j=n-1;
	int count=0;
	while(i<j){
		
		if(a[i]==a[i+1]){
			i++;
		}
		if(a[j]==a[j-1]){
			j--;
		}
		else{
			if(abs(a[i])>abs(a[j])){
				cout<<a[i]<<" "<<a[j]<<endl;
				cout<<"i "<<i<<">  j "<<j<<endl;
				i++;
				count++;
			}
			else{
				if(abs(a[i])<abs(a[j])){
					cout<<"i "<<i<<"<  j "<<j<<endl;
					j--;
					count++;
				}
				else{
					if(abs(a[i])==abs(a[j])){
						cout<<"i "<<i<<"=  j "<<j<<endl;
						i++;
						j--;
						count++;
				    }
				}
			}
		}	
	}
	return ++count;
}
int main(){
	int a[8]={-10, -10, -5, 0, 1, 5, 8, 10};
	int b[8]={-10, -10, -5, 0, 1, 5, 8, 10};
	cout<<NotRep(a,8)<<endl;
	cout<<NotRepAI(b,8)<<endl;
} 
