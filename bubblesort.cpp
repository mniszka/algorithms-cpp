//The user put some numbers and the program give them from the smallest one to the biggest by using bubble sort

#include <iostream>
using namespace std;

//sorting numbers-  bubble sort:
void sort(int arr[], int size){
int a;
for(int i=0; i<(size-1); i++){
  for(int i=0; i<(size-1); i++){
    if(arr[i]> arr[i+1]){
      a= arr[i];
      arr[i]= arr[i+1];
      arr[i+1]= a;
  }
  }
}

//show the result- sorting numbers from the smallest to the biggest:
  cout<<"sorting numbers: ";
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";

}
}

int main(){
int size;
cout<<"How many numbers? ";
cin>>size;
int *arr= new int[size];

//get numbers:
for(int i=0; i<size; i++){
  cout<<"put "<<i+1<<" number: ";
  cin>>arr[i];
}

//numbers given by the user:
cout<<"your numbers: ";
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;

sort(arr, size);

delete[] arr;

}
