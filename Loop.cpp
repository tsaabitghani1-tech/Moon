#include <iostream>
#include <string>
using namespace std;

int main(){
    int rows=10;
    for(int i=1;i<=rows;i++) {
        for(int j=1; j<=rows-i; j++){
            cout <<" ";
        }
        for(int k=1; k<=2*i-1; k++){
           cout <<"*";
      }
       cout << endl;
    }
    return 0;
}

// int main() {
// int rows=5;
// while(rows >= 1){
//   cout << string(rows-1, '*') << endl;
//    rows--;
// }
// return 0;
// }


// int main(){
//     int rows=5;
//     int i=1;
//     do {
//         int j=1;
//         do {
//             cout <<" ";
//             j++;
//         } while(j<=rows-i);
//         int k=1;
//         do {
//             cout <<"*";
//             k++;
//         } while(k<=i);
//         cout << endl;
//         i++;
//     } while(i<=rows);
//     return 0;
// }