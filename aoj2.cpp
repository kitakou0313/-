#include <iostream>
using namespace std;

int main() {
  int x,y;
  while (1) {

    cin >> x >> y;
    if ((x == 0)&&(y == 0)) {
      /* code */
      break;

    }
    if (x >= y) {
      cout << y<< " "<< x << '\n';
      /* code */
    }else{
      cout << x<< " "<<y << '\n';
    }
  }

  return 0;
}
