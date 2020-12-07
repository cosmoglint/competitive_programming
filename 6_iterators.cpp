#include <iostream>
#include <algorithm>
#include <random>
#include <vector>

using namespace std;

int main(){
  vector<int> v = {1,3,5,2,3,4,7};
  unsigned seed = 0;

  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  shuffle(v.begin(),v.end(), default_random_engine(seed));  // this is part of algorithm module

  for (auto i=v.begin(); i!=v.end(); i++){
    cout << *i << " ";
  }
}
