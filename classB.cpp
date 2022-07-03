#include <iostream>

using namespace std;

class B {
  private:
  int B1;
  float B2;
  public:
  B() {}
  int getB1() { return B1; }
  void setB1( int B1 ) { this->B1 = B1; }
  float getB2() { return B2; }
  void setB2( float B2 ) { this->B2 = B2; }
  void MB1() { cout << "MB1"; }
  void MB2() { cout << "MB2"; }
  void MB3() { cout << "MB3"; }
};

int main() {

  return 0;
}