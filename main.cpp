// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include "lang/en.h"

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  cout << MESSAGE_WELCOME << endl;

  string s1;
  string s2;
  
  cout << PROMPT_ENTER_PHRASE_1;
  getline(cin, s1);
  cout << LABEL_YOU_ENTERED << s1 << endl;

  cout << PROMPT_ENTER_PHRASE_2;
  getline(cin, s2);
  cout << LABEL_YOU_ENTERED << s2 << endl;

  // https://en.cppreference.com/cpp/string/basic_string/find
  
  size_t s2_in_s1 = s1.find(s2);
  size_t s1_in_s2 = s2.find(s1);

  if(s2 == s1) {
    cout << MESSAGE_BOTH_PHRASES_MATCH << endl;
  } else if(s2_in_s1 != std::string::npos) {
    cout << s2 << MESSAGE_IS_FOUND_IN << s1 << endl;
    cout << s1.substr(s2_in_s1) << endl;
  } else if(s1_in_s2 != std::string::npos) {
    cout << s1 << MESSAGE_IS_FOUND_IN << s2 << endl;
    cout << s2.substr(s1_in_s2) << endl;
  } else {
    cout << MESSAGE_NO_MATCHES << endl;
  }

  cout << MESSAGE_THANK_YOU << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
