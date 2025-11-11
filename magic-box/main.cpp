#include <iostream>
using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

// int main() {
//     int size;
//     cout << "enter the size: ";
//     cin >> size;
//     if (size < 1 || size%3 !=0) {
//         cout << 'enter odd size only' << endl;
//         cin >> size;
//     }
//     int row, col;
//     row = 1;
//     col = (size / 2) + 1;
//
//     cout << endl;
//     for(int i = 1; i <= size * size; i++){
//         gotoxy(col, row);
//         cout << i ;
//         if(i % size != 0){
//             row--;
//             col--;
//         }else {
//             row++;
//         }
//
//         if(row < 1)row = size;
//         if(col < 1)col = size;
//     }
//
//     cout << endl;
//
//     return 0;
// }

int main() {
    int size = 3;
    int row, col;
    row = 1;
    col = (size / 2) + 1;

    cout << endl;
    for(int i = 1; i <= size * size; i++){
        gotoxy(col, row);
        cout << i ;
        if(i % size != 0){
            row--;
            col--;
        }else {
            row++;
        }

        if(row < 1)row = size;
        if(col < 1)col = size;
    }

    cout << endl;

    return 0;
}