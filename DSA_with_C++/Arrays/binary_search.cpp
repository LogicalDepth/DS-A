#include <iostream>

using namespace std;

//function for binary search

int binary_search(int arr[], int n, int key)
{
	int s=0;             //starting index
	int e = n-1;         //ending index



         while (s<=e)
	 {
		int mid = (s+e)/2;
		 if (arr[mid] == key){
			 return mid;
		 }
		 else if (arr[mid] > key)
		 {
			 e=mid-1;
		 }
		 else
		 {
			 s=mid+1;
                 }

		}
	 return -1;
}

int main()
{
	int arr[]= {1,3,4,5,7,8,9,11,14,16,22};
	int n = sizeof(arr)/sizeof(int);
	
	// number to be searched 
	int key;
	cin>>key;

	int index = binary_search(arr, n, key);
	if(index!=-1){
		cout<<key<< " is present at index "<<index<<endl;
	}
	else{
		cout << key <<" is NOT Present!"<<endl;
	}

	return 0;
}




