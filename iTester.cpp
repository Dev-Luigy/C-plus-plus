#include <iostream>

using namespace std;

int fastSearch(int * searchArray, int searchingfor){
    int searchArrayLength = 15;
    int i[] = {0, searchArrayLength/2, searchArrayLength/2 - 1, searchArrayLength};
    int flag = 0;
    int count = 0;
    int whileI = 3;

    for (; i[0] < (searchArrayLength / 4 / 2) + 1 ;){
        while (whileI >= 0 && flag == 0){
            if (whileI % 2){
                if (searchingfor == searchArray[i[whileI--]--]){
                    return ++i[++whileI];
                }
            } 
            else{
                if (searchingfor == searchArray[i[whileI--]++]){
                    return --i[++whileI];
                }
            }
            whileI = whileI == 0 ? 3 : whileI;
        }
    }
    return 0;
}

int main (){
    //vars
    int searchArray[] = {1, 5, 10, 15, 25, 50, 87, 90, 20, 70, 55, 25, 10, 48, 99};
    int searchingfor = 0;

    //solve;
    cin >> searchingfor;
    int solve = 1 + fastSearch(searchArray,searchingfor);
    cout << solve << endl;
}
