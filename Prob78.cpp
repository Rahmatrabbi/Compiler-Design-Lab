#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{
        string keywords[32]={"auto","double","int","struct","break","else","long",
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"};
       string arithmatic[7]={"+","-","*","/","++","--","%"};
       string s,digit,select;
       int num,temp,len,len2,i,j,cnt=0,len3,dcnt=0,charcnt=0;
       printf("Enter # to terminate");
       cout<<endl;
       while(1)
       {
           printf("Input: ");
           getline(cin,s);
           if(s[0]=='#')
           {
               return 0;
           }
       len2=s.length();
       cout<<endl;
       printf("Output: ");
       //cout<<endl;
      for(i=0;i<32;i++)
       {
           j=0,cnt=0;
           select=keywords[i];
           len=select.length();
           if(len==len2)
           {
               for(j=0;j<len;j++)
               {
                   if(select[j]==s[j])
                   {
                       cnt++;
                   }
            }
                if(cnt==len)
          {
              cout<<"Keyword"<<endl;
          }
           }
        }
        for(i=0;i<7;i++)
        {
            if(arithmatic[i]==s)
            {
                cout<<"Arithmatic operator"<<endl;
            }
        }
        if(s[0]=='c'&&s[1]=='o'&&s[2]=='n'&&s[3]=='s'&&s[4]=='t'&&len2>5)
        {
            cout<<"Constant"<<endl;
        }
        for(i=0;i<len2;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                dcnt++;
            }
            else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            {
                charcnt++;
            }
        }
        if(dcnt==len2)
        {
            cout<<"Integer"<<endl;

        }
        else if(dcnt+charcnt==len2 &&(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
        {
            cout<<"Identifier"<<endl;
        }
        else if(dcnt==len2-1 &&(s[0]>='0'&&s[0]<='9'||s[0]=='.')&&charcnt==0)
        {
            cout<<"Float"<<endl;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }

    }
}



