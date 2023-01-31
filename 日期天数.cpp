#include <iostream>
using namespace std;
int day_rank(int month,int day);
int leapyear(int year);
int main()
{
 int year,month,day;
 int s,k=0;
 while(cin>>year>>month>>day)
 {
  cout<<"Case "<<++k<<": ";
  if(month<10&&day<10)
   cout<<0<<month<<"/"<<0<<day<<"/";
  if(month>=10&&day<10)
   cout<<month<<"/"<<0<<day<<"/";
  if(month<10&&day>=10)
   cout<<0<<month<<"/"<<day<<"/";
  if(month>=10&&day>=10)
   cout<<month<<"/"<<day<<"/";
  cout<<year<<", ";
  s=day_rank(month,day);
  if(month>=3&&leapyear(year)!=0)
   s+=1;
  cout<<s<<endl;
  

 }
 return 0;
}
int day_rank(int month,int day)
{
 int rank=0,i;
 int sum_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 for(i=0;i<month-1;i++)
  rank+=sum_day[i];
 rank+=day;
    return rank;
}
int leapyear(int year)
{
 if(year%4==0&&year%100!=0||year%100==0)
  return 1;
 else
  return 0;
}

