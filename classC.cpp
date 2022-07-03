#include <iostream>

using namespace std;

class C {
  private:
  int C1;
  string C2;
  public:
  C() {}
  int getC1() { return C1; }
  void setC1( int C1 ) { this->C1 = C1; }
  string getC2() { return C2; }
  void setC2( string C2 ) { this->C2 = C2; }
  void MC1() { cout << "MC1"; }
  void MC2() { cout << "MC2"; }
  void MC3() { cout << "MC3"; }
};

int main() {

  return 0;
}