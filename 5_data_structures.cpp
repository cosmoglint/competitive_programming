#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){

  //vectors
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    cout << v.back() << "\n"; // prints last element
    cout << v[0] << "\n"; // prints first element
    cout << *v.begin() << "\n"; // this also prints the first number but with pointer

    v.pop_back();  //removes last element
    for (int i=0; i < v.size(); i++){  // iterating the vector
      cout << v[i] << " ";
    }
    cout << "\n";
    for (auto x: v){
      cout << x << " ";  //this is another way to iterate
    }
    cout << "\n";


    //sets
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    cout << s.count(2) << "\n"; // prints 1 because sets cant have duplicates
    cout << s.count(4) << "\n"; // prints 0 because 4 is not present
    s.erase(5);
    s.size(); // 2


    //maps
    map<string,int> m;
    m["hello!"] = 10;
    m["gg"] = 2;
    cout << m.count("gg") << "\n"; // 1 key exists
    cout << m.count("there?") << "\n"; // 0 doesnt exist
    cout << m["check"] << "\n"; // prints default value for int 0
}
