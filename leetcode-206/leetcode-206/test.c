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

//�ڶ��ַ���
struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)//�������Ϊ�ջ�������ֻ��һ���ڵ㣬��ֱ�ӷ���
	{
		return head;
	}

	struct ListNode* n1 = NULL, *n2 = head, *n3 = head->next;//n3���ڴ洢��һ���ڵ��ַ���Ա�֤ѭ������
	while (n2)
	{
		n2->next = n1;//��ת
		n1 = n2;
		n2 = n3;
		if (n3)//���n3Ϊ�գ���ִ������һ��
			n3 = n3->next;
	}
	return n1;
}