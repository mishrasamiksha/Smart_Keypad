#include <iostream>
using namespace std;

char Keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printKeypadStrings(char *input,char *output,int i,int j)
{
    if(input[i]=='\0')
    {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    int digit = input[i] - '0';
    for(int k=0;Keypad[digit][k]!='\0';k++)
    {
        output[j] = Keypad[digit][k];
        printKeypadStrings(input,output,i+1,j+1);
    }
    

}

int main() {
    char input[100];
    char output[100];
    cin>>input;
    printKeypadStrings(input,output,0,0);
}
