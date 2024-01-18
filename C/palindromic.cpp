#include<list>
#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
   
bool isPalindrome(ListNode* head) {
    if (head->next == nullptr) return true;
    else if (head -> val != head -> next -> val && head -> next -> next == nullptr) return false;
    
    list <int> number;
    list <int>::iterator numInit = number.begin();
    int num = 0;
    
    while(head){
        num = head->val;
        number.push_back(num);
        cout << *numInit << num << endl;
        head = head->next;
    }
    
    while(!number.empty()){
        if (numInit++ != number.end()) return false;
        number.pop_front();
        if (!number.empty()) number.pop_back();
    }
    
    return true;
}