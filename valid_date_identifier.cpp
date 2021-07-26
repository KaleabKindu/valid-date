#include <iostream>
#include <string>
using namespace std;
int firnum(int, string);
int powd(int, int);
int main()
{
    int dy,mon,yer,zd,zm,zy;
    string day,month,year;
  cout<<"Please enter a date (dd mm yyyy): ";
  getline(cin,day,' ');
  getline(cin,month,' ');
  getline(cin,year);
  zd=day.length()-1;
  zm=month.length()-1;
  zy=year.length()-1;
  dy=firnum(zd,day);
  mon=firnum(zm,month);
  yer=firnum(zy,year);
  if (year[zy]!=0 && year[zy--]!=0 && yer%4==0)
  {
    if (mon==2)
    {
        if (dy>0 && dy<30 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>29 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
    else
    {
        if (dy>0 && dy<31 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>30 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
  }
  else if (year[zy]==0 && year[zy--]==0 && yer%400==0)
  {
     if (mon==2)
    {
        if (dy>0 && dy<30 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>29 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
    else
    {
        if (dy>0 && dy<31 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>30 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
  }
  else
  {
      if (mon==2)
    {
        if (dy>0 && dy<29 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>28 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
    else
    {
        if (dy>0 && dy<31 && mon>0 && mon<13)
            cout<<day<<'/'<<month<<'/'<<year<<" is a valid date.";
        else if (dy>30 || dy<0)
            cout<<"Invalid day of month";
        else if (mon>12 || mon<0)
            cout<<"invalid month "<<mon;
    }
  }

}
int firnum(int v1, string sth)
{
    int res=0;
    int z1=v1;
    int h;
    string str1=sth;
    for (int b=0; b<=z1; b++)
    {
        switch(str1[b])
          {
           case '1': h=1*powd(10, (z1-b));
                     res+=h;
                     break;
           case '2': h=2*powd(10, (z1-b));
                     res+=h;
                     break;
           case '3': h=3*powd(10, (z1-b));
                     res+=h;
                     break;
           case '4': h=4*powd(10, (z1-b));
                     res+=h;
                     break;
           case '5': h=5*powd(10, (z1-b));
                     res+=h;
                     break;
           case '6': h=6*powd(10, (z1-b));
                     break;
           case '7': h=7*powd(10, (z1-b));
                     res+=h;
                     break;
           case '8': h=8*powd(10, (z1-b));
                     res+=h;
                     break;
           case '9': h=9*powd(10, (z1-b));
                     res+=h;
          }
    }
        return res;
}
int powd(int a, int b)
{
    int num1=a;
    int num2=b;
    int res=1;
    for (int i=1; i<=num2; i++)
    {
      res*=num1;
    }
    return res;
}
