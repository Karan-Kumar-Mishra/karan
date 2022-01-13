#include<iostream>
#include<string.h>
using namespace std;
/*class student
{
 private:
  int rollno;
char name[20];
           class address
         {
           private:
              int housname;
              char street[20];
              char city[20];
              char state[20];
              char pincode[8];
           public:
        void setaddress(int h,char *s,char *c,char *st,char *p)
        {
         housname=h;
         strcpy(street,s);
         strcpy(city,c);
         strcpy(state,st);
         strcpy(pincode,p);
        }
        };
        address add;
 
        public:
         void setrollno(int r)
        {
         rollno=r;
        }
        void setname(char *n)
        {
         strcpy(name,n);
        }
        void setaddress(int h, char *s,char *c,char*st,char *p)
        {
         add setaddress(h,s,c,st,p);
        }
        void showstudent()
        {
        cout<<"student data"<<endl;
         cout<<rollno<<endl;
         cout<<name<<endl;
         add.showaddress();
        }
        };
   int main()
{
 student s1;
 s1.setrollno(23);
 s1.setname("karan");                                                   
 s1.setaddress(301,"hanuman gali","bhopal","122434","mp");
 s1.showstudent();
 return 0;
 }*/
int main()
{
   char ch;
cout<<"enter any number"<<endl;
 cin>>ch;
 if (ch>='a'&& ch<='z')
{
 ch=ch-32;
}
cout<<"after conversion="<<ch;
 return 0;
 }

        