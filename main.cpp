#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int arr[100][100], num, count = 0,j, k = 0, row;
    cout<<"Enter a number from 1 - 100: ";
    while(1){
        cin>>num;
        if(num < 0 || num > 100){
            cout<<"Invalid input!" <<endl
                <<"Enter another number";
            cin>>num;
        }
        else
            break;
    }
    for(int i = 0; i < 100; i++){
        for(j = 10*i; j < 10*(i + 1); j++){
            arr[i][k++] = j;
            if(j == num)
                break;
        }
        k = 0;
        if(j == num)
            break;
    }

    if(num%10 == 0){row = num/10;}
    else{row = (num/10)+1;}

    for(int i = 0; i < row; i++){
        for(int j = 0; j < 10; j++){
            k = arr[i][j];
            cout<<setw(3)<<k;
            if(k == num)
                break;
        }
        cout<<endl;
        if(k == num)
            break;
    }

    return 0;
}
