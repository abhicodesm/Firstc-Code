#include<bits/stdc++.h>
using namespace std;
#define MAX 102
unsigned int temparr[MAX]={0};
int main()
{
    unsigned int tc;
    for(cin>>tc;tc>0;tc--)
    {
        unsigned int size;
        cin>>size;
        unsigned int arr[size];
        unsigned int count=0,temp=0,dumyy=0,id=0,res=0,ch,count1=0;
        for(unsigned int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]>=50)
                count++;
                else if(arr[i]>=25&&arr[i]<50)
                    temp++;
                else
                {
                    temparr[id]=arr[i];
                    id++;
                    dumyy++;
                }
        }
        //cout<<count<<" "<<temp<<" "<<dumyy<<"\n";
        if(temp==dumyy)
            res=count+temp;
        else if(temp>dumyy)
            res=count+dumyy+(temp-dumyy)/2;
            else
            {
                sort(temparr,temparr+id);
               ch=id-temp-1;
                for(unsigned int i=id-1;i>=ch;)
                {
                    if(temparr[id-1]>=17&&i-3>=ch)
                       {
                           count1++;
                           i=i-3;}
                           else if(temparr[i]>=13&&temparr[i]<17&&i-4>=ch)
                           {
                               count1++;
                               i=i-4;
                           }
                           else if(temparr[i]>=10&&temparr[i]<13&&i-5>=ch)
                           {
                               count1++;
                               i=i-5;
                           }
                           else if(temparr[i]==9&&i-6>=ch)
                           {
                               count1++;
                               i=i-6;
                           }
                           else if(temparr[i]==8&&i-7>=ch)
                           {
                               count1++;i=i-7;
                           }
                           else if(temparr[i]==7&&i-8>=ch)
                           {
                               count1++;
                               i=i-8;
                           }
                           else if(temparr[i]==6&&i-9>=ch)
                           {
                               count1++;
                               i=i-9;
                           }
                           else if(temparr[i]==5&&i-10>=ch)
                           {
                               count1++;
                               i=i-10;
                           }
                           else if(temparr[i]==4&&i-13>=ch)
                           {
                               count1++;
                               i=i-13;
                           }
                           else if(temparr[i]==3&&i-17>=ch)
                           {
                               count1++;
                               i=i-17;
                           }
                           else if(temparr[i]==2&&i-25>=ch)
                           {
                               count1++;
                               i=i-25;
                           }
                           else if(temparr[i]==1&&i-50>=ch)
                           {
                               count1++;
                               i=i-50;
                           }

                }
                res=count+temp+count1;
            }
            printf("%u\n",res);
    }
    return 0;
}

