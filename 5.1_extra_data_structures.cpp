#include <iostream>
#include <bitset>
#include <queue>
#include <stack>

using namespace std;

int main(){

  //deque
  deque<int> dq;
  dq.push_back(4);
  dq.push_front(7);
  dq.push_back(8);
  cout << dq.front() << "\n";


  //stack
  stack<int> st;
  st.push(5);
  st.push(4);
  st.push(10);
  st.push(2);
  cout << st.top() << "\n"; // 2
  st.pop();
  cout << st.top() << "\n"; // 10

  //queue
  queue<int> q;
  q.push(3);
  q.push(5);
  q.push(2);
  cout << q.front() << "\n"; // returns 3
  q.pop();
  cout << q.front() << "\n"; // returns 5

  //priority queue
  priority_queue<int> pq;
  pq.push(3);
  pq.push(7);
  pq.push(5);
  pq.push(1);
  cout << pq.top() << "\n"; // returns 7 because its larger and has more priority
  pq.pop(); // this pops 7
  cout << pq.top() << "\n"; // 5
  pq.push(6);
  cout << pq.top() << "\n"; // 6

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
