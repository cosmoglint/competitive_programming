#include <iostream>
#include <array>

using namespace std;


//here check the middle element, if larger check the lower set, if smaller check the higher set.
int naive_method(int arr[],int val, int size){
  int a = 0;
  int b = size;
  while (a<=b){
    int k = (a+b)/2;
    if (arr[k] == val){
      return k;
    }
    if (arr[k] > val) b = k-1;
    else a = k+1;
  }
}

//here we make jumps of half the previous jumps
int fluid_method(int arr[],int val, int size){
  int k = 0;
  for (int b=size/2; b>=1 ; b /= 2){
    while (k+b < size && arr[k+b] <= val) k += b;
  }
  if (arr[k]==val) return k;

}


int main(){
  int arr[] = {1,3,5,5,7,7,8,10,12,15,22};
  int size = sizeof(arr)/sizeof(arr[0]);

  cout << fluid_method(arr,8,size);
}
