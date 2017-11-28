#include <iostream>

using namespace std;
int main()
{
  float x1, x2, y1, y2;
  cout << "What is X1" << endl;
  cin >> x1;
  
  cout << "WHat is X2" << endl;
  cin >> x2;
  
  cout << "What is Y1" << endl;
  cin >> y1;
  
  cout << "What is Y2" << endl;
  cin >> y2;
  
  cout << "Coordinates: (" << x1 << ", " << y1 << ") " << "(" << x2 << ", " << y2 << ")"   << endl;
  
  float m,c ;
  //m = y2-y1 / x2-x1//
  
  /* finding c:
  
  y = m(x) + c
  y1 = (m * X1) + c
  y1 - (m * x1) = c
  
  */
  
  m = (y2-y1) / (x2 - x1);
  c = y1 - (m * x1);
  
  cout << "Gradient: " << m << endl;

  if (c < 0)
  {
    cout << "Equation of line: y = " << m << "x " << c << endl;
  }
  
  else
  {
    cout << "Equation of line: y = " << m << "x + " << c << endl; 
  }
  
  return 0;
}
