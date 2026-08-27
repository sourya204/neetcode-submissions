/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr) return nullptr;
        ListNode* trav=head;
        int c=1;
        while(trav->next!=nullptr){
            c++;
            trav=trav->next;
        }
        if (c == n) return head->next;
        int k=1;
        ListNode* reach=head;
        while(k!=(c-n)){
            reach=reach->next;
            k++;
        }
        reach->next=reach->next->next;
        return head;
    }
};
