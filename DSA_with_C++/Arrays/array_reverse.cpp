#include <iostream>
using namespace std;

//To reverse an array using swapping

void reverseArray(int arr[], int n){

	int s=0;
	int e=n-1;

	while(s<e)
	{
		swap(arr[s],arr[e]);
		s+=1;
		e-=1;
	}
}


int main()
{

	int arr[]= {11,12,13,14,15,16,17};
	int n = sizeof(arr)/sizeof(int);

	for(int i=0;i<n;i++){
		cout <<arr[i]<<",";
	}

	cout << endl;
	reverseArray(arr,n);
        
	 for(int i=0;i<n;i++){
                cout <<arr[i]<<",";
        }
        return 0;
}
