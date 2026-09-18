#include <iostream>
using namespace std;
#include <string>
int main(){
 //typecasting!!⭐
  
//  int d=a;
// float a;
//  cout<<a<<endl;// it give us garvage value !!
// //  int d=(int)a;
// int x=1;
// double ans=(double)x/y;//type casting !!
// cout<<ans<<endl;
// char ch='a';
 
// cout<<ch+1<<endl;
// cout<<x<<"\n";
// cout<<x<<"\n";
// cout<<x<<"\n";
// cout<<--x<<"\n";
// // cout<<x-y<<"\n";
// // cout<<x*y<<"\n";
// // cout<<x/y<<"\n";
// // cout<<x%y<<"\n";
// cout<<((20>30)&&(40>20))<<"\n";
// cout<<((20<30)||(40<20))<<"\n";
// cout<<((20<30)&&(40>20))<<"\n";
// int val;

// cout<<"enter a number=:";
// cin>>val;
// cout<<val<<endl;
// int a,b;
// cout<<"Enter two numbers-:";
// cin>>a>>b;


// cout<<a-b;
// string name;
// string name1;
// int age;
// // getline(cin,name);
// cout<<"Enter your age-:";
// getline(cin,age);
// cout<<"Enter your name-:";
//  getline(cin,name1);//from this you can use space //for long string 
// // cin>>name;//you can not use space 
// // cout<<"Enter your age-:";
// // cin>>age;
// cout<<"your name is "<<name1<<" & your age is "<<age<<endl;
// int n = 40;
// cout<<++n<<endl; 

//     return 0;
// string name;
// string name1;
// int age ;
// cout<<"Enter your age:-";
// cin>>age;
// cout<<"Enter your name:-";
// cin.ignore();//this is the method for clear \n form buffur!!!!
// getline(cin,name1);//this is alternate to do that.
// getline(cin,name);
// cout<<"your name is"<<name<<" your age is "<<age<<endl;
//use always \n over endl;
//escape sequence 
// cout<<"my name is \'sumit'\n"<<endl;
// cout<<"my name is \t mahant"<<endl;
// int a=10;
// int b=20;
// int tem;
// tem=a;
//  a=b;
// b=tem;





// cout<<"Enter Two numbers:-";
// cin>>a;
// cout<<"Enter second number:-";
// cin>>b;cout<<"Enter third number:-";
// cin>>c;
// cin>>a>>b;
// cout<<"value of a-:"<<a<<"\n"<<b;
// int age;
// cout<<"Enter your age ";
// cin>>age;
// if(age>=18){
//     cout<<"you can vote";
// }else{
//     cout<<"you can not vote";
// }
// int num;
// cout<<"Enter the number";
// cin>>num;
// if(num%2==0){
//     cout<<"the number is Even";
// }else{
//     cout<<"the number is odd";
// }
// int num=-12;
// if(num>0){
//     cout<<"positive. ";
// }else if (num<0){
//     cout<<"negative";
// }else{
//     cout<<("this is 0");
// }
// if(1900%4==0){
//     cout<<"yes";
// }else{
//     cout<<"no";
// }
//logic of leap year!!!!
// int year=1900;
// if(year%100==0){
//     if(year%400==0){
//         cout<<"this is the leap year";
//     }else{
//         cout<<"this is not a leap year ";
//     }
// }else if(year%4==0){
//     cout<<"this is a leap year";
// }else{
//     cout<<"this is not a leap year ";
// }
// int amt=10000;
// double dic=0,totalAmt=0;
// if(amt>=0&&amt<=5000)
//   dic=0;
// else if(amt>5000 && amt<=7000 )
// dic=0.05;
// else if(amt>7000 && amt<=9000)
//  dic=0.1;
// else{
//     dic=0.2;
// }
// totalAmt=amt-(amt*dic);
// cout<<"Bill="<<totalAmt;
//switch cases 😊😊
// int day=3;
 
// switch (day)
// {
// case 1:cout<<"monday\n";
    
//     break;
// case 2: cout<<"tuesday\n";
//   break;
// case 3: cout<<"wednesday\n";
//  break;
// case 4: cout<<"thusrsday\n";
//  break;

// case 5: cout<<"friday\n";
// default:
//     break;
// }
// char ch;
// cout<<"enter a character";
// cin>>ch;
// if(ch =='a'||ch=='u'|| ch =='i'||ch=='o'||ch=='e')
//   cout<<"the char is vowal";
// else
//  cout<<"the char is consonent";
//now same  question by Switch case!!
// char ch='t';
// switch (ch){

//     case 'a': cout<<"the char is vowal";
   
//           break;
//     case 'i':
//     cout<<"the char is vowal";
//     case 'e':
//     cout<<"the char is vowal";
//     case 'o':
//     cout<<"the char is vowal";
//     case 'u':
//     cout<<"the char is vowal";
//     default: cout<<"the char is consonent";
// } 
// int age=14;


// (age>=18)? cout<<"you can vote":cout<<"you can not vote";
// for(int i=10;i>=1;i--){
//     cout<<i<<"\n";
// }
//sum of n number;
// int n=10,sum=0;
// for(int i=1;i<=n;i++){
//     // sum=sum+i;
//     sum+=i;
// }
// cout<<"the sum is"<<sum;
// logic of factorial number !!!!
// int n=4,fact=1;
// for(int i=1;i<=n;i++){
//     // sum=sum+i;
//     fact*=i;
// }
// cout<<"the factorial is-:"<<fact;
// factor of a number;
int n=4;int c=0;
for(int i=1;i<=20;i++){
    if(n%i==0){
        // cout<<i<<endl;
        c++;

    }
}
if(c==2){
    cout<<"prime";
}else{
    cout<<"not prime";
}
   



}