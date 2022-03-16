#include<iostream>
using namespace std;
#include"head1,2.h"

void item::set(int itm,int quan ,string s)
{
	item_id=itm;
    quantity=quan;
    itemlabel=s;
}

int item::getquantity()
{
    return this->quantity;
}

int item::getitem()
{
	return this->item_id;
}

string item::getitemlabel()
{
    return this->itemlabel;
}

bool Stack::push(item &x)
{
    if (top > size ) 
	{
        cout << "Stack Overflow"<<endl;
        return false;
    }
    else 
	{
        arr[++top] = x;
        return true;
    }
}
 
item Stack::pop() 
{
    if (top < 0) 
	{
        cout << "Stack Underflow"<<endl;
    }
    else
	{
        item &x = arr[top--];
        return x;
    }
}

item Stack::topp()
{
	if (top < 0)
	{
        cout << "Stack is Empty"<<endl;
    }
    else
	{
		item x=arr[top];
		return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}

void Stack::display() 
{
   if(top>=0) 
   {
    	for(int i=top; i>=0; i--)
    	cout<<arr[i].getitem()<<" "<<arr[i].getquantity()<<" "<<arr[i].getitemlabel()<<endl;
   }
   else
   {
       cout<<"stack is empty"<<endl;
   }
   cout<<"\n";
}

void Stack::removeMid(Stack &s, int current)
{ 
    if(s.isEmpty() || current == size)
	{ 
        return ; 
    }
    
    item temp=s.topp();
    s.pop();
    removeMid(s, current+1); 
    
    if(current != size/2)
	{ 
        s.push(temp); 
    }
}
 
void Stack::sort(Stack &input)
{
	
    Stack tmpStack(top+1);
	Stack a(top+1);
	
    while (!input.isEmpty())
    {
    	item temp=input.topp();
		input.pop();
    	int val;
    	val=temp.getquantity();
        
		while (!tmpStack.isEmpty() && tmpStack.topp().getquantity() > val)
        {
        	item x=tmpStack.topp();
            input.push(x);
            tmpStack.pop();
        }
        
        tmpStack.push(temp);
    }
    
	while(!tmpStack.isEmpty())
	{
		item x=tmpStack.topp();
		a.push(x);
		tmpStack.pop();
	}
	
	while(!a.isEmpty())
	{
		item x=a.topp();
		input.push(x);
		a.pop();
	}
	
    return;
}

