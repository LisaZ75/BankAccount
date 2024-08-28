#include <iostream>
#include <map> 

using namespace std;
  
bool usernamecheck(string user){
  string test[1];
  test[0] = "Lily";
  if (user == test[0]){
    return true;
  }
  else{
    cout << "Sorry, the username is wrong" << endl;
    return false;
  }
}

bool passwordcheck(string key){
  string testp[1];
  testp[0] = "Password123";
  if (key == testp[0]){
    return true;
  }
  else{
    cout << "Sorry, the password is wrong" << endl;
    return false;
  }
}

void deposits(double balance[1]) { //just pass the size
  cout << "How much will you deposit?" << endl;
  int add;
  while (true){
    cin >> add;
    if (add < 0){
      cout << "Sorry, it should be positive number. Please try again." << endl;
      cout << "How much will you deposit?" << endl;
    }
    else {
      balance[0] = balance[0] + add;
      break;
    }
  }
  cout << "New Account Balance: $" << balance[0] << endl;
}

void withdrawcc(double balance[1]) {
  cout << "Current Balance: $" << balance[0] << endl;
  int minus;
  while (true){
    cout << "How much will you withdraw? Please input positive number." << endl;
    cin >> minus;
    if (minus < 0){
      cout << "Sorry, it should be positive number. Please try again." << endl;
    }
    else {
      if (balance[0] < minus){
        cout << "Sorry, you can't withdraw because you do not have enough money." << endl;
        cout << "Current Balance: $" << balance[0] << endl;
        cout << "Please try again." << endl;
      }
      else{
        balance[0] = balance[0] - minus;
        break;
      }
    }
  }
  cout << "New Account Balance: $" << balance[0] << endl;
}

void cd (double balance[1]){
  //balance[1] = 0; //This is the savings acc balance
  cout << "How much do you wanna do CD? please enter positive number: " << endl;
  double newBal;
  cin >> newBal;
  //balance[0] -= newBal;
  if (newBal < 0){
    cout << "Invalid: Negative Balance" << endl;
  }
  else if (newBal > 0){
    // balance[1] *= 0.7423;
    newBal = newBal * 0.7423;
    balance[0] += newBal;
    cout << "Your new CD balance is: " << newBal << endl;
    cout << "Your new Checkings balance is: " << balance[0] << endl;
  }
}



void menu(){
  double balance[2];
  balance[0] = 5000;
  while (true){
    cout <<  "This is the menu" << endl;
    cout << "A. Deposit" << endl;
    cout << "B. Withdraw" << endl;
    cout << "C. CD" << endl;
    char optionABC;
    cout << "Please choose one option from A, B, and C:" << endl;
    cin >> optionABC;
    if (optionABC == 'A') {
      deposits(balance);
      cout << "Would you like to c(continue) or q(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }
    else if (optionABC == 'B') {
      withdrawcc(balance);
      cout << "Would you like to 'c'(continue) or 'q'(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }
    else if (optionABC == 'C'){
      cd(balance);
      cout << "Would you like to 'c'(continue) or 'q'(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }  
  }
}

void signin(){
  string username;
  string password;
  cout << "Please enter your username: ";
  cin >> username;
  usernamecheck(username);
  bool pass = true;
  while (pass){
    if (usernamecheck(username) == true){
      cout << "Please enter your password: ";
      cin >> password;
      if (passwordcheck(password) == true){
        cout << "Welcome, what can I help you. please select in the menu." << endl;
        menu();
        pass = false;
      }
      else{
        cout << "Wrong password. Please try again." << endl;
      }
    }
    else{
      cout << "Wrong username, try again" << endl;
    }
  }
}

void signup(){
  string name;
  string userpassword;
  int saving;
  cout << "Create a user name" << endl;
  cin >> name;
  cout << "Create a password" << endl;
  cout << "Please make sure the password includes numbers, characters and uppercase. And 5-7 characters" << endl;
  cin >> userpassword;
  cout << "How much you want to save?" << endl;
  cin >> saving;
  double balance[2];
  balance[0] = saving;
  while (true){
    cout <<  "This is the menu" << endl;
    cout << "A. Deposit" << endl;
    cout << "B. Withdraw" << endl;
    cout << "C. CD" << endl;
    char optionABC;
    cout << "Please choose one option from A, B, and C:" << endl;
    cin >> optionABC;
    if (optionABC == 'A') {
      deposits(balance);
      cout << "Would you like to c(continue) or q(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }
    else if (optionABC == 'B') {
      withdrawcc(balance);
      cout << "Would you like to 'c'(continue) or 'q'(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }
    else if (optionABC == 'C'){
      cd(balance);
      cout << "Would you like to 'c'(continue) or 'q'(quit)?" << endl;
      char cq;
      cin >> cq;
      if (cq == 'c'){
        continue;
      }
      else{
        cout << "Thanks for coming. Have a nice day." << endl;
        break;
      }
    }  
  }
}

void mainMenu()
{
  bool userOption = false;
  char signInOption;
  while(userOption != true)
    {
      // Ask if the user wants to see their balance, do withdrawal, or deposit
      cin >> signInOption;
      if (signInOption == 'A'){
        signup();
      }
      else if (signInOption == 'B'){
        signin();
      }
      else if (signInOption == 'C'){
        cout << "Thank you! Have a nice day!" << endl; 
        userOption = true;
      }
      else{
        cout << "Invalid Option" << endl;
      }
    }
}


int main() {
  string username;
  string password;
  bool flag = true;
  cout << "Welcome to Lisa's Bank!" << endl;
  while(flag){
    char signInOption;
    cout << "A. Sign up" << endl;
    cout << "B. Sign in" << endl; 
    cout << "C. Exit" << endl;
    cin >> signInOption;
    if (signInOption == 'A'){
      signup();
      flag = false;
    }
    else if (signInOption == 'B'){
      signin();
      flag = false;
    }
    else if (signInOption == 'C'){
      cout << "Thank you! Have a nice day!" << endl; 
      flag = false;
    }
    else{
      cout << "Invalid Option" << endl;
    }
  }
  return 0;
}