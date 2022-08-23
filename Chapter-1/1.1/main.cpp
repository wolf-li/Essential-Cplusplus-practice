/* 
practice 1.1
write the main() program

date: 2022-8-23
*/

# include <iostream>
# include <string>
using namespace std;

int main(){
  string user_name;
  cout << "Please enter your first name: ";
  cin >> user_name;
  cout << '\n'
       << "Hello, "
       << user_name
       << " ... and goodbye!\n";
}
