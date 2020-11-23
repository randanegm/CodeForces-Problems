#include <iostream>

using namespace std;
int n;
int arr[109];
int s;
int k,x,y,o;
int b=1000;

int main()
{

       cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i]>k){
            k=arr[i];
            x=i; //max

        }

        if(arr[i]<=b){
            b=arr[i];
            y=i; //min
        }

    }
    o=n-y-1;
    s=x+o;
    if (x>y){
        s=x+o-1;
    }
    cout << s << endl;
    return 0;
}
