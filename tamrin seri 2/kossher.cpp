#include <iostream>
using namespace std;
int main(){
    string num[10];
    vector answers;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(num[i].length > 2){
            string temp = num[i];
            if(int(temp[length-2]) == 31 || int(temp[length-2]) == 33 || int(temp[length-2]) == 35 || int(temp[length-2]) == 37 || int(temp[length-2]) == 39){
                answers.push(temp);
                count++;
            }
        }
    }
    for(int i = 0; i < answers.size(); i ++){
        cout << answers[i];
    }
    cout << count;
    
}