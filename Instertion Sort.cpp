#include <iostream>
using namespace std;

int main(){
	
	
	
	int array[]={7,3,5,8,2,9,4,15,6};
	int arraySize=sizeof(array)/sizeof(int);
	int temp=0;
	
	
	
		for(int i=0;i<arraySize;i++){
				
			for(int j=i+1;j<arraySize;j++){
				 	
				if(array[j]<array[i]){
				 				
				 	temp=array[i];
				 	array[i]=array[j];
				 	array[j]=temp;
						 }
						for(int i=0;i<arraySize;i++){
			
			                   cout << array[i] << ", ";
		}                  
		                    cout << endl;
											 	
				 }
				
			}  //Time Complexity: O(N^2) 
	
	/*	for(int i=0;i<arraySize;i++){
			
			cout << array[i] << ", ";
		}
			*/
	

	       return 0;
}
