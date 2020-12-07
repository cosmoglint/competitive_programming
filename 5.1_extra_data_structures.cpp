#include <iostream>


using namespace std;

int main(){

  //bitset
  bitset<5> bs;
  bs[1] = 1;
  bs[3] = 1;
  cout << bs[2] << "\n";
  cout << bs[1] << "\n";

  //bitset initialization with string
  bitset<10> bs2(string("0010011010"));  // this method actually inverts the order of zeros and ones in the string

  cout << bs2.count() << "\n";  //this outputs the number of ones
  cout << bs[4] << "\n";
  cout << bs[2] << "\n";

  for (auto i=0; i<bs2.size(); i++){
    cout << bs2[i] << " ";
  }
  cout << "\n";


  //also entire bitsets can be performed bitwise logic
  bitset<10> b1(string("0011001101"));
  bitset<10> b2(string("1100110000"));

  cout << (b1&b2) << "\n";
  cout << (b1|b2) << "\n";
}
