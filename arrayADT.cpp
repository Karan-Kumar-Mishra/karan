#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class arrayADT
{
private:
int capacity;
int lastindex;
int *ptr;
public:
~arrayADT()
{
delete []ptr;
}
arrayADT(arrayADT &list)
{
capacity=list.capacity;
lastindex=list.lastindex;
ptr =new int [capacity];
for(int i=0;i<=list.lastindex;i++)
ptr[i]=list.ptr[i];
	}
arrayADT()
{
capacity=0;
lastindex=-1;
ptr=NULL;
}
void createarray(int capacity);
int getitem(int index);
void setitem(int index,int value);
void edititem(int index,int value);
int countitem();
void removeitem(int index);
int searchitem(int value);
void sortarray();
friend ostream& operator<<(ostream&,arrayADT);
};
ostream& operator<<(ostream &dout,arrayADT l)
{
if(l.lastindex==-1)
cout<<"list is empty"<<endl;
for(int i=0;i< l.countitem();i++)
{
cout<<" "<<l.getitem(i);
}
}	
void arrayADT::sortarray()
{
int r,i,t;
for(r=1;r<countitem()-r;i++)
{
for(i=0;i<countitem()-r;i++)
{
 if(ptr[i]>ptr[i+1])
 {
 	t=ptr[i];
 	ptr[i]=ptr[i+1];
   ptr[i+1]=t;
   }
  }
}
}
   
int arrayADT::searchitem(int value)
{
if(lastindex==-1)
{cout<<"list index is empty"<<endl;
return -1;}
	int i;
for(i=0;i<=lastindex;i++)
{
	if(ptr[i]==value)
	return i;
	else
	return -1;

}
}
void arrayADT::removeitem(int index)
{
int i;
if(index<0 || index>lastindex)
cout<<"invlide index"<<endl;
else if(index<lastindex)
{
i=index;
while(i!=lastindex)
{
ptr[i]=ptr[i+1];
i++;
}
lastindex--;
}
else if(index==lastindex)
lastindex--;
}
	
int arrayADT::countitem()
{
return (lastindex=1);
}
void arrayADT::edititem(int index,int value)
{
if(index<0 ||index>lastindex)
cout<<"invlied index"<<endl;
else
 ptr[index]=value;
}
int arrayADT::getitem(int index)
{
if(lastindex==-1)
{
cout<<"list is empty"<<endl;
return -1;
}
if(index>lastindex ||index<0)
{
cout<<"invalid index"<<endl;
return -1;
	}
}
void arrayADT::setitem(int index,int value)
{
 int i;
if(lastindex==capacity-1)
cout<<"overflow"<<endl;
else if(index>capacity-1 ||index<0)
cout<<"inviled index"<<endl;
else if(index >lastindex+1)
cout<<"inviled index"<<endl;
else if(index<=lastindex)
{
lastindex++;
i=lastindex;
while(i!=index)
{
ptr[i]=ptr[i+1];
i--;
}
ptr[index]=value;
}
else if(index==lastindex)
{
lastindex++;
ptr[index]=value;
	}
	}
void arrayADT::createarray(int capacity)
{
this->capacity=capacity;
lastindex=-1;
ptr= new int[capacity];
}
int main()
{
	arrayADT a;
	cout<<a;
return 0;
}
	


