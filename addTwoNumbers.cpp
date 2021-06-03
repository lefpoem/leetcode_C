//the first case about C++
struct ListNode{
  int val;
  ListNode *next;
  ListNode():val(0),next(nullptr){}
  ListNOde(int x):val(x),next(nullptr){}
  ListNOde(int x,ListNode* next):val(x),next(next){}
};
class Solution{
  ListNode* addTwoNumbers(ListNode *l1,ListNode *l2)
  {
    ListNode *head=nullptr,*tail=nullptr;
    int carry=0;
    int n1=l1? l1->val :0;
    int n2=l2? l2->val :0;
    int sum=n1+n2+carry;
    if(!head)
      head=tail=new ListNode(sum%10);
    else{
      tail->=new ListNode(sum%10);
      tail=tail->next;
    }
    carry=sum/10;
    if(l1)
      l1=l1->next;
    if(l2)
      l2=l2->next;
    if(carry>0){
      tail->next=new ListNode(carry);
    }
    return head;
  }
}
//the first case about C
struct ListNode{
  int val;
  ListNode *next;
};
struct addTwoNumbers(struct ListNode* l1,struct ListNode* L2)
{
  Struct ListNode *head=NULL,*tail=NULL;
  int carry=0;
  int sum=n1+n2+carry;
  if(!head){
    head=tail=malloc(sizeof(struct ListNode));
    tail->val=sum%10;
    tail->next=NULL;
  }
  else{
    tail->next=malloc(sizeof(struct ListNode));
    tail->next->val=sum%10;
    tail=tail->next;
    tail->next=NULL;
  }  
  carry=sum/10;
  if(l1)
    l1=l1->next;
  if(l2)
    l2=l2->next;
  if(carry>0){
    tail->next=malloc(sizeof(struct ListNode));
    tail->next->val=carry;
    tail->next->next=NULL;
  }
  return head;
}
