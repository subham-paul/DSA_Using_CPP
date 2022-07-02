#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many number you added ";
    cin>>n;
    int number[n];
    for(int i = 0; i<n; i++){
        cout<< "enter your value ";
        cin>>number[i];
    }
    return 0;
}

// CPP program to find minimum (or maximum) element 
// in an array. 
// #include <iostream> 
// using namespace std; 

// int getMin(int arr[], int n) 
// { 
// 	int res = arr[0]; 
// 	for (int i = 1; i < n; i++) 
// 		res = min(res, arr[i]); 
// 	return res; 
// } 

// int getMax(int arr[], int n) 
// { 
// 	int res = arr[0]; 
// 	for (int i = 1; i < n; i++) 
// 		res = max(res, arr[i]); 
// 	return res; 
// } 

// int main() 
// { 
// 	int arr[] = { 12, 500, 45, 67, 1 }; 
// 	int n = sizeof(arr) / sizeof(arr[0]); 
// 	cout << "Minimum element of array: " << getMin(arr, n) << "\n"; 
// 	cout << "Maximum element of array: " << getMax(arr, n); 
// 	return 0; 
// } 
/* 
#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			
		}
		return max;
	}
	
}
int main(){
	int n;
    cout<<"how many number you added ";
    cin>>n;
    int number[n];
    for(int i = 0; i<n; i++){
        cout<< "enter your value ";
        cin>>number[i];
    }
	n = sizeof(number) / sizeof(number[0]);
	cout<<"maximum value "<< largest(arr , n) <<endl;
	return 0;
} */