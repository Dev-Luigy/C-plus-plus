#include <iostream>
#include <stdlib.h>

using namespace std;

void solve (int len, char *** mapi, int x, int y, int Fire){
    if (x >= 0 && y >= 0 && y < len && x < len){
        //map[x+1][y] <= Fire || map[x][y+1] <= Fire || map[x][y-1] <= Fire || map[x-1][y] <= Fire  
        if ((*mapi[x+1][y] == '*' || *mapi[x][y+1] == '*' || *mapi[x][y-1] == '*' || mapi[x-1][y] == '*') && mapi[x][y] <= Fire && x && y && x < len - 1 && y < len - 1) { mapi[x][y] = '*'; return; }
        
        
        solve (len, mapi, x + 1, y, Fire);
        solve (len, mapi, x - 1, y, Fire);
        solve (len, mapi, x, y - 1, Fire);
        solve (len, mapi, x, y + 1, Fire);
    }

}

void arrayMetod(int len, char *** mapi, int choice){
    for (int i = 0; i < len; i++){
        for (int y = 0; y < len; y++){
            if (choice) cin  >> mapi[i][y];   //Array data intro
            else        cout << mapi[i][y];   //Print Array.
        }
    }
}

 // context
int main(){
    int lenq, Fire = lenq = 0; cin >> lenq >> Fire;
    const int len = lenq;
    char ** mapi = (char**) malloc (len * sizeof(char*));
    for (int i = 0; i < len; i++) *(mapi + i) = (char*) malloc (len * sizeof(char));

    //solve

    arrayMetod(len, &mapi, 1); //data insert.

    arrayMetod(len, &mapi, 0);

    if ((int)mapi[0][0] <= Fire){ //first are not Fired up, then array don't have changes.
        arrayMetod(len, &mapi, 0);
    }
    else{                        //first have changes, then solve the map.
        solve(len, mapi, len/2, len/2, Fire);
        arrayMetod(len, &mapi, 0);
    }
}