#include <iostream>
#include <vector>

using namespace std;


vector<int> subset;
int n = 3;

void printer(vector<int> v){
  for (int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << "\n";
  return;
}

void search(int k){
  if (k==n){
    printer(subset);
  }
  else{
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
  }
  return;
}


int main(){
  vector<int> the_v = {0,1,2};
  search(0);
}
