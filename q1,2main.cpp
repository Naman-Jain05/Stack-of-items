#include<bits/stdc++.h>
using namespace std;
#include"q1,2.cpp"

int main()
{
	int sizes,itm,quan;
	cout<<"enter size of stack:"<<endl;
    cin>>sizes;
    Stack st(sizes);
    item it;
    string s;
    
    for(int i=0;i<sizes;i++)
    {
        cout<<"enter item_id,quanity,label,char:";
        cin>>itm>>quan>>s; 
        it.set(itm,quan,s);
        st.push(it);
    }
    st.display();
    
    st.pop();
    cout<<"after pop"<<endl;
    st.display();
    
    cout<<"enter item_id,quanity,label,char:";
    cin>>itm>>quan>>s; 
    it.set(itm,quan,s);
    st.push(it);
    cout<<"\n";
    st.display();
	
	if(!st.isEmpty())
	{
		cout<<"stack is not empty"<<endl;
	}
	
	cout<<"stack after sorting:"<<endl;
	st.sort(st);
	st.display();
	
	cout<<"stack after removing middle element:"<<endl;
	st.removeMid(st,0);
	st.display();
    
    
return 0;
}




