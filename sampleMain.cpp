/***************************************************************************
 * Name: Example Header
 * 
 * Completed September 5th, 2019, 9:00am
 * 
 * Function: Description of function 
 * 
 * Input:  
 * 
 * Output:   
 * 
 * Additional Comments: 
 *                                
 *                                                   
 ***************************************************************************/
#include <cstdlib>
#include <iostream>
#include "myArray.h"

using namespace std;


/* 
 * DO NOT CHANGE THE MAIN!
 * You may comment portions out to test, but when you turn your 
 * code in it must have everything uncommented.
 * 
 * */
int main (int argc, char **argv)
{ 
	int size(0);
	cout << "Please enter the size of your array: ";
	cin >> size;
	
	double *arr;
	arr = new double[size];
	init(arr,size);
	cout << "The original array: ";
	print(arr,size);
	cout << "Size: " << size << endl;
	
	insert(10, 1, arr, size);
	insert(1, 9.3, arr, size);
	cout << "The new array: ";
	print(arr,size);
	cout << "Size: " << size << endl;
	
	remove(10, arr, size); 
	remove(5, arr, size);
	cout << "The new array: ";
	print(arr,size);
	cout << "Size: " << size << endl;

	cout << "The element at position 2 is: " << get(2,arr,size) << endl;
	cout << "The element at position 10 is: " << get(10,arr,size) << endl;
	int ans = find(9.3,arr,size); 
	
	if(ans != -1) cout << "9.3 was found at position: " << ans << endl;
	else cout << "9.3 was not found. " << endl;
	
	int ans2 = find(999,arr,size);
	if(ans2 != -1) cout << "999 was found at position: " << ans2 << endl;
	else cout << "999 was not found. " << endl;
	
	double *arr2 = new double[size];
	for(int i = 0; i < size; i++)
	{
		arr2[i] = 0;
	} 
	print(arr2,size);
	bool equal = equals(arr,size,arr2,size);
	
	if(equal) cout << "The arr and arr2 are equal." << endl;
	else cout << "The arr and arr2 are not equal." << endl;
	
	equal = equals(arr,size,arr,size);
	
	if(equal) cout << "The arr and arr are equal." << endl;
	else cout << "The arr and arr are not equal." << endl;
	
	delete [] arr2;
	delete [] arr;  
	
	return 0;
}


