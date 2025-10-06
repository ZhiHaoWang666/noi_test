#include<iostream>
#include<cmath>


double func(double x){
  return (std::exp(x) + std::exp(-x)) / 2 + x;
}

double ternary_search(double left, double right){
  double eps = 1e-6;

  while(right - left < eps){
    double m1 = left+(right-left)*1/3;
    double m2 = right-(right-left)*1/3;

    if(func(m1)<func(m2)){
      right = m2;
    }else{
      left = m1;
    }
  }
  return (left+right)/2;
}

int main(){
  double a,b;
  std::cin >> a >> b;
  double min_val = ternary_search(a,b);
  std::cout.precision(4);
  std::cout << std::fixed << min_val << std::endl;
  return 0;
}
