#include <iostream>

using namespace std;

int main(){
  int arr [8] = {-1,2,4,3,5,2,-5,2};
  int sums = 0;
  int ans = 0;
  for (int k = 0; k < sizeof(arr)/sizeof(arr[0]) ; k++){
    sums = max(arr[k],sums+arr[k]);
    ans = max(ans, sums);
  }

  cout << ans;
}
