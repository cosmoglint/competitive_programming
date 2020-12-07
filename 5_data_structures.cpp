#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    cout << v.back() << "\n"; // prints last element
    cout << v[0] << "\n"; // prints first element
    cout << *v.begin() << "\n"; // this also prints the first number but with pointer

    for (int i=0; i < v.size(); i++){  // iterating the vector
      cout << v[i] << " ";
    }

    for (auto x: v){
      cout << x << " ";  //this is another way to iterate
    }
}
