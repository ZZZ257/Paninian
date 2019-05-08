#include<iostream>
#include<Eigen/Dense>
#include<math.h>
double f(double C0,double x, double h, double l, double D ,double t);
using Eigen::MatrixXd;
int main()
{


}
double f(double C0,double x, double h, double l, double D ,double t)
{
  long long n,i;
  double m1,m2,m,s=0;
  m1=(10*l/h);
  m2=(10*l/x);
  m=m1>m2?m1:m2;
  n=m;
  for (i=-n;i<=n;i++)
  {
    s=s+erf((h+2*n*l-x)/(2*sqrt(D*t)));
  }
  s=s*C0/2;
  return s;


}
