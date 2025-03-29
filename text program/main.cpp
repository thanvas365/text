#include <iostream>

using namespace std;

int main()
{
string text;
cout << "Input a text\n" ;
getline(cin,text);
int sum=1;
char a;
for(char a:text){
    if(a==' '){
        sum++;
    }
}
cout << "\nNumber of words : " << sum;

     return 0;
}
