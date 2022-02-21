#include <iostream>
#include <cstring>

using namespace std;

int main() {

  char players[100];
  int i = 1;
  

  int count = 1;
  int maxCount = 1;


  cin.getline ( players, 100, '\n' ); 
  char cp = players[0];  
  int l = strlen(players);  
  //cout << l << endl;
  while ((i < l) && (maxCount < 7))  {
  //  cout << "cp" << cp << endl;
  //  cout << "pi" << players[i] << endl;
    if (cp == players[i]){
      count++;
      if (count > maxCount){
        maxCount = count;
        // cout << "max" << maxCount << endl;
      }
    } else {
      cp = players[i];
      count = 1;
    }
    i++;
  }
  if (maxCount > 6) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
	return 0;
}

