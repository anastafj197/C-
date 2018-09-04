# Frank Anastasia 
# Reviewing basics 

include <iostream>
using namespace std;

int main() {
  int value = 6;
  string text1 = "Bunch";
  string text2 = " of stuff";
  string things = text1 = text2;
  
  # Insertion operator (<<)
  cout << value << endl;
  cout << things << endl; 
 
  # Flush is no new line 
  cout << "Enter anything" << flush; 
 
  string input; 
  
  # Extraction operator (>>) user input 
  cin >> input; 
  
  cout << input << endl; 
  return 0; 
}
