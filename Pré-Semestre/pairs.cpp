#include <iostream>

using namespace std;

int main (){
    int quanTest = 0; cin >> quanTest;
    do
    {
        //Var
        int numbers = 0; cin >> numbers;
        int Total = 0;
        int queue[numbers] = {};
        for (int i = 0; i<numbers; i++) cin >> queue[i];

        //Solve
        for (int i = 0; i < (numbers + 1)/2; i++){
            short r1 = (i + 1 > queue[i] && numbers - (i + 1) > queue[numbers - (i + 1)]);
            if (r1) continue;
            for (int y = 0; y < (numbers + 1)/2; y++){
                short r2 = y + 1 > queue[y] && numbers - (y + 1) > queue[numbers - (y + 1)];
                short r3 = r2 && (i + 1 > queue[y] || numbers - (i + 1) > queue[numbers - (y + 1)]);
                if (r3) continue;
                cout << queue[i] << " " << i + 1 << " " << queue[y] << " " << y + 1 << endl << 
                queue[numbers - (i + 1)] << " " << numbers - (i + 1) << " " << queue[numbers - (y + 1)] << " " << numbers - (y + 1) << endl;
                Total++;
            }
        }
        cout << Total << endl;
    } while (--quanTest);
    
}