#include <iostream>
using namespace std;
int main() {
  int i = 1;
  for (;;) {
    if (i <= 5) {
      cout << "hi" << i << endl;
    }
    // else
    // {
    //   break;
    // }
    i = i + 1;
  }
}