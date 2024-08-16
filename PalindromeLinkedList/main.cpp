#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode() : val(0), next(nullptr) {}
         ListNode(int x) : val(x), next(nullptr) {}
         ListNode(int x, ListNode *next) : val(x), next(next) {}
     };

bool isPalindrome(ListNode* head) {
    ListNode* dummy = head;
    vector<int> v;
    while(dummy->next != nullptr){
        v.push_back(dummy->val);
        dummy = dummy->next;
    }
    v.push_back(dummy->val);

    if (v.size() == 1){
        return true;
    }

    vector<int> f;

    if (v.size() % 2 != 0){
        f = {v.begin(), v.begin() + v.size()/2 + 1};
    } else{
        f = {v.begin(), v.begin() + v.size()/2};
    }

    vector<int> l = {v.begin() + v.size()/2, v.end()};
    reverse(l.begin(), l.end());


    if (f == l){
        return true;
    } else{
        return false;
    }
}

int main() {
    ListNode* e = new ListNode(3);
    e->next = new ListNode(0);
    e->next->next = new ListNode(3);
    cout << isPalindrome(e) << endl;
    return 0;
}
