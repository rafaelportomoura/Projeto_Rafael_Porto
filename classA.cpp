#include <iostream>

using namespace std;

class A {
private:
  int A1;
  float A2;
public:
  A() {}
  int getA1() { return A1; }
  void setA1( int A1 ) { this->A1 = A1; }
  float getA2() { return A2; }
  void setA2( float A2 ) { this->A2 = A2; }
  void MA1() { cout << "MA1"; }
  void MA2() { cout << "MA2"; }
  void MA3() { cout << "Alteração a classe A partir do clone"; }
};

int main() {

  return 0;
}