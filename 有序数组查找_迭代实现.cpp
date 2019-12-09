#include <iostream>
using namespace std; 
int FindK(int a[],int k,int n){
	int high,low;
	high=n-1;
	low=0;
	while(high>low){
		int mid=(high+low)/2;
		if(a[mid]>a[low]){
			if(a[mid]>=k&&a[low]<=k){
				high=mid;
				low=low;
			}
			else{
				low=mid+1;
				high=high;
			}
	    }
	    else{
	    	if(a[mid]<k&&a[high]>=k)
	    	{
	    		high=high;
	    		low=mid+1;
			}
			else{
				high=mid;
	    		low=low;
			}
		}
		
	}
	if(a[high]!=k){
		high=-1;
	}
	return high;
}
int main(int argc, char** argv) {
	int a[6]={5,6,9,1,1,4};
	cout<<FindK(a,6,6);
	return 0;
}

