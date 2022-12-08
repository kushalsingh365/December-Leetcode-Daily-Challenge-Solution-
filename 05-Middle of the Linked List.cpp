class Solution {
public:
ListNode* middleNode(ListNode* head) {
ListNode*temp=head;
double cnt=0;
while(temp->next!=0)
{
cnt++;
temp=temp->next;
}

    temp=head;
    cnt=ceil(cnt/2);
     int i=0;
    while(i<cnt)
    {
        head=head->next;
        i++;
    }
    return head;
}
};
