#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number from (0-100) ";
    cin >> n;
    int a=n%10;
    string x,y;
    if(a==1){x="one";}
    if(a==2){x="two";}
    if(a==3){x="three";}
    if(a==4){x="four";}
    if(a==5){x="five";}
    if(a==6){x="six";}
    if(a==7){x="seven";}
    if(a==8){x="eight";}
    if(a==9){x="nine";}

    if(n==10){x="ten";}
    if(n==11){x="eleven";}
    if(n==12){x="twelve";}
    if(n==13){x="thirteen";}
    if(n==14){x="fourteen";}
    if(n==15){x="fifteen";}
    if(n==16){x="sixteen";}
    if(n==17){x="seventeen";}
    if(n==18){x="eighteen";}
    if(n==19){x="nineteen";}

    if(n>=20){y="twenty";}
    if(n>=30){y="thirty";}
    if(n>=40){y="forty";}
    if(n>=50){y="fifty";}
    if(n>=60){y="sixty";}
    if(n>=70){y="seventy";}
    if(n>=80){y="eighty";}
    if(n>=90){y="ninety";}
     
    if(n==100){y="hundred";}
    cout<<y<<" "<<x;
    return 0;



}