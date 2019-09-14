// This program calculates a person's height in feet (') and inches (").


#include <iostream>

int main()
{

  int height;
  double height2;
  double height3;

  std::cout << "Enter the person's height in inches" << std::endl;
  std::cin >> height;

  height2 = height / 12; //the interger divison makes it so that we get an
  //integer as the answer
  height3 = height % 12; //and with this we are able to know that the outcome of
  // this will result in feet and inches as the answer

  std::cout << " That person is " << height2 << "\'" << height3 << "\"" << std::endl;

  return 0;

}
