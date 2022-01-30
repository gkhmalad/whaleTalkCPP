// Prints only the vowels from the input strings
// Doubles e's and u's

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string input = "";

  cout << "Please enter the input string: ";
  cin.ignore();
  getline(cin, input, '\n');

  vector<char> vowels = {'a','e','i','o','u'};
  vector<char> result;

  for(int i = 0; i < input.length(); i++){
    for(int j=0; j < vowels.size(); j++){

      if(input[i] == vowels[j]){

        result.push_back(vowels[j]);

        if(input[i] == 'e' || input[i] == 'u')
          result.push_back(vowels[j]);      

        break;
      }
    }
  }

  cout << "Whale translation: ";
  for(int i=0; i<result.size(); i++){

    cout << result[i];
  }

  cout << endl;

  return 0;
}