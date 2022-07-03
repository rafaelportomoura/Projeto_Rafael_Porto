#include <iostream>

using namespace std;

class D {
  private:
  int D1;
  string D2;
  public:
  int getD1() { return D1; }
  void setD1( int D1 ) { this->D1 = D1; }
  string getD2() { return D2; }
  void setD2( string D2 ) { this->D2 = D2; }
  void MD1() { cout << "MD1"; }
  void MD2() { cout << "MD2"; }
  void MD4() { cout << "MD4"; }
};

int main() {
  return 0;
}
