#include <iostream>
#include <list>
#include <stdio.h>

using namespace std;

int main (){
    int quantNum = 0;   cin >> quantNum;
    list <int> list1;
    int num = 0;
    int sum = 0;

    for (int i = 0; i < quantNum; i++){
        cin >> num;
        list1.push_front(num);
    }

    while (!list1.empty()){
        list<int>::iterator ptr0 = list1.begin();
        list<int>::reverse_iterator ptr1 = list1.rbegin();
        if (*ptr0 == *ptr1){
            list1.pop_back();
            list1.pop_front();
        }
        else if (*ptr0 + *++ptr0 == *ptr1){
            list1.pop_front();
            list1.pop_front();
            list1.pop_back();
            sum++;
        }
        else if (*ptr0 == *ptr1 + *++ptr1){
            list1.pop_front();
            list1.pop_back();
            list1.pop_back();
            sum++;
        }
        else if (*ptr0 + *++ptr0 == *ptr1 + *++ptr1){
            list1.pop_front();
            list1.pop_front();
            list1.pop_back();
            list1.pop_back();
            sum += 2;
        }

        
        if (*list1.begin() == *list1.rbegin()) break;

    }
    cout << sum << endl;
}