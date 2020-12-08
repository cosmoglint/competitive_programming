#include <iostream>
#include <vector>

using namespace std;

void printer(vector v){
  for (int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  "\n"
  return
}

void search(int k, vector subset){
  if (k==n){
    printer(subset);
  }
  else{
    search(k+1,subset);
    subset.push_back(k);
    search(k+1,subset);
    subset.pop();
  }
}


int main(){
  vector<int> the_v = {0,1,2};
  search(0,)
}
