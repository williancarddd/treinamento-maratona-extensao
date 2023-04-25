#include <bits/stdc++.h>
using namespace std;

int main(){
  int size_ar;
  int difference = 0;
  vector<int> numbers;

  string input;
  getline(cin, input);

  stringstream ss(input);
  ss >> size_ar;

  getline(cin, input);
  ss.clear();
  ss.str(input);

  for (int i = 0; i < size_ar; i++){
    int element_a;
    ss >> element_a;
    numbers.push_back(element_a);
  }

  for(int i = 0; i < size_ar; i++) {
    if(i == size_ar-1)  break;
    if(numbers[i] > numbers[i+1]){
      difference += numbers[i] - numbers[i+1];
      numbers[i+1] = numbers[i];
    } 
  }

  cout << difference;
  return 0;
}
