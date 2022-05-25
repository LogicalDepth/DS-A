//To search whether the number entered by the user is present in array by using linear search




#include <iostream>   // declaring header files

using namespace std;


//declaring function for sorting

int linear_search(int arr[], int n, int k)
{

	for (int i=0; i<n; i++)
	{
		if(arr[i]==k)
		{
			return i;       // returns the postion at which result is found
		}
	}
	return -1;
}


int main() 
	 {
		 

		 int key;          //variable for storing number to be searched
		 
		
		 //creating a static array
                 int arr[] = {11,23,45,32,55,42,53,64,33,31};
		 
		 cin>>key;

		 int n = sizeof(arr)/sizeof(int);     //for number of elements in array

		 int index= linear_search(arr ,n ,key);
		 
		 if(index!=-1)
		 {
                   cout << key <<" is present at index "<<index<< endl;
		 }
		 else
		 {
			 cout << key << "is not present "<< endl;
		 }
	 }
