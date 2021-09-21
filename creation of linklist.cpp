creationofLinkedList(n)
{
	
	head=new Node;
	
	input head->data
	head->next=NULL
	LNP=head
	
	for i=2 to n
		ptr=new Node
		input ptr->data
		ptr->next=NULL
		LNP->next->Ptr
		LNP=ptr

	
}

printLinkedList
cur=head
while cur!=NULL
	print cur->data
	cur=cur->next
		
	
InsertionStart()
	ptr=new node
	input->ptr->data
	ptr->next=head
	head=ptr

InsertionEnd(d)

	ptr=new node
	ptr->data=d
	ptr->next=NULL
	cur=head
	
	while cur->next!=NULL
		cur=cur->next
		
	cur->next=ptr
	
InsertionAtSpecific(loc,d)
	
	ptr=new node
	ptr->data=d
	ptr->next=NULL
	
	prev=head
	cur=head->next
	for i=1 to loc-2---1 to 3
		prev=cur
		cur=cur->next
		
	pre->next=ptr
	ptr->next=cur

deletionAtSpLoc(loc)
		
		prev=head
		cur=head->next
		
		for i=1 to loc-2
			prev=cur
			cur=cur->next
		prev->next=cur->next
		delete cur
		
		
		
		
		
		
		
		
		


