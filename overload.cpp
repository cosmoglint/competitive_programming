#include <iostream>

using namespace std;

struct Poin {
  int x,y;
  Poin(int xxx,int yyy){
    x = xxx;
    y = yyy;
  }

  bool operator<(const Poin &q){
    if (x != q.x) return x < q.x;
    else return y < q.y;
  }

  Poin operator+(const Poin &q){
    return Poin(x+q.x,y+q.y);
  }
};

int main(){
  struct Poin p1 = Poin(3,2);
  struct Poin p2 = Poin(5,3);
  cout << (p1<p2);
  Poin p3 = p1 + p2;
  cout << p3.x << " "<< p3.y;

}
