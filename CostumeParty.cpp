//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, s, cowl[20020], sum=0;
    int i, j;
    
    cin >> n >> s;
    for(i=0;i<n;i++)
        cin >> cowl[i];
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(cowl[i]+cowl[j]<=s){
                sum++;
            }
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
