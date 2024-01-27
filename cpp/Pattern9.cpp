// PATTERN 9
/* For n = 4: 
          1 
        1 2 1 
      1 2 3 2 1
    1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter a value: ";
  cin >> n;
  for (int i=0;i<n;i++){
    //spaces
    for (int j=i+1;j<n;j++){
      cout << "*";
    }
    //left numbers
    for (int j=0;j<i+1;j++){
      cout << j+1;
    }
    //right numbers
    int k=i;
    for (int j=0;j<i;j++){
      cout << k;
      k--;
    }
    cout << endl;
  }
  return 0;
}
