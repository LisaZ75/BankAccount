#include <iostream>
#include <map> 

using namespace std;

map<string, string> accountinfo = {"Test123", "03042024"};

// void signup(){
//   string name;
//   string userpassword;
//   cout << "Create a user name" << endl;
//   cin >> name;
  
//   cout << "Create a password" << endl;
//   cout << "Please make sure the password includes numbers, characters and uppercase. And 5-7 characters" << endl;
//   cin >> userpassword;
//   //map<string, string> accountinfo = {};
//   accountinfo.insert({name, userpassword});
// }
  
// bool usernamecheck(string user){
//   return true;
// }

// bool passwordcheck(string key){
//   return false;
// }


// void signin(){
//   string username;
//   string password;
//   cout << "Please enter your username: ";
//   cin >> username;
//   cout << endl;
//   //usernamecheck(username);
//   bool pass = true;
//   while (pass){
//     if (usernamecheck(username) == true){
//       cout << "Please enter your password: " << endl;
//       cin >> password;
//       if (passwordcheck(password) == true){
//         cout << "Welcome, what can I help you. please select in the menu.";
//         pass = false;
//       }
//       else{
//         cout << "Wrong password. Please try again." << endl;
//       }
//     }
//     else{
//       cout << "Wrong username, try again" << endl;
//     }
//   }
// }


int main() {
  string username;
  string password;
  cout << "Welcome to Lisa's Bank!" << endl;
  char signInOption;
  cout << "A. Sign up" << endl;
  cout << "B. Sign in" << endl; 
  cout << "C. Exit" << endl;
  //cin >> signInOption;
  // if (signInOption == 'A'){
  //   signup();
  // }
  // else if (signInOption == 'B'){
  //   signin();
  // }
  // else if (signInOption == 'C'){
  //   cout << "Thank you! Have a nice day!" << endl; 
  // }
  // else{
  //   cout << "Invalid Option" << endl;
  // }

  return 0;
}