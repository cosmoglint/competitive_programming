#include <iostream>

using namespace std;

struct Poin {
  int x,y;
  Poin(int xxx,int yyy){
    x = xxx;
    y = yyy;
  }

  // bool operator<(const Point &q){
  //   if (x != p.x) return x < p.x;
  //   else return y < p.y;
  // }
};

int main(){
  struct Poin p1 = Poin(3,2);
  // struct Point p2 = Point(5,3);
  // struct Poin p1 = {3,4};
  // cout << (p1<p2);
  cout << p1.x;
}


// #include <iostream>
// using namespace std;
//  struct Rectangle    {
//    int width, height;
//   Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//   void areaOfRectangle() {
//     cout<<"Area of Rectangle is: "<<(width*height); }
//  };
// int main(void) {
//     struct Rectangle rec=Rectangle(4,6);
//     rec.areaOfRectangle();
//    return 0;
// }
