/**************************
 * Name: Riley Conant
 * Date: 10/2/2019
 * Function: To create a header file that has the same functionality of an arraylist while using pointer arrays
 * Input: Varies depedning on how big the array is made and what the user wants to put in to the array
 * Output: The modified versions of the array, where a number is found within the array and if the arrays are equal
 * 
 * ************************/
#include <cstdlib>
#include <iostream>

using namespace std;
//Insert method
void insert(int index, double num, double *&arr, int &size)
{
	//Print out error if the index is out of bounds of the array
	if(index > size+1)
	{
		cout << "Index is not within bounds of 0 ... n" << endl; 
	}
	else
	{
		//Increase size
		size = size+1;
		//Create the new pointer array and resize the original pointer array
		double *arr1;
		arr1 = arr;
		arr = new double[size];
		int j(0);
		//Iterate through the array adding the values at the specified indexes
		for(int i = 0;i<size;i++)
		{
			//Add the new number at the specific index
			if(i == index)
			{
				arr[i] = num;
						
			}
			else
			{
				arr[i] = arr1[j];
				j++;
			}
		}
		//Delete the arr1 so that there is no memory leaks
		delete [] arr1;	
	}

}
//Remove method
void remove(int index, double *&arr, int &size)
{
	//Print out error if the index is out of bounds
	if(index >= size)
	{
		cout << "Index is not within bounds 1....n-1" << endl;
	}
	else
	{	
		//Create new pointer array and resize the original array
		double *arr1;
		arr1 = arr;
		arr = new double[size-1];
		int j(0);
	for(int i = 0; i < size-1; i++)
		{
			//remove the specific value at the index specified
			if(index == i)
			{
				j++;
				arr[i] = arr1[j];
			}
			else
			{
				arr[i] = arr1[j];
			}
			j++;
		} 
		//Decrease size and delete the new pointer array
		size = size-1;
		delete [] arr1;
	}
}
//Get Method
int get(int index, double *arr, int size)
{
	//Checks to see if the index is out of bounds of the array and returns the error code 
	if(index > size)
	{
		return -1; 
	}
	else
	{
		//Iterates through the array until the value is found and the value at the index is returned
		for(int i = 0; i < size; i++)
		{
			if(index < size)
			{
				return arr[index]; 
			}
		}
	}
}
//Clear Method
void clear(double *&arr, int &size)
{
	//Deletes the array and sets the size to 0
	delete [] arr;
	size = 0;	
}
//Find Method
int find(double num, double *arr, int size)
{
	//Iterates through the array until the value is found and the index is returned
	for(int i =0; i < size; i++)
	{
		if(arr[i] == num)
		{
			return i;
		}
	}
	//If value is not found -1 is returned
	return -1;
}
//Bool method 
bool equals(double *arr1, int size1, double *arr2, int size2)
{
	int i = 0;
	//While loop to make sure that the checks are within both bounds 
	while(i < size1 && i < size2)
	{
		//Increase the index if the values are equal 
		if(arr1[i]== arr2[i])
		{
			i++;
		}
		else
		{
			//Return false because the values are not equal to each other
			return false;
		}
	} 
	//Return true since all the values are equal to each other
	return true;
			
}
//Init Method 
void init(double *arr, int size)
{
	//Print out prompt that asks for the certain ammount of elements for the array
	cout << "Please enter " << size << " elements for the array" << endl;
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
//Print method
void print(double *arr, int size)
{
	//Iterates through the array printing each element 
	for(int i = 0;i <size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
