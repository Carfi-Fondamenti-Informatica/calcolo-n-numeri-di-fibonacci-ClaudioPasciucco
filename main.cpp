#include <iostream>
using namespace std;

int main() {
   int i, n=0, x1=1, x2=1, x3=x1+x2;
   cin >> n;
   if (n>=2) {
      cout << x1 << endl;
      cout << x2 << endl;
      for (i=2; i<n; i++){   
         cout << x3 << endl;
         x1 = x2;
         x2 = x3;
         x3 = x1+x2;
         
      }
   }else{
      cout << "errore" << endl;
   }
   return 0;
}
