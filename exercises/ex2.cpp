/*
 Improve this program replacing if/else if with an array.

 Hint:  arr[3] = "Thursday";
*/

#include <iostream>
using namespace std;

int main()
{
  int week;

  cout << "Enter week number(1-7): " << endl;
  cin >> week;

  string days[] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  if (week >= 1 && week <= 7)
  {
    cout << days[week]<<endl;
  }
  else
  {
     cout << "Invalid input! Please enter week number between 1-7." << endl;
  }

  return 0;
}