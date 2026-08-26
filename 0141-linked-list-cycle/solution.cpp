/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_map<ListNode*,int> mp;
        // ListNode *temp=head;
        // while(temp!=NULL){
        //     if(mp.find(temp)!=mp.end()) return true; 
        //     mp[temp]++;
        //     temp=temp->next;     
        // }
        // return false;
        if(head==NULL || head->next==NULL) return false;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next != NULL){
            slow=slow->next;
            if(fast->next==NULL) return false;
            fast=fast->next->next;

            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
