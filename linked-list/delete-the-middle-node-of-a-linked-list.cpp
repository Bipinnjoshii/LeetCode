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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;

        ListNode* temp = head;

        while(temp != NULL){
            temp = temp->next;
            size++;
        }

        if(size == 1){
            return NULL;
        }
        else if(size == 2){
            head->next = NULL;
            return head;
        }
        
        size = (size/2)-1;

        int cnt = 0;

        temp = head;

        while(temp->next->next != NULL){

            if(cnt == size){
                temp->next = temp->next->next;
                break;
            }

            temp = temp->next;
            cnt++;


        }


        return head;
    }
};