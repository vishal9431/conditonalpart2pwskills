#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the amount of money you want to know the note "<<endl;
    cin>>x;
    int count500=0,count100=0,count50=0,count10=0,count5=0,count2=0,count1=0;
    if(x>=500)
    {
        count500=x/500;
        x-=count500*500;
    }
    if(x>=100)
    {
        count100=x/100;
        x-=count100*100;
    }
    if(x>=50)
    {
        count50=x/50;
        x-=count50*50;
    }
    if(x>=10)
    {
        count10=x/10;
        x-=count10*10;
    }
    if(x>=5)
    {
        count5=x/5;
        x-=count5*5;
    }
    if(x>=2)
    {
        count2=x/2;
        x-=count2*2;
    }
    if(x>=1)
    {
        count1=x/1;
        x-=count1*1;
    }
    int sum = count500+count100+count50+count10+count5+count2+count1;
    cout<<sum<<endl;

}