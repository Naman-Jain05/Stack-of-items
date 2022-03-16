// BT20CSE087  Naman Jain
#include<bits/stdc++.h>
using namespace std;
class item{
    private:
    	
    int item_id;
    int quantity;
    string itemlabel;
    public:
    	item()
    	{
    	//	cout<<"item constructor"<<endl;
		}
		/*item(const item &lp)
		{
		//	cout<<"item copy constructor"<<endl;
		}*/
		~item()
		{
		//	cout<<"item destructor"<<endl;
		}
    	
        void set(int ,int  ,string );
        int getitem();
        int getquantity();
        string getitemlabel();
};

class Stack {
	private:
		
    int top;
 	int size;
    item *arr; 
	public:
		
 	Stack(int siz)
	{ 
	 top = -1;
	 this->size=siz;
	 arr=new item[siz];
	 //	cout<<"stack constructor";
	}
	~Stack()
	{
		delete[] arr;
	//	cout<<"stack destructor";
	}
	
    bool push(item &x);
    item pop();
    item topp();
    bool isEmpty();
    void display();
    void sort(Stack&);
    void removeMid(Stack&,int);
};
