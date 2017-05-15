#include <iostream>

int get_change(int m) {
  int a,b,c,n;
  if(m > 0){
  	a = m % 10;
  	b = a % 5;
  	c = b % 1;
  	if(c == 0)
  		n = (m - a)/10 + (a - b)/5 + b;//write your code here
    return n;
}
  else 
  	return 0;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
