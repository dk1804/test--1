struct ListNode* reverseList(struct ListNode* head)
{

	struct ListNode* cur = head;

	struct ListNode* newhead = NULL;
	while (cur)
	{
		struct ListNode* next = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}

//第二种方法
struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)//如果链表为空或者链表只有一个节点，则直接返回
	{
		return head;
	}

	struct ListNode* n1 = NULL, *n2 = head, *n3 = head->next;//n3用于存储下一个节点地址，以保证循环进行
	while (n2)
	{
		n2->next = n1;//翻转
		n1 = n2;
		n2 = n3;
		if (n3)//如果n3为空，则不执行下面一步
			n3 = n3->next;
	}
	return n1;
}