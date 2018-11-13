#include <iostream>

int gcd_naive(int a, int b) {
  /*int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;*/
  int d,e,c;
  c = 1;
  d = a > b ? a : b;
  e = a > b ? b : a;
  /*if(a > b){
    d = a;
    e = b;
  } 
  else
  {
  d = b;
  e = a;
  }*/
  //arrange bigger and smaller
  while (e != 0){
      c = d % e;
      d = e;
      e = c;
    }
    return d;
  
}

int main() {
  int a, b, c;
  long long d;
  std::cin >> a >> b;
  c = gcd_naive(a, b);
  d = a/c;
  std::cout << d*b << std::endl;
  return 0;
}
